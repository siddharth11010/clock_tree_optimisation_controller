# SPDX-FileCopyrightText: © 2025 Project Template Contributors
# SPDX-License-Identifier: Apache-2.0

import os
import random
import logging
from pathlib import Path

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Timer, Edge, RisingEdge, FallingEdge, ClockCycles
from cocotb_tools.runner import get_runner

#sim = os.getenv("SIM", "icarus")
sim = os.getenv("SIM", "verilator")
gl = os.getenv("GL", False)
pdk_root = os.getenv("PDK_ROOT", Path(__file__).resolve().parent / "../gf180mcu")
pdk = os.getenv("PDK", "gf180mcuD")
scl = os.getenv("SCL", "gf180mcu_fd_sc_mcu7t5v0")
pad = os.getenv("PAD", "gf180mcu_fd_io")
sram = os.getenv("SRAM", "gf180mcu_fd_ip_sram")
slot = os.getenv("SLOT", "1x1")

hdl_toplevel = "ibex_demo_system"

async def set_defaults(dut):
    # commenting the chiptop design
    # dut.input_PAD.value = 0
    """Set initial default values for all top-level input pins before clock starts"""
    # Active-low reset held low initially
    dut.rst_ni.value = 0
    
    # UART receive pin idle state (logic high for UART)
    if hasattr(dut, 'uart_rx'):
        dut.uart_rx.value = 1

    # Optional GPIO/switch inputs if present on top level
    if hasattr(dut, 'gp_i'):
        dut.gp_i.value = 0

async def enable_power(dut):
    dut.VDD.value = 1
    dut.VSS.value = 0

async def start_clock(clock, freq=50):
    """Start the clock @ freq MHz"""
    c = Clock(clock, 1 / freq * 1000, "ns")
    cocotb.start_soon(c.start())


async def reset(reset, active_low=True, time_ns=1000):
    """Reset dut"""
    cocotb.log.info("Reset asserted...")

    reset.value = not active_low
    await Timer(time_ns, "ns")
    reset.value = active_low

    cocotb.log.info("Reset deasserted.")


async def start_up(dut):
    """Startup sequence"""
    await set_defaults(dut)
    if gl:
        await enable_power(dut)
    
    # 1. Start system clock at 50 MHz on clk_i
    await start_clock(dut.clk_i, freq=50)
    
    # 2. Assert and release active-low reset (rst_ni)
    # Holds rst_ni=0 for 100ns, then sets rst_ni=1
    await reset(dut.rst_ni, active_low=True, time_ns=100)

@cocotb.test()
async def test_counter(dut):
    #    """Run the counter test"""

    #    # Create a logger for this testbench
    #logger = logging.getLogger("my_testbench")

    #logger.info("Startup sequence...")

    ## Start up
    #await start_up(dut)

    #logger.info("Running the test...")

    ## Wait for some time...
    #await ClockCycles(dut.clk_PAD, 10)

    ## Please note that cocotb cannpt write to individual bits of a vector.
    ## If you need to write to individual bits, you can separate e.g. the 
    ## bidir_PAD vector into individual bits through a tb wrapper.
    ## Even better, use individual pad names for each bit.

    ## Start the counter by setting all inputs to 1
    #dut.input_PAD.value = -1

    ## Wait for a number of clock cycles
    #await ClockCycles(dut.clk_PAD, 100)

    ## Check the end result of the counter
    #assert dut.bidir_PAD.value == 100 - 1

    #logger.info("Done!")

    """Run the Ibex startup test"""
    logger = logging.getLogger("ibex_testbench")
    logger.info("Executing Ibex startup sequence...")

    await start_up(dut)

    logger.info("Waiting for core execution...")
    await ClockCycles(dut.clk_i, 100)

    logger.info("Ibex core is running!")

    #def chip_top_runner():
    #
    #    proj_path = Path(__file__).resolve().parent
    #
    #    sources = []
    #    defines = {f"SLOT_{slot.upper()}": True}
    #    includes = [proj_path / "../src/"]
    #
    #    # Set the LibreLane PDK/SCL/PAD defines
    #    defines[f"PDK_{pdk.replace('-','_')}"] = True
    #    defines[f"SCL_{scl}"] = True
    #    defines[f"PAD_{pad}"] = True
    #    defines[f"SRAM_{sram}"] = True
    #
    #    if gl:
    #        # SCL models
    #        sources.append(Path(pdk_root) / pdk / "libs.ref" / scl / "verilog" / f"{scl}.v")
    #        if scl != "gf180mcu_as_sc_mcu7t3v3":
    #            sources.append(Path(pdk_root) / pdk / "libs.ref" / scl / "verilog" / "primitives.v")
    #
    #        # We use the powered netlist
    #        sources.append(proj_path / f"../final/pnl/{hdl_toplevel}.pnl.v")
    #
    #        defines.update({"FUNCTIONAL": True, "USE_POWER_PINS": True})
    #    else:
    #        sources.append(proj_path / "../src/chip_top.sv")
    #        sources.append(proj_path / "../src/chip_core.sv")
    #
    #    sources += [
    #        # IO pad models
    #        Path(pdk_root) / pdk / f"libs.ref/{pad}/verilog/{pad}.v",
    #        
    #        # SRAM macros
    #        Path(pdk_root) / pdk / f"libs.ref/{sram}/verilog/{sram}__sram512x8m8wm1.v",
    #        
    #        # Custom IP
    #        proj_path / "../ip/gf180mcu_ws_ip__logo/vh/gf180mcu_ws_ip__logo.v",
    #        proj_path / "../ip/gf180mcu_ws_ip__marker/vh/gf180mcu_ws_ip__marker.v",
    #        proj_path / "../ip/gf180mcu_ws_ip__qrcode_id/vh/gf180mcu_ws_ip__qrcode_id.v",
    #        proj_path / "../ip/gf180mcu_ws_ip__shuttle_id/vh/gf180mcu_ws_ip__shuttle_id.v",
    #        proj_path / "../ip/gf180mcu_ws_ip__project_id/vh/gf180mcu_ws_ip__project_id.v",
    #        
    #    ]
    #
    #    build_args = []
    #
    #    if sim == "icarus":
    #        # For debugging
    #        # build_args = ["-Winfloop", "-pfileline=1"]
    #        pass
    #
    #    if sim == "verilator":
    #        build_args = ["--timing", "--trace", "--trace-fst", "--trace-structs"]
    #
    #    runner = get_runner(sim)
    #    runner.build(
    #        sources=sources,
    #        hdl_toplevel=hdl_toplevel,
    #        defines=defines,
    #        always=True,
    #        includes=includes,
    #        build_args=build_args,
    #        waves=True,
    #    )
    #
    #    plusargs = []
    #
    #    runner.test(
    #        hdl_toplevel=hdl_toplevel,
    #        test_module="chip_top_tb,",
    #        plusargs=plusargs,
    #        waves=True,
    #    )

def ibex_demo_system_runner():
    proj_path = Path(__file__).resolve().parent
    src_dir = (proj_path / "../src").resolve()

    sources = []
    defines = {f"SLOT_{slot.upper()}": True}

    # 1. Include all subdirectories containing .svh header files
    includes = [
        src_dir,
        src_dir / "include",
        src_dir / "vendor/lowrisc_ip/ip/prim/rtl",
    ]

    # Preserve template PDK defines
    defines[f"PDK_{pdk.replace('-','_')}"] = True
    defines[f"SCL_{scl}"] = True
    defines[f"PAD_{pad}"] = True
    defines[f"SRAM_{sram}"] = True

    if gl:
        sources.append(Path(pdk_root) / pdk / "libs.ref" / scl / "verilog" / f"{scl}.v")
        if scl != "gf180mcu_as_sc_mcu7t3v3":
            sources.append(Path(pdk_root) / pdk / "libs.ref" / scl / "verilog" / "primitives.v")
        sources.append(proj_path / f"../final/pnl/{hdl_toplevel}.pnl.v")
        defines.update({"FUNCTIONAL": True, "USE_POWER_PINS": True})
    else:
        # 2. Automatically collect all synthesizable RTL files under src/
        # (Excluding FPGA-specific vendor primitives in src/rtl/fpga)
        for root, _, files in os.walk(src_dir):
            if "fpga" in Path(root).parts:
                continue  # Skip FPGA-only wrappers/primitives
            for f in files:
                if (f.endswith(".sv") or f.endswith(".v")) and not f.endswith(".svh"):
                    sources.append(Path(root) / f)

    # 3. Retain PDK IP models
    sources += [
        Path(pdk_root) / pdk / f"libs.ref/{pad}/verilog/{pad}.v",
        Path(pdk_root) / pdk / f"libs.ref/{sram}/verilog/{sram}__sram512x8m8wm1.v",
        proj_path / "../ip/gf180mcu_ws_ip__logo/vh/gf180mcu_ws_ip__logo.v",
        proj_path / "../ip/gf180mcu_ws_ip__marker/vh/gf180mcu_ws_ip__marker.v",
        proj_path / "../ip/gf180mcu_ws_ip__qrcode_id/vh/gf180mcu_ws_ip__qrcode_id.v",
        proj_path / "../ip/gf180mcu_ws_ip__shuttle_id/vh/gf180mcu_ws_ip__shuttle_id.v",
        proj_path / "../ip/gf180mcu_ws_ip__project_id/vh/gf180mcu_ws_ip__project_id.v",
    ]


if __name__ == "__main__":
    ibex_demo_system_runner()

    #if __name__ == "__main__":
    #    chip_top_runner()
