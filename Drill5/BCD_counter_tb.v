`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:30:17 02/13/2021
// Design Name:   BCD_counter
// Module Name:   C:/Users/110L/Desktop/110/Drill5/BCD_counter_tb.v
// Project Name:  Drill5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BCD_counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module BCD_counter_tb;

	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire [3:0] dout;

	// Instantiate the Unit Under Test (UUT)
	BCD_counter uut (
		.clk(clk), 
		.reset(reset), 
		.dout(dout)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		#50;clk=1;#50;clk=0;#50;clk=1;#50;clk=0;
		#50;clk=1;#50;clk=0;#50;clk=1;#50;clk=0;
		#50;clk=1;#50;clk=0;#50;clk=1;#50;clk=0;
		#50;clk=1;#50;clk=0;#50;clk=1;#50;clk=0;
		#50;clk=1;#50;clk=0;#50;clk=1;#50;clk=0;
		#50;reset=1;clk=1;
		
		//BCD Counter Test Bench by Mark Austin L. Pagarigan
	end
      
endmodule

