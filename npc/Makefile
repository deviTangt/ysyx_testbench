all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator --cc --exe --build -j 0 --prof-exec -Wall csrc/main.cpp vsrc/top.v
	obj_dir/Vtop


include ../Makefile
