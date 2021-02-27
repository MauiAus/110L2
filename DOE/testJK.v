`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:48:53 02/18/2021
// Design Name:   jk_ff
// Module Name:   C:/Users/110L/Desktop/110/DOE/testJK.v
// Project Name:  DOE
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: jk_ff
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testJK;

	// Inputs
	reg j;
	reg k;
	reg clk;

	// Outputs
	wire q;

	// Instantiate the Unit Under Test (UUT)
	jk_ff uut (
		.j(j), 
		.k(k), 
		.clk(clk), 
		.q(q)
	);

	initial begin
		j = 1;k = 1;clk = 0;
		#100;clk=1;j=1;k=1;#100;clk=0;
		#100;clk=1;j=1;k=1;#100;clk=0;
		#100;clk=1;j=1;k=1;#100;clk=0;
	end
      
endmodule

