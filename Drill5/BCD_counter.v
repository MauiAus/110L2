`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:21:20 02/13/2021 
// Design Name: 
// Module Name:    BCD_counter 
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
module BCD_counter(clk,reset,dout);
output [3:0] dout;
reg [3:0] dout;
input clk;
wire clk;
input reset;
wire reset;
initial dout = 0;
always @(posedge(clk))
begin
if(reset) dout<=0;
else if(dout<=9)
begin
dout<=dout + 1;
end
else if(dout==9)
begin
dout<=0;
end
end
endmodule
//BCD Counter by Mark Austin L. Pagarigan