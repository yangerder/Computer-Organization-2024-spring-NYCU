module MEMWB(
    input clk,
    input [31:0] MEM_ALUOut,
    input [4:0] MEM_writeReg,
    input [31:0] MEM_PCaddfour,
    input [31:0] MEM_readData, 

    output reg [31:0] WB_ALUOut,
    output reg [4:0] WB_writeReg,
    output reg [31:0] WB_PCaddfour,
    output reg [31:0] WB_readData,
    
    input [1:0] MEM_memtoReg, 
    input MEM_regWrite,

    output reg [1:0] WB_memtoReg,    
    output reg WB_regWrite
);
  
    always @(posedge clk) begin
        WB_ALUOut <= MEM_ALUOut;
        WB_writeReg <= MEM_writeReg;
        WB_PCaddfour <= MEM_PCaddfour;
        WB_readData <= MEM_readData;

        WB_memtoReg <= MEM_memtoReg;
        WB_regWrite <= MEM_regWrite;
    end

endmodule
