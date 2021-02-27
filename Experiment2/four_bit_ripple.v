`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:55:23 01/11/2021 
// Design Name: 
// Module Name:    four_bit_ripple 
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
module full_add(a,b,ci,s,co);
	input a,b,ci;
	output s,co;
	wire x,y,z;
		assign x = a ^ b;
		assign y = x && ci;
		assign z = a && b;
		assign s = x ^ ci;
		assign co = y || z;
endmodule

module four_bit_ripple(
    input A0,
    input A1,
    input A2,
    input A3,
    input B0,
    input B1,
    input B2,
    input B3,
    input Cin,
    output S0,
    output S1,
    output S2,
    output S3,
    output C3
    );
	 wire C0,C1,C2;
	 full_add f1(A0,B0,Cin,S0,C0);
	 full_add f2(A1,B1,C0,S1,C1);
	 full_add f3(A2,B2,C1,S2,C2);
	 full_add f4(A3,B3,C2,S3,C3);
	 //four bit ripple carry by Mark Austin L. Pagarigan
		
endmodule
