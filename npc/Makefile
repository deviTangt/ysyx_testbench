# define variables
TOPNAME = top
NXDC_FILES = constr/top.nxdc
INC_PATH = $(abspath ./cinc)
INC_PATH += $(abspath ./csrc)

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  \
				-O3 --x-assign fast --x-initial fast --noassert
VERILATOR_CHECK = --lint-only

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)
OBJ_DIR_TB = $(BUILD_DIR)/obj_dir_tb
TB = $(BUILD_DIR)/$(TOPNAME)_tb

# create ./build if non exist
$(shell mkdir -p $(BUILD_DIR))

# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	@python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS += $(SRC_AUTO_BIND)
TCSRCS = $(shell find $(abspath ./test_bench) -name "*.c" -or -name "*.cc" -or -name "*.cpp")

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS = $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""


$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	@rm -rf $(OBJ_DIR_TB)
	@$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN)) \
		--trace-fst

$(TB): $(VSRCS) $(TCSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	@rm -rf $(OBJ_DIR_TB)
	@$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $(VSRCS) $(TCSRCS) $(NVBOARD_ARCHIVE) \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR_TB) --exe -o $(abspath $(TB)) \
		--trace-fst

default: $(BIN)

all: default
	@echo "Write this Makefile by your self. Default"

# 仿真
sim: $(BIN)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	@$^

# validate check
check: $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	@rm -rf $(OBJ_DIR_TB)
	$(VERILATOR) $(VERILATOR_CHECK) $^

run: $(BIN)
	@$^

tb: $(TB)
	@echo "Work on Testbench"
	@$^

# 清理目标
clean: 
	rm -rf $(BUILD_DIR)

# 打开GTK文件
gtk:
	gtkwave wave.fst


include ../Makefile
.PHONY: default all sim check run tb clean gtk
