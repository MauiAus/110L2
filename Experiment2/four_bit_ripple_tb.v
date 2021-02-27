`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:03:41 01/11/2021
// Design Name:   four_bit_ripple
// Module Name:   C:/Users/110L/Desktop/110/Experiment2/four_bit_ripple_tb.v
// Project Name:  Experiment2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: four_bit_ripple
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module four_bit_ripple_tb;

	// Inputs
	reg A0;
	reg A1;
	reg A2;
	reg A3;
	reg B0;
	reg B1;
	reg B2;
	reg B3;
	reg Cin;

	// Outputs
	wire S0;
	wire S1;
	wire S2;
	wire S3;
	wire C3;

	// Instantiate the Unit Under Test (UUT)
	four_bit_ripple uut (
		.A0(A0), 
		.A1(A1), 
		.A2(A2), 
		.A3(A3), 
		.B0(B0), 
		.B1(B1), 
		.B2(B2), 
		.B3(B3), 
		.Cin(Cin), 
		.S0(S0), 
		.S1(S1), 
		.S2(S2), 
		.S3(S3), 
		.C3(C3)
	);

	initial begin
		A0 = 0;A1 = 0;A2 = 0;A3 = 0;B0 = 0;B1 = 0;B2 = 0;B3 = 0;Cin = 0;
		#100;A0 = 1;A1 = 0;A2 = 0;A3 = 0;B0 = 0;B1 = 1;B2 = 1;B3 = 1;Cin = 0;
		#100;A0 = 0;A1 = 1;A2 = 1;A3 = 1;B0 = 0;B1 = 1;B2 = 1;B3 = 1;Cin = 0;
		#100;A0 = 1;A1 = 0;A2 = 0;A3 = 0;B0 = 0;B1 = 1;B2 = 0;B3 = 1;Cin = 0;
		#100;A0 = 0;A1 = 1;A2 = 1;A3 = 0;B0 = 0;B1 = 1;B2 = 1;B3 = 0;Cin = 0;
		#100;A0 = 1;A1 = 0;A2 = 0;A3 = 0;B0 = 0;B1 = 1;B2 = 1;B3 = 1;Cin = 1;
		#100;A0 = 0;A1 = 1;A2 = 1;A3 = 1;B0 = 0;B1 = 1;B2 = 1;B3 = 1;Cin = 1;
		#100;A0 = 1;A1 = 0;A2 = 0;A3 = 0;B0 = 0;B1 = 1;B2 = 0;B3 = 1;Cin = 1;
		#100;A0 = 0;A1 = 1;A2 = 1;A3 = 0;B0 = 0;B1 = 1;B2 = 1;B3 = 0;Cin = 1;
		// four bit ripple carry test bench by Mark Austin L. Pagarigan
	end
      
endmodule

