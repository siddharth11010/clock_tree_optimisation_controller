# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vtop_verilator.mk

default: Vtop_verilator

### Constants...
# Perl executable (from $PERL, defaults to 'perl' if not set)
PERL = perl
# Python3 executable (from $PYTHON3, defaults to 'python3' if not set)
PYTHON3 = python3
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /nix/store/vj15hp8sbhlhfvfdr5gbxp5791xrg515-verilator-5.046/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= /nix/store/adx3xvgndxyjrlz56ivg8hxbxm7qgs40-systemc-3.0.1/include
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= /nix/store/adx3xvgndxyjrlz56ivg8hxbxm7qgs40-systemc-3.0.1/lib

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
VM_PREFIX = Vtop_verilator
# Module prefix (from --prefix)
VM_MODPREFIX = Vtop_verilator
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
  -I../src/lowrisc_dv_crypto_prince_ref_0.1 \
  -I../src/lowrisc_dv_dpi_c_uartdpi_0.1 \
  -I../src/lowrisc_dv_dv_fcov_macros_0 \
  -I../src/lowrisc_dv_dv_macros_0 \
  -I../src/lowrisc_dv_secded_enc_0 \
  -I../src/lowrisc_dv_verilator_ibex_pcounts_0/cpp \
  -I../src/lowrisc_dv_verilator_simutil_verilator_0/cpp \
  -I../src/lowrisc_prim_util_get_scramble_params_0/rtl \
  -I../src/lowrisc_prim_util_memload_0/rtl \
  -I../src/lowrisc_dv_scramble_model_0 \
  -I../src/lowrisc_dv_verilator_memutil_dpi_0/cpp \
  -I../src/lowrisc_dv_verilator_memutil_dpi_scrambled_0/cpp \
  -I../src/lowrisc_dv_verilator_memutil_verilator_0/cpp \
  -I../src/lowrisc_prim_assert_0.1/rtl \
  -I../src/lowrisc_ibex_demo_system_0/src/dv/verilator \
  -std=c++14 -Wall -DVM_TRACE_FMT_FST -DTOPLEVEL_NAME=top_verilator \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
  -lz \
  -pthread -lutil -lelf \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
  uartdpi \
  scramble_model \
  secded_enc \
  ibex_pcounts \
  dpi_memutil \
  ecc32_mem_area \
  mem_area \
  sv_scoped \
  scrambled_ecc32_mem_area \
  verilator_memutil \
  verilated_toplevel \
  verilator_sim_ctrl \
  ibex_demo_system \
  ibex_demo_system_main \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
  . \
  ../src/lowrisc_dv_dpi_c_uartdpi_0.1 \
  ../src/lowrisc_dv_scramble_model_0 \
  ../src/lowrisc_dv_secded_enc_0 \
  ../src/lowrisc_dv_verilator_ibex_pcounts_0/cpp \
  ../src/lowrisc_dv_verilator_memutil_dpi_0/cpp \
  ../src/lowrisc_dv_verilator_memutil_dpi_scrambled_0/cpp \
  ../src/lowrisc_dv_verilator_memutil_verilator_0/cpp \
  ../src/lowrisc_dv_verilator_simutil_verilator_0/cpp \
  ../src/lowrisc_ibex_demo_system_0/src/dv/verilator \

### Default rules...
# Include list of all generated classes
include Vtop_verilator_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

uartdpi.o: ../src/lowrisc_dv_dpi_c_uartdpi_0.1/uartdpi.c 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
scramble_model.o: ../src/lowrisc_dv_scramble_model_0/scramble_model.cc 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
secded_enc.o: ../src/lowrisc_dv_secded_enc_0/secded_enc.c 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
ibex_pcounts.o: ../src/lowrisc_dv_verilator_ibex_pcounts_0/cpp/ibex_pcounts.cc 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
dpi_memutil.o: ../src/lowrisc_dv_verilator_memutil_dpi_0/cpp/dpi_memutil.cc 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
ecc32_mem_area.o: ../src/lowrisc_dv_verilator_memutil_dpi_0/cpp/ecc32_mem_area.cc 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
mem_area.o: ../src/lowrisc_dv_verilator_memutil_dpi_0/cpp/mem_area.cc 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
sv_scoped.o: ../src/lowrisc_dv_verilator_memutil_dpi_0/cpp/sv_scoped.cc 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
scrambled_ecc32_mem_area.o: ../src/lowrisc_dv_verilator_memutil_dpi_scrambled_0/cpp/scrambled_ecc32_mem_area.cc 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
verilator_memutil.o: ../src/lowrisc_dv_verilator_memutil_verilator_0/cpp/verilator_memutil.cc 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
verilated_toplevel.o: ../src/lowrisc_dv_verilator_simutil_verilator_0/cpp/verilated_toplevel.cc 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
verilator_sim_ctrl.o: ../src/lowrisc_dv_verilator_simutil_verilator_0/cpp/verilator_sim_ctrl.cc 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
ibex_demo_system.o: ../src/lowrisc_ibex_demo_system_0/src/dv/verilator/ibex_demo_system.cc 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
ibex_demo_system_main.o: ../src/lowrisc_ibex_demo_system_0/src/dv/verilator/ibex_demo_system_main.cc 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<

### Link rules... (from --exe)
Vtop_verilator: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@

# Verilated -*- Makefile -*-
