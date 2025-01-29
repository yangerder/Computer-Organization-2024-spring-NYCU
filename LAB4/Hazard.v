module Hazard(
    input [4:0] ID_readReg1,
    input [4:0] ID_readReg2,
    input [4:0] EX_writeReg,
    input EX_PCSrc,
    input [1:0] EX_memtoReg,
    
    output reg stallPC,
    output reg IFID_flush, 
    output reg IFID_stall, 
    output reg IDEX_flush
);

    reg lwStall;
    always @(*) begin
        lwStall = 0;
        stallPC = 0;
        IFID_flush = 0;
        IFID_stall = 0;
        IDEX_flush = 0;

        if (EX_memtoReg == 2'b01 && ((ID_readReg1 == EX_writeReg) || (ID_readReg2 == EX_writeReg))) begin
            lwStall = 1;
        end

        assign stallPC = lwStall;
        assign IFID_stall = lwStall;
        assign IFID_flush = EX_PCSrc;
        assign IDEX_flush = (lwStall || EX_PCSrc);
    end
endmodule
