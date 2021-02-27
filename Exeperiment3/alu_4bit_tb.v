`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:54:24 01/11/2021
// Design Name:   alu_4bit
// Module Name:   C:/Users/110L/Desktop/110/Exeperiment3/alu_4bit_tb.v
// Project Name:  Exeperiment3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu_4bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_4bit_tb;

	// Inputs
	reg [7:0] a;
	reg [7:0] b;
	reg [3:0] sel;

	// Outputs
	wire [7:0] z;

	// Instantiate the Unit Under Test (UUT)
	alu_4bit uut (
		.z(z), 
		.a(a), 
		.b(b), 
		.sel(sel)
	);

	initial begin
		a = 8'b00001110;b = 8'b00000011;sel = 3'b000;
		#50;a = 8'b00001110;b = 8'b00000011;sel = 3'b001;
		#50;a = 8'b00001110;b = 8'b00000011;sel = 3'b010;
		#50;a = 8'b00001110;b = 8'b00000011;sel = 3'b011;
		#50;a = 8'b00001110;b = 8'b00000011;sel = 3'b100;
		#50;a = 8'b00001110;b = 8'b00000011;sel = 3'b101;
		#50;a = 8'b00001110;b = 8'b00000011;sel = 3'b110;
		#50;a = 8'b00001110;b = 8'b00000011;sel = 3'b111;
		//4 bit ALU test bench by Mark Austin L. Pagarigan
	end
      
endmodule

