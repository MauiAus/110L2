`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:25:38 01/11/2021 
// Design Name: 
// Module Name:    alu 
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
module alu(z,a,b,sel);
	input [7:0]a,b;
	input [3:0]sel;
	output [7:0]z;
	reg [7:0]z;
	always @(sel,a,b)
	begin
	case(sel)
		4'b0000: z=a+b;
		4'b0001: z=a-b;
		4'b0010: z=b-1;
		4'b0011: z=a*b;
		4'b0100: z=a&&b;
		4'b0101: z=a||b;
		4'b0110: z=!a;
		4'b0111: z=~a;
		4'b1000: z=a&b;
		4'b1001: z=a|b;
		4'b1010: z=a^b;
		4'b1011: z=a<<1;
		4'b1100: z=a>>1;
		4'b1101: z=a+1;
		4'b1110: z=a-1;
	endcase
	end
	//8 bit ALU, Mark Austin L. Pagarigan
endmodule
