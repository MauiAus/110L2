`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:27:11 02/13/2021
// Design Name:   binary_counter
// Module Name:   C:/Users/110L/Desktop/110/Drill5/binary_counter_tb.v
// Project Name:  Drill5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: binary_counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module binary_counter_tb;

	// Inputs
	reg clk;

	// Outputs
	wire [3:0] count;

	// Instantiate the Unit Under Test (UUT)
	binary_counter uut (
		.clk(clk), 
		.count(count)
	);

	initial begin
		clk = 0;
		#50;clk=1;#50;clk=0;#50;clk=1;#50;clk=0;
		#50;clk=1;#50;clk=0;#50;clk=1;#50;clk=0;
		#50;clk=1;#50;clk=0;#50;clk=1;#50;clk=0;
		#50;clk=1;#50;clk=0;#50;clk=1;#50;clk=0;
		#50;clk=1;#50;clk=0;#50;clk=1;#50;clk=0;		
	end
	//Binary Counter Test Bench by Mark Austin L. Pagarigan
      
endmodule

