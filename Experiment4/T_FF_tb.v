`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:20:34 01/11/2021
// Design Name:   T_FF
// Module Name:   C:/Users/110L/Desktop/110/Experiment4/T_FF_tb.v
// Project Name:  Experiment4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: T_FF
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module T_FF_tb;

	// Inputs
	reg t;
	reg clk;

	// Outputs
	wire q;

	// Instantiate the Unit Under Test (UUT)
	T_FF uut (
		.q(q), 
		.t(t), 
		.clk(clk)
	);

	initial begin
		t=0;clk=0;
		#100 t=0;clk=1;
		#100 t=1;clk=0;
		#100 t=1;clk=1;
		//T FF testbench by Mark Austin L. Pagarigan
	end
      
endmodule

