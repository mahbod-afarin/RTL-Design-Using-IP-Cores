`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:49:10 10/27/2016
// Design Name:   complex_array_mul
// Module Name:   C:/Users/Pouya/Desktop/SOC/Complex_ALU/test1_comp_arr_mul.v
// Project Name:  Complex_ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: complex_array_mul
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test1_comp_arr_mul;

	// Inputs
	reg clk;
	reg a_valid;
	reg b_valid;
	reg start;

	// Outputs
	wire valid;

	// Instantiate the Unit Under Test (UUT)
	complex_array_mul uut (
		.clk(clk),  
		.a_valid(a_valid), 
		.b_valid(b_valid), 
		.start(start),  
		.valid(valid)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		a_valid = 0;
		b_valid = 0;
		start = 0;


		// Wait 100 ns for global reset to finish
		#10;
        start = 1;
		  b_valid=1;
	a_valid=1;
		// Add stimulus here

	end
	always  
	#10 clk=!clk;
	
	

      
endmodule

