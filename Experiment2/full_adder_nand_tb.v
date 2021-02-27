`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:41:45 01/11/2021
// Design Name:   full_adder_nand
// Module Name:   C:/Users/110L/Desktop/110/Experiment2/full_adder_nand_tb.v
// Project Name:  Experiment2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: full_adder_nand
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module full_adder_nand_tb;

	// Inputs
	reg a;
	reg b;
	reg cin;

	// Outputs
	wire s;
	wire cout;

	// Instantiate the Unit Under Test (UUT)
	full_adder_nand uut (
		.a(a), 
		.b(b), 
		.cin(cin), 
		.s(s), 
		.cout(cout)
	);

	initial begin
		a=0;b=0;cin=0;
		#100; a=0;b=0;cin=1;
		#100; a=0;b=1;cin=0;
		#100; a=0;b=1;cin=1;
		#100; a=1;b=0;cin=0;
		#100; a=1;b=0;cin=1;
		#100; a=1;b=1;cin=0;
		#100; a=1;b=1;cin=1;
		//full adder nand equivalent test bench by Mark Austin L. Pagarigan
	end
      
endmodule

