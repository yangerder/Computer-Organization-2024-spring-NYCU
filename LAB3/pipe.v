module pipe
(
    input clk,
    input rst,
    input [size-1:0] pipe_data_i,
    output reg [size-1:0] pipe_data_o
);

parameter size = 0;
    always @(posedge clk) begin
        if(rst == 0) pipe_data_o<=0;
        else pipe_data_o<=pipe_data_i;
    end


endmodule

