module top (
    input logic clk_i, 
    input logic rst_ni, 
    input logic [1:0] key,
    input logic sw, 
    output logic [6:0] HEX0, HEX1, HEX2, HEX3, HEX4, HEX5
);

  lab3 dut (
    .clk (clk_i),
    .rst (rst_ni),
    .key (key),
    .sw (sw),
    .HEX0 (HEX0),
    .HEX1 (HEX1),
    .HEX2 (HEX2),
    .HEX3 (HEX3),
    .HEX4 (HEX4),
    .HEX5 (HEX5)
  );

endmodule : top
