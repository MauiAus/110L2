`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:53:21 01/11/2021 
// Design Name: 
// Module Name:    alu_4bit 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module alu_4bit(z,a,b,sel);
	input [7:0]a,b;
	input [2:0]sel;
	output [7:0]z;
	reg [7:0]z;
	always @(sel,a,b)
	begin
	case(sel)
		3'b000: z=a+b;
		3'b001: z=a-b;
		3'b010: z=a || b;
		3'b011: z=a && b;
		3'b100: z=a && 0;
		3'b101: z=a[7:1] && 0;
		3'b110: z=a[2:0] && a[7];
		3'b111: z=a[0] && a[7:1];
	endcase
	end
	//4 bit ALU, Mark Austin L. Pagarigan
endmodule
