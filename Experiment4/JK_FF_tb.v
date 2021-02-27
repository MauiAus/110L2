`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:16:52 01/11/2021
// Design Name:   JK_FF
// Module Name:   C:/Users/110L/Desktop/110/Experiment4/JK_FF_tb.v
// Project Name:  Experiment4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: JK_FF
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module JK_FF_tb;

	// Inputs
	reg j;
	reg k;
	reg clk;

	// Outputs
	wire q;
	wire qb;

	// Instantiate the Unit Under Test (UUT)
	JK_FF uut (
		.j(j), 
		.k(k), 
		.clk(clk), 
		.q(q), 
		.qb(qb)
	);

	initial begin
		j=0;k=0;clk=0;
		#100;j=0;k=0;clk=1;
		#100;j=0;k=1;clk=0;
		#100;j=0;k=1;clk=1;
		#100;j=1;k=0;clk=0;
		#100;j=1;k=0;clk=1;
		#100;j=1;k=1;clk=0;
		#100;j=1;k=1;clk=1;
		//JK Flip Flop testbench by Mark Austin L. Pagarigan
	end
      
endmodule

