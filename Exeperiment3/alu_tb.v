`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:33:20 01/11/2021
// Design Name:   alu
// Module Name:   C:/Users/110L/Desktop/110/Exeperiment3/alu_tb.v
// Project Name:  Exeperiment3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_tb;

	// Inputs
	reg [7:0] a;
	reg [7:0] b;
	reg [3:0] sel;

	// Outputs
	wire [7:0] z;

	// Instantiate the Unit Under Test (UUT)
	alu uut (
		.z(z), 
		.a(a), 
		.b(b), 
		.sel(sel)
	);

	initial begin
		a = 1;b = 1;sel = 4'b0000;
		#50;a = 1;b = 1;sel = 4'b0001;
		#50;a = 1;b = 1;sel = 4'b0010;
		#50;a = 1;b = 1;sel = 4'b0011;
		#50;a = 1;b = 1;sel = 4'b0100;
		#50;a = 1;b = 1;sel = 4'b0101;
		#50;a = 1;b = 1;sel = 4'b0110;
		#50;a = 1;b = 1;sel = 4'b0111;
		#50;a = 1;b = 1;sel = 4'b1000;
		#50;a = 1;b = 1;sel = 4'b1001;
		#50;a = 1;b = 1;sel = 4'b1010;
		#50;a = 1;b = 1;sel = 4'b1011;
		#50;a = 1;b = 1;sel = 4'b1100;
		#50;a = 1;b = 1;sel = 4'b1101;
		#50;a = 1;b = 1;sel = 4'b1110;
		//8 bit ALU test bench by Mark Austin L. Pagarigan
	end
      
endmodule

