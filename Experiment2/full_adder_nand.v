`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:36:44 01/11/2021 
// Design Name: 
// Module Name:    full_adder_nand 
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
module full_adder_nand(a,b,cin,s,cout);
	input a,b,cin;
	output s,cout;
	wire x1,x2,x3,x4,y1,y2,y3;
	nand xx1(x1,a,b);
	nand xx2(x2,x1,a);
	nand xx3(x3,x1,b);
	nand xx4(x4,x3,x2);
	nand yy1(y1,cin,x4);
	nand yy2(y2,x4,y1);
	nand yy3(y3,cin,y1);
	nand ss(s,y3,y2);
	nand ccout(cout,cin,y1);
	//full adder nand equivalent by Mark Austin L. Pagarigan
endmodule
