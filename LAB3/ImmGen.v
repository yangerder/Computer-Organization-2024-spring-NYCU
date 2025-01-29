module ImmGen (
    /* verilator lint_off UNUSEDSIGNAL */
    input [31:0] inst,
    output reg signed [31:0] imm
);
    // ImmGen generate imm value base opcode

    wire [6:0] opcode = inst[6:0];
    always @(*) begin
        case(opcode)
            // TODO: implement your ImmGen here
            // Hint: follow the RV32I opcode map (table in spec) to set imm value
            7'b0000011 : imm = {{20{inst[31]}},inst[31:20]};
            7'b0100011 : imm = {{20{inst[31]}}, inst[31:25], inst[11:7]}; // S-type instruction
            7'b1100011 : imm = {{20{inst[31]}}, inst[31],inst[7], inst[30:25], inst[11:8]}; // B-type instruction
            7'b0010011 : imm = {{20{inst[31]}}, inst[31:20]}; // I-type instruction
            7'b1100111 : imm = {{20{inst[31]}}, inst[31:20]}; // JALR-type instruction
            7'b1101111 : imm = {{12{inst[31]}}, inst[31], inst[19:12], inst[20], inst[30:21]}; // UJ-type instruction    
            default : imm = {32{1'b0}};
        endcase
    end

endmodule

