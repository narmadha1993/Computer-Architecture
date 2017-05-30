`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:20:55 03/11/2016 
// Design Name: 
// Module Name:    output_part 
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
module output_part(
input clk,
input [3:0] sorted_num0,
input [3:0] sorted_num1,
input [3:0] sorted_num2,
input [3:0] sorted_num3,
input start_display,
output reg [3:0] partE
);
always @(posedge clk)
begin
if(start_display==1)
begin
partE=sorted_num0;
#700;
partE=sorted_num1;
#700;
partE=sorted_num2;
#700;
partE=sorted_num3;
#700;
end
end
endmodule


	 



