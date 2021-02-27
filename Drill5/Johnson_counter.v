`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:41:53 02/13/2021 
// Design Name: 
// Module Name:    Johnson_counter 
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
module johnson_counter(clk,rst,out);
input clk,rst;
output reg [3:0] out;
always @(posedge clk) 
begin
	if(!rst)
		out<=1;
	else begin
		out[3] <= ~out[0];
		out[0]<=out[1];
		out[1]<=out[2];
		out[2]<=out[3];
	end
end
//Johnson_counter by Mark Austin L. Pagarigan
endmodule
