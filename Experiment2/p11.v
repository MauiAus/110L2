`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:01:52 01/11/2021 
// Design Name: 
// Module Name:    p11 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//			Full subtractor code by Mark Austin L. Pagarigan Ex 2 CPE 110L E03
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module p11(
    input a,
    input b,
    input c,
    output diff,
    output borrow
    );
	assign diff = a ^ b ^ c;
	assign borrow = ((~a)&b)|(b&c)|(c&(~a));
endmodule
