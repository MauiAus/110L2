`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:02:00 02/13/2021
// Design Name:   johnson_counter
// Module Name:   C:/Users/110L/Desktop/110/Drill5/johnson_counter_tb.v
// Project Name:  Drill5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: johnson_counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module johnson_counter_tb;

	// Inputs
	reg clk;
	reg rst;

	// Outputs
	wire [3:0] out;

	// Instantiate the Unit Under Test (UUT)
	johnson_counter uut (
		.clk(clk), 
		.rst(rst), 
		.out(out)
	);

	initial begin
		clk = 0;
		rst = 0;
		#50;clk=1;#50;clk=0;#50;clk=1;rst=1;#50;clk=0;
		#50;clk=1;#50;clk=0;#50;clk=1;#50;clk=0;
		#50;clk=1;#50;clk=0;#50;clk=1;#50;clk=0;
		#50;clk=1;#50;clk=0;#50;clk=1;#50;clk=0;
		#50;clk=1;#50;clk=0;#50;clk=1;#50;clk=0;
		#50;rst=1;clk=1;
		//johnson counter test bench by Mark Austin L. Pagarigan
	end
      
endmodule

