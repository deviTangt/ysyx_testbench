# 定义变量
VERILATOR = verilator
VERILATOR_FLAGS = --cc --exe --trace
TOP_MODULE = top
TESTBENCH = main.cpp
BUILD_DIR = obj_dir
EXECUTABLE = $(BUILD_DIR)/V$(TOP_MODULE)

all:
	@echo "Write this Makefile by your self."

# 仿真
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	$(VERILATOR) $(VERILATOR_FLAGS) --build -j 0 --prof-exec -Wall csrc/main.cpp vsrc/top.v
	obj_dir/Vtop


# 清理目标
 
clean:
	$(MAKE) -C $(BUILD_DIR) -f V$(TOP_MODULE).mk clean
	rm -rf $(BUILD_DIR)

include ../Makefile
