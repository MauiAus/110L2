`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:11:19 01/11/2021 
// Design Name: 
// Module Name:    D_FF 
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
module D_FF(q,din,clk);
	output q;
	reg q;
	input din;
	wire din;
	input clk;
	always@(posedge(clk))
	begin q=din;
	end
	//D Flip Flop, Mark Austin L. Pagarigan
endmodule
