`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:58:38 01/11/2021 
// Design Name: 
// Module Name:    full_adder 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//			Full adder code by Mark Austin L. Pagarigan Ex 2 CPE 110L E03
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module full_Adder(
    input A,
    input B,
    input Cin,
    output S,
    output Cout
    );
	 wire y0,y1,y2;
	 xor g1(y0,A,B);
	 and g2(y1,A,B);
	 xor g3(S,y0,Cin);
	 and g4(y2,y0,Cin);
	 or g5(Cout, y2,yl);
	 
endmodule
