# Makefile for Verilator simulation

# 工具设置
VERILATOR = verilator
CC = g++

# Verilator flags
VERILATOR_FLAGS = -Wall --cc --exe --build --trace 

# 源文件
VERILOG_SOURCES = dec256sinc24b.v
CPP_SOURCES = testbench.cpp

# 目标
TARGET = Vdec256sinc24b

# 默认目标
all: $(TARGET)

# 编译规则
$(TARGET): $(VERILOG_SOURCES) $(CPP_SOURCES)
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILOG_SOURCES) $(CPP_SOURCES)

# 运行仿真
run: $(TARGET)
	./obj_dir/$(TARGET)

# 查看波形
wave:
	gtkwave dec256sinc24b.vcd &

# 清理
clean:
	rm -rf obj_dir
	rm -f dec256sinc24b.vcd

.PHONY: all run wave clean