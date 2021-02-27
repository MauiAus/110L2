`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:55:18 02/13/2021 
// Design Name: 
// Module Name:    fsm1 
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
module fsm1(clk,rst,in,out);
input clk,rst,in;
output out;
reg[1:0]state;
reg out;
always@(posedge clk)
begin
if(rst)
state<=2'b00;
else
begin
case({state,in})
3'b000:begin
state<=2'b00;
end
3'b001:begin
state<=2'b01;
end
3'b010:begin
state<=2'b10;
end
3'b011:begin
state<=2'b01;
end
3'b100:begin
state<=2'b10;
end
3'b101:begin
state<=2'b11;
end
3'b110:begin
state<=2'b10;
end
3'b111:begin
state<=2'b01;
end
endcase
end
assign out = (({state,in})==3'b111)?1'b1:1'b0;
end
//FSM 1011 Verilog Code
endmodule
