`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:55:58 02/13/2021 
// Design Name: 
// Module Name:    fsm2 
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
module fsm2(clk,rst,in,out);
input clk,rst,in;
output out;
reg[2:0]state;
reg out;
always@(posedge clk)
begin
if(rst)
state<=3'b000;
else
begin
case({state,in})
4'b0000:begin
state<=3'b000;
end
4'b0001:begin
state<=3'b001;
end
4'b0010:begin
state<=3'b010;
end
4'b0011:begin
state<=3'b001;
end
4'b0100:begin
state<=3'b000;
end
4'b0101:begin
state<=3'b011;
end
4'b0110:begin
state<=3'b100;
end
4'b0111:begin
state<=3'b001;
end
4'b1000:begin
state<=3'b000;
end
4'b1001:begin
state<=3'b101;
end
4'b1010:begin
state<=3'b110;
end
4'b1011:begin
state<=3'b001;
end
4'b1100:begin
state<=3'b000;
end
4'b1101:begin
state<=3'b001;
end
4'b1110:begin
state<=3'b000;
end
4'b1111:begin
state<=3'b001;
end
endcase
end
assign out = (({state,in})==4'b1111)?1'b1:1'b0;
end
//FSM 1010101 Verilog Code by Mark Austin L. Pagarigan
endmodule

