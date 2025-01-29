module IFID (
    input clk,
    input [31:0] IF_inst,
    input [31:0] IF_PC, 
    input [31:0] IF_PCaddfour,
    input IFID_flush, 
    input IFID_stall, 
    output reg [31:0] ID_inst,
    output reg [31:0] ID_PC,
    output reg [31:0] ID_PCaddfour
);

    always @(posedge clk) begin
        if(IFID_stall == 1'b0) begin
            if(IFID_flush == 1'b1) begin
                ID_inst <= 32'b0;
                ID_PC <= 32'b0;
                ID_PCaddfour <= 32'b0;
            end
            else begin
                ID_inst <= IF_inst;
                ID_PC <= IF_PC;
                ID_PCaddfour <= IF_PCaddfour;
            end
        end
    end
endmodule
