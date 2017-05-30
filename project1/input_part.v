`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:54:14 03/09/2016 
// Design Name: 
// Module Name:    ip 
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
module input_part(
    input clk,
	 input [3:0] partA,
	 input [3:0] partB,
	 input partC,
	 output reg [3:0] unsorted_num0,
	 output reg [3:0] unsorted_num1,
	 output reg [3:0] unsorted_num2,
	 output reg [3:0] unsorted_num3
	  );
//	  input clk;
//	 input [3:0] partA;
//	 input [3:0] partB;
//	 input partC;
//	 output [3:0] unsorted_num[0];
//	 output [3:0] unsorted_num[1];
//	 output [3:0] unsorted_num[2];
//	 output [3:0] unsorted_num[3];
	 always @(posedge clk)
	 begin
	 if(partC !=0)
	 begin
	 case(partA)
	 4'b0001: unsorted_num0 = partB;
	 4'b0010: unsorted_num1 = partB;
	 4'b0100: unsorted_num2 = partB;
	 4'b1000: unsorted_num3 = partB;
	 endcase
end
end	 
endmodule
