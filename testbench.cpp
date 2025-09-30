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
    static constexpr double CLK_PERIOD_PS = 10.0 * 1000; 
    static constexpr int ADC_RESOLUTION = 16;
    static constexpr int MAX_ADC_VALUE = (1 << ADC_RESOLUTION) - 1;
    
public:
    SincFilterTestbench() : main_time(0), vcd_time(0) {
        dut = new Vdec256sinc24b;
        Verilated::traceEverOn(true);
        tfp = new VerilatedVcdC;
        dut->trace(tfp, 99);
        tfp->open("dec256sinc24b.vcd");
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
        vcd_time += CLK_PERIOD_PS / 2.0;
    }
    
    void generate_constant_frequency(double divider, int duration_ticks) {
        int clock_count = 0;
        
        for (int i = 0; i < duration_ticks; i++) {
            if (clock_count >= divider / 2) {
                dut->mdata1 = !dut->mdata1;
                clock_count = 0;
            }
            clock_count++;
            tick();
        }
    }
    
    void generate_sine_pwm(double freq_hz, double amplitude, int duration_ticks) {
        double time_step = 0.1;
        double phase = 0.0;
        double phase_increment = 2.0 * M_PI * freq_hz * time_step;
        
        
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
        
        reset();
        
        
        std::cout << "\n=== 测试完成 ===" << std::endl;
    }
    
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    SincFilterTestbench tb;
    tb.run_tests();
    
    std::cout << "VCD波形文件已生成: dec256sinc24b_waveform.vcd" << std::endl;
    
    return 0;
}