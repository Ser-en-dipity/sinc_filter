# Makefile for Verilator simulation
VERILATOR = verilator
VERILATOR_FLAGS = -Wall --cc --exe --build --trace
SOURCES = Vdec256sinc24b.cpp testbench.cpp

all: compile run

compile:
	$(VERILATOR) $(VERILATOR_FLAGS) --top-module dec256sinc24b dec256sinc24b.v testbench.cpp

run:
	./obj_dir/Vdec256sinc24b

wave:
	gtkwave sinc_filter_analysis.vcd &

clean:
	rm -rf obj_dir/ *.vcd

.PHONY: all compile run wave clean