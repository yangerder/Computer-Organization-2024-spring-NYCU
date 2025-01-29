module EXMEM(
    input clk,
    input [31:0] EX_ALUOut,
    input [31:0] EX_writeData,
    input [4:0] EX_writeReg,
    input [31:0] EX_PCaddfour,

    output reg [31:0] MEM_ALUOut,
    output reg [31:0] MEM_writeData,
    output reg [4:0] MEM_writeReg,
    output reg [31:0] MEM_PCaddfour,

    input EX_memRead,
    input [1:0] EX_memtoReg, 
    input EX_memWrite,
    input EX_regWrite,

    output reg MEM_memRead,
    output reg [1:0] MEM_memtoReg, 
    output reg MEM_memWrite,
    output reg MEM_regWrite
);
  
    always @(posedge clk) begin                      
        MEM_ALUOut <= EX_ALUOut;
        MEM_writeData <= EX_writeData;
        MEM_writeReg <= EX_writeReg;
        MEM_PCaddfour <= EX_PCaddfour;
        MEM_memRead <= EX_memRead;
        MEM_memtoReg <= EX_memtoReg;
        MEM_memWrite <= EX_memWrite;
        MEM_regWrite <= EX_regWrite;
    end

endmodule
