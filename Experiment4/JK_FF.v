`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:08:05 01/11/2021 
// Design Name: 
// Module Name:    JK_FF 
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
module JK_FF(j,k,clk,q,qb);
	input j,k,clk;
	output q,qb;
	reg q,qb;
	reg[1:0]jk;
	wire qp=1'b0;
	always@(posedge clk)
	begin jk={j,k};begin
	case(jk)
		2'd0:q=qp;
		2'd1:q=1'b0;
		2'd2:q=1'b1;
		2'd3:q=~q;
	endcase
	end 
	qb=~q;
	end
	//JK Flip Flop, Mark Austin L. Pagarigan
endmodule
