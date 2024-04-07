module D_ff (
    input logic clk, 
    input logic rst,
    input logic en,
    input logic [23:0] D, 
    output logic [23:0] Q
);

always @(posedge clk) begin
    if (rst == 0 && en == 1)    begin 
        Q <= D; 
    end else begin 
        Q <= 24'b0;
    end
end
endmodule
