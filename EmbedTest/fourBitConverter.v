`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:27:55 02/08/2021 
// Design Name: 
// Module Name:    fourBitConverter 
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
module fourBitConverter(ai,bi,ci,di,a,b,c,d,e,f,g);
input ai,bi,ci,di;
output a,b,c,d,e,f,g;

assign a = ci || ai || ((~bi) && (~di)) || (bi && di);
assign b = (~bi) || ((~ci) && (~di)) || (ci && di);
assign c = (~ci) || di || bi;
assign d = ai || ((~bi) && (~di)) || ((~bi) && ci) || (ci && (~di)) || (bi && (~ci) && di);
assign e = (~bi && (~di)) || (ci && (~di));
assign f = ai || ((~ci) && (~di)) || (bi && (~ci)) || ((bi) && (~di));
assign g = ai || ((~bi) && ci) || (ci && (~di)) || (bi && (~ci)); 

endmodule
