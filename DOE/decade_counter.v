`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:34:39 02/13/2021 
// Design Name: 
// Module Name:    decade_counter 
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

module jk_ff(j,k,clk,q);
output q;
reg q;
input j,k,clk;
always@(posedge clk)
case({j,k})
	2'b00: q<=q;
	2'b01: q<=0;
	2'b10: q<=1;
	2'b11: q<=~q;
endcase
always@(negedge clk)
case({j,k})
	2'b00: q<=1;
endcase
endmodule


module jk_ff2(j,k,clk,q,qd);
input j,k,clk;
output reg q;
output qd;
always@(posedge clk) 
case({j,k})
2'b00: q<=q;
2'b01: q<=0;
2'b10: q<=1;
2'b11: q<=~q;
endcase
always@(negedge clk)
case({j,k})
	2'b00: q<=1;
endcase
assign qd=~q;	
endmodule

module test(z);
output z;
and(1,x,z);
endmodule

module decade_counter(clk,in,cnt);
input clk,in;
output [3:0]cnt;
wire a,b,c,d,e;
wire j1,j2,x1,x2,y;
assign j1 = a && e;
assign j2 = a && b;
assign x1 = d && a;
assign x2 = j2 && c;
assign y = x1 || x2;
jk_ff2 FFD(y,y,clk,d,e);
jk_ff FFA(in,in,clk,a);
jk_ff FFB(j1,j1,clk,b);
jk_ff FFC(j2,j2,clk,c);

assign cnt = ({a,b,c,d});

endmodule

