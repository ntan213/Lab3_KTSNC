module mem (
    input logic clk,
    input logic rst,
    input logic wr_m,
    input logic [23:0] wr_data,
    input logic [4:0] wr_addr_m,
    input logic [4:0] rd_addr_m,
    output logic [23:0] data_m
);

reg [23:0] mem [0:31];

always@(posedge clk) begin 
    if (rst == 1) begin 
        data_m <= 24'b0; 
    end else if (wr_m == 1'b1) begin 
        mem [wr_addr_m] <= wr_data;
    end
    data_m <= mem [rd_addr_m];

end
endmodule
