`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:55:52 02/08/2021
// Design Name:   fourBitConverter
// Module Name:   C:/Users/110L/Desktop/110/EmbedTest/testbench.v
// Project Name:  EmbedTest
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fourBitConverter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testbench;

	// Inputs
	reg ai;
	reg bi;
	reg ci;
	reg di;

	// Outputs
	wire a;
	wire b;
	wire c;
	wire d;
	wire e;
	wire f;
	wire g;

	// Instantiate the Unit Under Test (UUT)
	fourBitConverter uut (
		.ai(ai), 
		.bi(bi), 
		.ci(ci), 
		.di(di), 
		.a(a), 
		.b(b), 
		.c(c), 
		.d(d), 
		.e(e), 
		.f(f), 
		.g(g)
	);

	initial begin
		// Initialize Inputs
		ai = 0;bi = 0;ci = 0;di = 0;
		#100;ai=0;bi=0;ci=0;di=1;
		#100;ai=0;bi=0;ci=1;di=0;
		#100;ai=0;bi=0;ci=1;di=1;
		#100;ai=0;bi=1;ci=0;di=0;
		#100;ai=0;bi=1;ci=0;di=1;
		#100;ai=0;bi=1;ci=1;di=0;
		#100;ai=0;bi=1;ci=1;di=1;
		#100;ai=1;bi=0;ci=0;di=0;
      #100;ai=1;bi=0;ci=0;di=1;
		// Add stimulus here

	end
      
endmodule

