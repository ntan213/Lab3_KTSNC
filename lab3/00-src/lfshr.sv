module lfshr (
    input clk,
    input rst,
    input [23:0] seed,
    output reg [23:0] out
);
    wire feedback = out[23] ^ out[9] ^ out[11] ^ out[3]; 

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            out <= seed;
        end else begin
            out <= {out[22:0], feedback};
        end
    end
endmodule