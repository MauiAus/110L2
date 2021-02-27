`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:06:43 01/11/2021
// Design Name:   full_adder
// Module Name:   C:/Users/110L/Desktop/110/Experiment2/ful_adder_tb.v
// Project Name:  Experiment2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: full_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ful_adder_tb;

	// Inputs
	reg A;
	reg B;
	reg Cin;

	// Outputs
	wire S;
	wire Cout;

	// Instantiate the Unit Under Test (UUT)
	full_adder uut (
		.A(A), 
		.B(B), 
		.Cin(Cin), 
		.S(S), 
		.Cout(Cout)
	);

	initial begin
		#100; A=0;B=0;Cin=0;
		#100; A=0;B=0;Cin=1;
		#100; A=0;B=1;Cin=0;
		#100; A=0;B=1;Cin=1;
		#100; A=1;B=0;Cin=0;
		#100; A=1;B=0;Cin=1;
		#100; A=1;B=1;Cin=0;
		#100; A=1;B=1;Cin=1;
		// Full adder test bench by Mark Austin L. Pagarigan Ex 2 CPE 110L E03
	end
      
endmodule

