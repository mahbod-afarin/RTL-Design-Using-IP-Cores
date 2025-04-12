`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:22:12 10/27/2016 
// Design Name: 
// Module Name:    complex_array_sub_add 
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
module complex_array_sub_add#(parameter a_row=2,a_column=2,b_row=2,b_column=2,size=16)(
clk,a_valid,b_valid,start,
valid,operation
    );
	 
input clk,a_valid,b_valid,start,operation;
//input [size-1:0] a [0:a_row-1] [0:a_column-1];
//input [size-1:0] b [0:b_row-1] [0:b_column-1];

output valid;
//output [3*size-1:0] result [0:a_row-1][0:b_column-1];

reg [size-1:0] a [0:a_row-1] [0:a_column-1];
reg [size-1:0] b [0:b_row-1] [0:b_column-1];
wire clk,a_valid,b_valid,start,operation;

reg valid;
reg [3*size-1:0] result [0:a_row-1][0:b_column-1];

reg [1:0] received=0;
integer i,j;

	always @(posedge clk) begin
			if((start==1 && received==0)||received==2) begin
				a[0][0]=16'h0101;a[1][0]=16'h0101;a[0][1]=16'h0101;a[1][1]=16'h0101;
				b[0][0]=16'h0101;b[1][0]=16'h0101;b[0][1]=16'h0101;b[1][1]=16'h0101;
				received=1;
				valid=0;
			end
			else if(received==1) begin
				for (i = 0;  i<a_row ; i=i+1) begin
					for (j = 0;  j<a_column ; j=j+1) begin
						if(operation==0)begin
							result[i][j][(3*size)/2-1:0]=a[i][j][(size)/2-1:0]+b[i][j][(size)/2-1:0];
							result[i][j][(3*size)-1:(3*size)/2]=a[i][j][(size)-1:(size)/2]+b[i][j][(size)-1:(size)/2];
						end
						else if (operation==1)begin
							result[i][j][(3*size)/2-1:0]=a[i][j][(size)/2-1:0]-b[i][j][(size)/2-1:0];
							result[i][j][(3*size)-1:(3*size)/2]=a[i][j][(size)-1:(size)/2]-b[i][j][(size)-1:(size)/2];
						end
					end
				end
				valid=1;
				received=0;
			end
			else begin
				valid=0;

			end
	end
endmodule
