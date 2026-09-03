# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vtop.mk

default: /home/devi/Desktop/ysyx_testbench/npc/build/top_tb

### Constants...
# Perl executable (from $PERL, defaults to 'perl' if not set)
PERL = perl
# Python3 executable (from $PYTHON3, defaults to 'python3' if not set)
PYTHON3 = python3
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?=
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?=

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vtop
# Module prefix (from --prefix)
VM_MODPREFIX = Vtop
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
  -MMD \
  -O3 \
  -I/usr/include/SDL2 \
  -D_GNU_SOURCE=1 \
  -D_REENTRANT \
  -I/home/devi/Desktop/ysyx_testbench/npc/cinc \
  -I/home/devi/Desktop/ysyx_testbench/npc/csrc \
  -I/home/devi/Desktop/ysyx_testbench/nvboard/usr/include \
  -DTOP_NAME="Vtop" \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
  /home/devi/Desktop/ysyx_testbench/nvboard/build/nvboard.a \
  -L/usr/lib \
  -lSDL2 \
  -lSDL2_image \
  -lSDL2_ttf \
  -lz \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
  main_tb \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
  ../.. \
  ../../_test_bench \

### Default rules...
# Include list of all generated classes
include Vtop_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

main_tb.o: /home/devi/Desktop/ysyx_testbench/npc/_test_bench/main_tb.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<

### Link rules... (from --exe)
/home/devi/Desktop/ysyx_testbench/npc/build/top_tb: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@

# Verilated -*- Makefile -*-
