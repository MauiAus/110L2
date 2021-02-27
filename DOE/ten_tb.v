`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:56:12 02/17/2021
// Design Name:   decade_counter
// Module Name:   C:/Users/110L/Desktop/110/DOE/ten_tb.v
// Project Name:  DOE
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decade_counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ten_tb;

	// Inputs
	reg clk;
	reg in;

	// Outputs
	wire [3:0] cnt;

	// Instantiate the Unit Under Test (UUT)
	decade_counter uut (
		.clk(clk), 
		.in(in), 
		.cnt(cnt)
	);
	

	initial begin
		clk=0;in=0;
		#100;clk=1;in=1;#100;clk=0;
		#100;clk=1;in=1;#100;clk=0;
		#100;clk=1;in=1;#100;clk=0;
		#100;clk=1;in=1;#100;clk=0;
		#100;clk=1;in=1;#100;clk=0;
		#100;clk=1;in=1;#100;clk=0;
		#100;clk=1;in=1;#100;clk=0;
		#100;clk=1;in=0;#100;clk=0;
		#100;clk=1;in=0;#100;clk=0;
		#100;clk=1;in=0;#100;clk=0;
		#100;clk=1;in=0;#100;clk=0;
		#100;clk=1;in=0;#100;clk=0;
		#100;clk=1;in=0;#100;clk=0;
		#100;clk=1;in=0;#100;clk=0;
		

	end
      
endmodule

