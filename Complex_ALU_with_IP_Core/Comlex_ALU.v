`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:41:26 10/26/2016 
// Design Name: 
// Module Name:    Comlex_ALU 
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
//////////////////////////////////////////--////////////////////////////////////////
module Comlex_ALU(
clk,operation,a_valid,b_valid,start,m1,m2,
valid,error,result
    );
parameter a_row=3,a_column=3,b_row=3,b_column=3,size=16;
input clk,a_valid,b_valid,start;
input [1:0] operation;
input [size-1:0] m1;
input [size-1:0] m2 ;

output valid,error;
output [3*size-1:0] result ;

wire[size-1:0] m1;
wire [size-1:0] m2 ;
wire [1:0] operation;
wire clk,a_valid,b_valid;

reg [3*size-1:0] result;
reg valid,error=0;

reg [size-1:0] a [0:a_row-1] [0:a_column-1];
reg [size-1:0] b [0:b_row-1] [0:b_column-1];

reg [3*size-1:0] res [0:a_row-1][0:b_column-1];
reg [1:0] received=0;
reg [1:0] op;

reg [size-1:0] d1 [0:a_column-1];
reg [size-1:0] d2 [0:a_column-1];
wire  [0:a_column-1]r_valid;
wire [3*size-1:0] r [0:a_column-1];

integer i=0;
integer k=0;
integer j=0;
reg total_r_valid=0;
reg [3*size-1:0] sum_d;
reg v1,v2;
reg last_rd=0;

	genvar ii;
   generate
	for (ii=0; ii < a_column; ii=ii+1) 
		begin: complex_mul_gen
		complex_mul mc (
		  .aclk(clk), // input aclk
		  .s_axis_a_tvalid(v1 && a_valid), // input s_axis_a_tvalid
		  .s_axis_a_tdata(d1[ii]), // input [15 : 0] s_axis_a_tdata
		  .s_axis_b_tvalid(v2 && b_valid), // input s_axis_b_tvalid
		  .s_axis_b_tdata(d2[ii]), // input [15 : 0] s_axis_b_tdata
		  .m_axis_dout_tvalid(r_valid[ii]), // output m_axis_dout_tvalid
		  .m_axis_dout_tdata(r[ii]) // output [47 : 0] m_axis_dout_tdata
	);
			end
	endgenerate

	integer jj;


always @(posedge clk) begin
			if((start==1 && received==0)||received==2) begin
				a[0][0]=16'h0402;a[0][1]=16'h0301;a[0][2]=16'h0402;a[1][0]=16'h0103;a[1][1]=16'h0202;a[1][2]=16'h0706;a[2][0]=16'h0207;a[2][1]=16'h0702;a[2][2]=16'h0100;
				b[0][0]=16'h0407;b[0][1]=16'h0401;b[0][2]=16'h0203;b[1][0]=16'h0102;b[1][1]=16'h0701;b[1][2]=16'h0202;b[2][0]=16'h0302;b[2][1]=16'h0203;b[2][2]=16'h0001;
				received=1;
				valid=0;
				op=operation;
				total_r_valid=0;
				error=0;
				i=0;
				j=0;
				k=0;
			end
			else if(received==1) begin
				if (op<2 && a_column==b_column && a_row==b_row) begin
					for (i = 0;  i<a_row ; i=i+1) begin
						for (j = 0;  j<a_column ; j=j+1) begin
							if(op==0)begin
								res[i][j][(3*size)/2-1:0]=a[i][j][(size)/2-1:0]+b[i][j][(size)/2-1:0];
								res[i][j][(3*size)-1:(3*size)/2]=a[i][j][(size)-1:(size)/2]+b[i][j][(size)-1:(size)/2];
							end
							else if (op==1)begin
								res[i][j][(3*size)/2-1:0]=a[i][j][(size)/2-1:0]-b[i][j][(size)/2-1:0];
								res[i][j][(3*size)-1:(3*size)/2]=a[i][j][(size)-1:(size)/2]-b[i][j][(size)-1:(size)/2];
							end
						end
					end
					valid=1;
					received=0;
				end
				else if(op==2 && a_column==b_row) begin
					for (jj = 0; jj <a_column && total_r_valid==0; jj=jj+1) begin
						d1[jj]=a[i][jj];
						d2[jj]=b[jj][j];
						v1=1;
						v2=1;
						valid=0;
					end
					total_r_valid=1;
					for (jj = 0; jj <a_column ; jj=jj+1) begin
						total_r_valid=total_r_valid&&r_valid[jj];
					end
					if (total_r_valid==0) begin
						last_rd=0;
						end
					if (total_r_valid==1 && last_rd==0 && (r[0][0]==0||r[0][0]==1)) begin
						last_rd=1;
						sum_d=0;
						for (jj = 0; jj <a_column ; jj=jj+1) begin
							sum_d[(3*size)/2-1:0]=sum_d[(3*size)/2-1:0]+r[jj][(3*size)/2-1:0];
							sum_d[(3*size)-1:(3*size)/2]=sum_d[(3*size)-1:(3*size)/2]+r[jj][(3*size)-1:(3*size)/2];
						end
						v1=0;
						v2=0;
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
				error=1;
				end
			end
			else begin
				valid=0;

			end
		end
		

endmodule
