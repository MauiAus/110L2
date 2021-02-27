`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:05:37 01/11/2021 
// Design Name: 
// Module Name:    SR_FF 
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
module SR_FF(s,r,clk,q,qb);
	input s,r,clk;
	output q,qb;
	reg q,qb;
	reg[1:0]sr;
	wire qp=1'b0;
	always@(posedge clk)
	begin sr={s,r}; begin
	case(sr)
		2'd0:q=qp;
		2'd1:q=1'b0;
		2'd2:q=1'b1;
		2'd3:q=1'bX;
	endcase
	end
	qb=~q;
	end
	//SR Flip Flop, Mark Austin L. Pagarigan
endmodule
