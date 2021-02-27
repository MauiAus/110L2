`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:12:09 01/11/2021 
// Design Name: 
// Module Name:    T_FF 
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
module T_FF(q,t,clk);
	output q;
	reg q;
	input t;
	input clk;
	always@(posedge(clk))
	begin q=~t;
	end
	//T Flip Flop, Mark Austin L. Pagarigan
endmodule
