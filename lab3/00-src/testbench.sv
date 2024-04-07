

module testbench;
    	reg clk; 
    	reg rst; 
    	reg [1:0] key;  // key1: write, key0 read
    	reg sw; 
 	reg [6:0] HEX0,HEX1,HEX2,HEX3,HEX4,HEX5;

lab3 dut(
	.clk(clk),
	.rst(rst),	
	.key(key),
	.sw(sw),	
	.HEX0(HEX0),
	.HEX1(HEX1),
	.HEX2(HEX2),
	.HEX3(HEX3),
	.HEX4(HEX4),
	.HEX5(HEX5)
  );

wire notempty,o_full;
wire [5:0] wraddr,rdaddr,fifolen;
wire [23:0] i_data,o_data;


assign wraddr = dut.FIFOControl.wraddr;
assign rdaddr = dut.FIFOControl.rdaddr;
assign notempty = dut.FIFOControl.notempty;
assign o_full = dut.FIFOControl.fifofull;
assign fifolen = dut.FIFOControl.fifolen;
assign wr_en = dut.FIFOControl.fifowr;
assign rd_en = dut.FIFOControl.fiford;
assign o_data = dut.Memory.data_m;
assign i_data = dut.Memory.wr_data;


initial begin
    $dumpfile("testbench.vcd");
    $dumpvars(0, testbench);
    $display("hahah toai dey");
	clk=0;
	forever #5 clk =~clk;
end
initial begin
    $display("hahah toai dey2");
    	key = 2'b10;
	forever #1000 key =~key;
end

property async_rst_startup;
@(posedge clk) rst |-> ##1 (wraddr==0 && rdaddr == 0 && !notempty,$display("case 2 passed"));
endproperty

property async_rst_chk;
@(posedge rst) 1'b1 |-> ##1 @(posedge clk) (wraddr==0 && rdaddr == 0 && !notempty,$display("case 1 passed"));
endproperty

property dont_write_if_full;
@(posedge clk) disable iff(rst) o_full |-> ##1 ($stable(wraddr),$display("case 3 passed"));
endproperty

sequence rd_detect(ptr);
##[0:$] (rd_en && notempty && (rdaddr == ptr));
endsequence


property dont_read_if_empty;
@(posedge clk) disable iff(rst) rd_en && !notempty |-> ##1 ($stable(rdaddr),$display("case 4 passed"));
endproperty

property inc_wr_one;
@(posedge clk) disable iff(rst) wr_en && !o_full |-> ##1 (wraddr-1'b1 == $past(wraddr),$display("case 5 passed"));
endproperty

A: assert property(async_rst_startup);
B: assert property(async_rst_chk);
C: assert property(dont_write_if_full);
D: assert property(dont_read_if_empty);
E: assert property(inc_wr_one);


initial begin
    $display("hahah toai dey3");
    	#0 rst = 0;
	#10 rst = 1;
	#20 rst = 0;
	sw=1;
	#1000;
	sw=0;

$finish;
end




endmodule
