`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:25:47 02/13/2021 
// Design Name: 
// Module Name:    binary_counter 
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
module binary_counter(clk,count);
output [3:0]count;
reg [3:0]count;
input clk;
wire clk;
initial count = 0;
always @(posedge(clk))
begin
count <=count+1;
end
endmodule

//Binary Counter by Mark Austin L. Pagarigan
