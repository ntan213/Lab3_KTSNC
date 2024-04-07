#define MAX_SIM 20

void set_random(Vtop *dut, vluint64_t sim_unit) {
  if (sim_unit <= 5) {
    dut -> key = 2;
  }

  if (sim_unit == 6) {
    dut -> key = 1;
  }

  if (sim_unit == 7) {
    dut -> key = 2;
  }
  if (sim_unit >= 8) {
    dut -> key = 1;
  }
  dut->sw  = 1;
}
