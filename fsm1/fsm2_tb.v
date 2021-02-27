`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:04:25 02/13/2021
// Design Name:   fsm2
// Module Name:   C:/Users/110L/Desktop/110/fsm1/fsm2_tb.v
// Project Name:  fsm1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fsm2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module fsm2_tb;

	// Inputs
	reg clk;
	reg rst;
	reg in;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	fsm2 uut (
		.clk(clk), 
		.rst(rst), 
		.in(in), 
		.out(out)
	);

	initial begin
		clk = 0;rst = 0;in = 1;
		#50;clk = 1;rst = 0;in = 1;#50;clk = 0;rst = 0;in = 0; 
      #50;clk = 1;rst = 0;in = 0;#50;clk = 0;rst = 0;in = 1;
		#50;clk = 1;rst = 0;in = 1;#50;clk = 0;rst = 0;in = 0;
		#50;clk = 1;rst = 0;in = 0;#50;clk = 0;rst = 0;in = 0;
		#50;clk = 1;rst = 0;in = 1;#50;clk = 0;rst = 0;in = 0; 
      #50;clk = 1;rst = 0;in = 0;#50;clk = 0;rst = 0;in = 1;
		#50;clk = 1;rst = 0;in = 1;#50;clk = 0;rst = 0;in = 1;
		//FSM 1010101 test Bench by Mark Austin L. Pagarigan
	end
      
endmodule

