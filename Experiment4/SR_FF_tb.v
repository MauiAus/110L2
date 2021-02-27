`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:18:36 01/11/2021
// Design Name:   SR_FF
// Module Name:   C:/Users/110L/Desktop/110/Experiment4/SR_FF_tb.v
// Project Name:  Experiment4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SR_FF
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SR_FF_tb;

	// Inputs
	reg s;
	reg r;
	reg clk;

	// Outputs
	wire q;
	wire qb;

	// Instantiate the Unit Under Test (UUT)
	SR_FF uut (
		.s(s), 
		.r(r), 
		.clk(clk), 
		.q(q), 
		.qb(qb)
	);

	initial begin
		s=0;r=0;clk=0;
		#100;s=0;r=0;clk=1;
		#100;s=0;r=1;clk=0;
		#100;s=0;r=1;clk=1;
		#100;s=1;r=0;clk=0;
		#100;s=1;r=0;clk=1;
		#100;s=1;r=1;clk=0;
		#100;s=1;r=1;clk=1;
		//SR FF testbench by Mark Austin L. Pagarigan
	end
      
endmodule

