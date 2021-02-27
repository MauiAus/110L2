`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:27:59 02/13/2021
// Design Name:   fsm1
// Module Name:   C:/Users/110L/Desktop/110/fsm1/fsm1_tb.v
// Project Name:  fsm1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fsm1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module fsm1_tb;

	// Inputs
	reg clk;
	reg rst;
	reg in;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	fsm1 uut (
		.clk(clk), 
		.rst(rst), 
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;rst = 1;in = 1;
		#50;clk = 1;rst = 0;in = 1;#50;clk = 0;rst = 0;in = 0; 
      #50;clk = 1;rst = 0;in = 0;#50;clk = 0;rst = 0;in = 1;
		#50;clk = 1;rst = 0;in = 1;#50;clk = 0;rst = 0;in = 1;
		#50;clk = 1;rst = 0;in = 1;#50;clk = 0;rst = 0;in = 0;
		//FSM for 1011 test bench

	end
      
endmodule

