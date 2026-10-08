## Based on https://www.realdigital.org/downloads/8d5c167add28c014173edcf51db78bb9.txt
## and modified for Ibex

# I am modifying it from default FPGA board implementation to asic keeping only clock and timing definations
# Define clock constraint for ASIC timing analysis
create_clock -name gclk -period 10.00 [get_ports IO_CLK]

# Set basic input/output delays (standard practice for ASIC timing closure)
set_input_delay -clock gclk 2.0 [all_inputs]
set_output_delay -clock gclk 2.0 [all_outputs]
