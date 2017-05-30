`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:54:35 03/09/2016 
// Design Name: 
// Module Name:    sp 
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
module sorting_part(
input clk, 
input partD, 
	input [3:0] unsorted_num0, 
	input [3:0] unsorted_num1,
	input [3:0] unsorted_num2,
	input [3:0] unsorted_num3,
   output reg [3:0] sorted_num0,
	output reg [3:0] sorted_num1,
	output reg [3:0] sorted_num2,
	output reg [3:0] sorted_num3,
	output reg start_display
	);
	 integer i;
	 integer j;
	 reg [3:0] temp1;
	 reg [3:0] temp[3:0];
//	 assign temp[0]=unsorted_num0;
//	 assign temp[1]=unsorted_num1;
//	 assign temp[2]=unsorted_num2;
//	 assign temp[3]=unsorted_num3;
	 always@(posedge clk)
	 begin
	 temp[0]=unsorted_num0;
	 temp[1]=unsorted_num1;
	 temp[2]=unsorted_num2;
	 temp[3]=unsorted_num3;
	 if (partD!=0)
	 begin
	 for(i=0;i<4;i=i+1)
	 begin
	 for(j=0;j<4;j=j+1)
	 begin
            if(temp[i]<temp[j])
            begin
                temp1=temp[i];
                temp[i]=temp[j];
                temp[j]=temp1;
					 end
	 end
	 end
	 
	 sorted_num0=temp[0];
	 sorted_num1=temp[1];
	 sorted_num2=temp[2];
	 sorted_num3=temp[3];
	 start_display=1;
	end
	end
endmodule
