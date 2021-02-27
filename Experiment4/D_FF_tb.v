`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:14:49 01/11/2021
// Design Name:   D_FF
// Module Name:   C:/Users/110L/Desktop/110/Experiment4/D_FF_tb.v
// Project Name:  Experiment4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: D_FF
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module D_FF_tb;

	// Inputs
	reg din;
	reg clk;

	// Outputs
	wire q;

	// Instantiate the Unit Under Test (UUT)
	D_FF uut (
		.q(q), 
		.din(din), 
		.clk(clk)
	);

	initial begin
		din=0;clk=0;
		#100 din=0;clk=1;
		#100 din=1;clk=0;
		#100 din=1;clk=1;
		//D FF testbench by Mark Austin L. Pagarigan
	end
      
endmodule

