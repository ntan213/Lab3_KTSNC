module mux (
    input logic [23:0] a,b, 
    input logic sel, 
    output logic [23:0] c
);

always_comb begin 
    case (sel) 
    1'b0: c = a; 
    1'b1: c = b;
    endcase
end
endmodule
