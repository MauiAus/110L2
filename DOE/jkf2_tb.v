`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:50:50 02/18/2021
// Design Name:   jk_ff2
// Module Name:   C:/Users/110L/Desktop/110/DOE/jkf2_tb.v
// Project Name:  DOE
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: jk_ff2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module jkf2_tb;

	// Inputs
	reg j;
	reg k;
	reg clk;

	// Outputs
	wire q;
	wire qd;

	// Instantiate the Unit Under Test (UUT)
	jk_ff2 uut (
		.j(j), 
		.k(k), 
		.clk(clk), 
		.q(q), 
		.qd(qd)
	);

	initial begin
		j = 0;k = 0;clk = 0;
		#100;clk=1;j=1;k=0;#100;clk=0;
		#100;clk=1;j=0;k=1;#100;clk=0;
		#100;clk=1;j=1;k=1;#100;clk=0;

	end
      
endmodule

