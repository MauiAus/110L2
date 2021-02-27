`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:42:57 01/05/2021
// Design Name:   o_gate
// Module Name:   C:/Users/110L/Desktop/110/o_gate/o_gate_tb.v
// Project Name:  o_gate
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: o_gate
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module o_gate_tb;

	// Inputs
	reg a;
	reg b;

	// Outputs
	wire z;

	// Instantiate the Unit Under Test (UUT)
	o_gate uut (
		.a(a), 
		.b(b), 
		.z(z)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		a=0;b=1;
		#100;a=1;b=0;
		#100;a=1;b=1;

	end
      
endmodule

