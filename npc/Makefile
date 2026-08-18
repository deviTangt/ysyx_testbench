# 定义变量
VERILATOR = verilator
VERILATOR_BUILD = --cc --exe --build -j 0 -Wall
TOP_MODULE = vsrc/top
TESTBENCH = csrc/main.cpp
BUILD_DIR = obj_dir
EXECUTABLE = $(BUILD_DIR)/V$(TOP_MODULE)

all:
	@echo "Write this Makefile by your self."

# 仿真
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator $(VERILATOR_BUILD) --trace-fst $(TESTBENCH) $(TOP_MODULE)
	obj_dir/Vtop


# 清理目标
clean:
	rm -rf $(BUILD_DIR)

# 打开GTK文件
gtk:
	gtkwave wave.fst

include ../Makefile
