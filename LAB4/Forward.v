module Forward(
    input [4:0] EX_readReg1,
    input [4:0] EX_readReg2,
    input [4:0] MEM_writeReg,
    input [4:0] WB_writeReg,
    input MEM_regWrite,
    input WB_regWrite,
    output reg [1:0] EX_forward1,
    output reg [1:0] EX_forward2
);

    always @(*) begin
        EX_forward1 = 2'b00;
        EX_forward2 = 2'b00;

        if(EX_readReg1 != 0) begin
            if(MEM_regWrite && EX_readReg1 == MEM_writeReg) begin
                EX_forward1 = 2'b10;
            end
            else if(WB_regWrite && EX_readReg1 == WB_writeReg) begin
                EX_forward1 = 2'b01;
            end
        end

        if(EX_readReg2 != 0) begin
            if(MEM_regWrite && EX_readReg2 == MEM_writeReg) begin
                EX_forward2 = 2'b10;
            end
            else if(WB_regWrite && EX_readReg2 == WB_writeReg) begin
                EX_forward2 = 2'b01;
            end
        end
        end
endmodule
