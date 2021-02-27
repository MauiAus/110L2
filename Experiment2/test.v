`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:26:45 01/11/2021 
// Design Name: 
// Module Name:    test 
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
module test(a,b,ci,s,co);
	input a,b,ci;
	output s,co;
	wire x,y,z;
		assign x = a ^ b;
		assign y = x && ci;
		assign z = a && b;
		assign s = x ^ ci;
		assign co = y || z;
endmodule
