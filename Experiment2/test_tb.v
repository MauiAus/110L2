`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:27:17 01/11/2021
// Design Name:   test
// Module Name:   C:/Users/110L/Desktop/110/Experiment2/test_tb.v
// Project Name:  Experiment2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: test
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_tb;

	// Inputs
	reg a;
	reg b;
	reg ci;

	// Outputs
	wire s;
	wire co;

	// Instantiate the Unit Under Test (UUT)
	test uut (
		.a(a), 
		.b(b), 
		.ci(ci), 
		.s(s), 
		.co(co)
	);

	initial begin
		a=0;b=0;ci=0;
		#100; a=0;b=0;ci=1;
		#100; a=0;b=1;ci=0;
		#100; a=0;b=1;ci=1;
		#100; a=1;b=0;ci=0;
		#100; a=1;b=0;ci=1;
		#100; a=1;b=1;ci=0;
		#100; a=1;b=1;ci=1;
		//full adder nand equivalent test bench by Mark Austin L. Pagarigan
	end
      
endmodule

