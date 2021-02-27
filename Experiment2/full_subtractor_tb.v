`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:08:44 01/11/2021
// Design Name:   p11
// Module Name:   C:/Users/110L/Desktop/110/Experiment2/full_subtractor_tb.v
// Project Name:  Experiment2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: p11
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module full_subtractor_tb;

	// Inputs
	reg a;
	reg b;
	reg c;

	// Outputs
	wire diff;
	wire borrow;

	// Instantiate the Unit Under Test (UUT)
	p11 uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.diff(diff), 
		.borrow(borrow)
	);

	initial begin
		a=0;b=0;c=0;
		#100; a=0;b=0;c=1;
		#100; a=0;b=1;c=0;
		#100; a=0;b=1;c=1;
		#100; a=1;b=0;c=0;
		#100; a=1;b=0;c=1;
		#100; a=1;b=1;c=0;
		#100; a=1;b=1;c=1;
		// Full subtractor test bench by Mark Austin L. Pagarigan Ex 2 CPE 110L E03
	end
      
endmodule

