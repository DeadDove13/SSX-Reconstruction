/* Ghidra pseudocode. PS2 address: 00146348. Not validated source. */

void FUN_00146348(int *param_1)

{
  (**(code **)(param_1[2] + 0x1c))((int)param_1 + (int)*(short *)(param_1[2] + 0x18));
  if (*param_1 == 0) {
    param_1[1] = 0;
  }
  else {
    FUN_00103710();
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

