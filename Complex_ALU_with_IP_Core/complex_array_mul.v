`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:52:07 10/26/2016 
// Design Name: 
// Module Name:    complex_array_mul 
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
module complex_array_mul #(parameter a_row=2,a_column=2,b_row=2,b_column=2,size=16)(
clk,a_valid,b_valid,start,
valid
    );

input clk,a_valid,b_valid,start;
//input [size-1:0] a [0:a_row-1] [0:a_column-1];
//input [size-1:0] b [0:b_row-1] [0:b_column-1];

output valid;
//output [3*size-1:0] res [0:a_row-1][0:b_column-1];

reg [size-1:0] a [0:a_row-1] [0:a_column-1];
reg [size-1:0] b [0:b_row-1] [0:b_column-1];
wire clk,a_valid,b_valid,start;

reg valid;
reg [3*size-1:0] res [0:a_row-1][0:b_column-1];

reg [size-1:0] d1 [0:a_column];
reg [size-1:0] d2 [0:a_column];
wire  [0:a_column]r_valid;
wire [3*size-1:0] r [0:a_column];

integer i=0;
integer k=0;
integer j=0;
reg total_r_valid=0;
reg [3*size-1:0] sum_d;
reg [1:0] received=0;

   genvar ii;
   generate
	for (ii=0; ii < a_column; ii=ii+1) 
		begin: complex_mul_gen
		complex_mul mc (
		  .aclk(clk), // input aclk
		  .s_axis_a_tvalid(a_valid), // input s_axis_a_tvalid
		  .s_axis_a_tdata(d1[ii]), // input [15 : 0] s_axis_a_tdata
		  .s_axis_b_tvalid(b_valid), // input s_axis_b_tvalid
		  .s_axis_b_tdata(d2[ii]), // input [15 : 0] s_axis_b_tdata
		  .m_axis_dout_tvalid(r_valid[ii]), // output m_axis_dout_tvalid
		  .m_axis_dout_tdata(r[ii]) // output [47 : 0] m_axis_dout_tdata
	);
			end
	endgenerate

	integer jj;

	always @(posedge clk) begin
		if((start==1 && received==0)||received==2) begin
			a[0][0]=16'h0101;a[1][0]=16'h0101;a[0][1]=16'h0101;a[1][1]=16'h0101;
			b[0][0]=16'h0101;b[1][0]=16'h0101;b[0][1]=16'h0101;b[1][1]=16'h0101;
			i=0;
			k=0;
			j=0;
			total_r_valid=0;
			received=1;
		end
		else if(received==1) begin
			for (jj = 0; jj <a_column && total_r_valid==0; jj=jj+1) begin
				d1[jj]=a[i][jj];
				d2[jj]=b[jj][j];
				valid=0;
			end
			total_r_valid=1;
			for (jj = 0; jj <a_column ; jj=jj+1) begin
				total_r_valid=total_r_valid&&r_valid[jj];
			end	
			if (total_r_valid==1) begin
				sum_d=0;
				for (jj = 0; jj <a_column ; jj=jj+1) begin
					sum_d[(3*size)/2-1:0]=sum_d[(3*size)/2-1:0]+r[jj][(3*size)/2-1:0];
					sum_d[(3*size)-1:(3*size)/2]=sum_d[(3*size)-1:(3*size)/2]+r[jj][(3*size)-1:(3*size)/2];
				end
				res[i][j]=sum_d;
				if(j<b_column-1) begin
					j=j+1;
					valid=0;
				end
				else if(i<a_row-1)begin
					i=i+1;
					j=0;
					valid=0;
				end
				else begin
					valid=1;
					received=0;
				end			
			end
			else begin
				sum_d=0;
			end
		end
		else begin
			valid=0;
		end
	end				
endmodule
