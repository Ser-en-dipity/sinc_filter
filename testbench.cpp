#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include "Vdec256sinc24b.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

class SincFilterTestbench {
private:
    Vdec256sinc24b* dut;
    VerilatedVcdC* tfp;
    vluint64_t main_time;
    double vcd_time;
    
    // 测试参数
    static constexpr double CLK_PERIOD_NS = 10.0; // 100MHz
    static constexpr int ADC_RESOLUTION = 16;
    static constexpr int MAX_ADC_VALUE = (1 << ADC_RESOLUTION) - 1;
    
public:
    SincFilterTestbench() : main_time(0), vcd_time(0) {
        dut = new Vdec256sinc24b;
        Verilated::traceEverOn(true);
        tfp = new VerilatedVcdC;
        dut->trace(tfp, 99);
        tfp->open("dec256sinc24b_waveform.vcd");
    }
    
    ~SincFilterTestbench() {
        tfp->close();
        delete dut;
        delete tfp;
    }
    
    void reset() {
        dut->reset = 1;
        dut->mclk1 = 0;
        dut->mdata1 = 0;
        dut->dec_rate = 256;
        tick();
        tick();
        tick();
        dut->reset = 0;
    }
    
    void tick() {
        dut->mclk1 = 0;
        eval();
        dut->mclk1 = 1;
        eval();
        main_time++;
    }
    
    void eval() {
        dut->eval();
        tfp->dump(vcd_time);
        vcd_time += CLK_PERIOD_NS / 2.0;
    }
    
    void generate_constant_frequency(double freq_hz, int duration_ticks) {
        double period_clocks = (1.0e9 / freq_hz) / CLK_PERIOD_NS;
        int clock_count = 0;
        
        std::cout << "生成频率: " << freq_hz/1000.0 << " kHz, 周期: " << period_clocks << " 个时钟" << std::endl;
        
        for (int i = 0; i < duration_ticks; i++) {
            if (clock_count >= period_clocks / 2) {
                dut->mdata1 = !dut->mdata1;
                clock_count = 0;
            }
            clock_count++;
            tick();
        }
    }
    
    void generate_sine_pwm(double freq_hz, double amplitude, int duration_ticks) {
        double time_step = CLK_PERIOD_NS * 1e-9;
        double phase = 0.0;
        double phase_increment = 2.0 * M_PI * freq_hz * time_step;
        
        std::cout << "生成正弦PWM: " << freq_hz/1000.0 << " kHz, 幅度: " << amplitude << std::endl;
        
        for (int i = 0; i < duration_ticks; i++) {
            double sine_value = amplitude * sin(phase);
            double pwm_threshold = (sine_value + 1.0) / 2.0;
            int random_val = rand() % MAX_ADC_VALUE;
            dut->mdata1 = (random_val < pwm_threshold * MAX_ADC_VALUE) ? 1 : 0;
            
            phase += phase_increment;
            if (phase >= 2.0 * M_PI) phase -= 2.0 * M_PI;
            
            tick();
        }
    }
    
    void run_tests() {
        std::cout << "=== Sinc滤波器测试开始 ===" << std::endl;
        
        // 计算理论参数
        calculate_parameters();
        
        reset();
        
        // 测试1: 低频信号
        std::cout << "\n=== 测试1: 低频信号 (1kHz) ===" << std::endl;
        dut->dec_rate = 256;
        generate_constant_frequency(1000, 100000);
        
        // // 测试2: 通带内信号
        // std::cout << "\n=== 测试2: 通带内信号 (10kHz) ===" << std::endl;
        // dut->dec_rate = 256;
        // generate_constant_frequency(10000, 50000);
        
        // // 测试3: 阻带信号
        // std::cout << "\n=== 测试3: 阻带信号 (50kHz) ===" << std::endl;
        // dut->dec_rate = 256;
        // generate_constant_frequency(50000, 50000);
        
        // // 测试4: 高频信号
        // std::cout << "\n=== 测试4: 高频信号 (200kHz) ===" << std::endl;
        // dut->dec_rate = 256;
        // generate_constant_frequency(200000, 50000);
        
        // // 测试5: 奈奎斯特频率附近
        // std::cout << "\n=== 测试5: 奈奎斯特频率附近 (95kHz) ===" << std::endl;
        // dut->dec_rate = 256;
        // generate_constant_frequency(95000, 50000);
        
        // // 测试6: 正弦波PWM
        // std::cout << "\n=== 测试6: 正弦波PWM信号 (5kHz) ===" << std::endl;
        // dut->dec_rate = 256;
        // generate_sine_pwm(5000, 0.9, 100000);
        
        // // 测试7: 不同抽取率
        // std::cout << "\n=== 测试7: 不同抽取率测试 ===" << std::endl;
        
        // int dec_rates[] = {32, 128, 512, 1024};
        // for (int dr : dec_rates) {
        //     std::cout << "\n--- 抽取率: " << dr << " ---" << std::endl;
        //     dut->dec_rate = dr;
        //     generate_constant_frequency(1000, 20000);
        // }
        
        std::cout << "\n=== 测试完成 ===" << std::endl;
    }
    
    void calculate_parameters() {
        std::cout << "=== 滤波器理论参数 ===" << std::endl;
        double sampling_freq_mhz = 100.0; // 100MHz
        
        int dec_rates[] = {32, 64, 128, 256, 512, 1024, 2048, 4096};
        
        for (int dr : dec_rates) {
            double output_rate_khz = sampling_freq_mhz * 1000.0 / dr;
            double nyquist_freq_khz = output_rate_khz / 2.0;
            double cutoff_freq_khz = output_rate_khz * 0.262; // Sinc3滤波器特性
            
            std::cout << "抽取率: " << dr 
                      << " | 输出率: " << output_rate_khz << " kHz"
                      << " | 奈奎斯特: " << nyquist_freq_khz << " kHz"
                      << " | 截止频率: " << cutoff_freq_khz << " kHz" << std::endl;
        }
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    SincFilterTestbench tb;
    tb.run_tests();
    
    std::cout << "VCD波形文件已生成: dec256sinc24b_waveform.vcd" << std::endl;
    
    return 0;
}