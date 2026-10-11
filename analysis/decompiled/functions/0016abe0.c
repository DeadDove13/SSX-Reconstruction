/* Ghidra pseudocode. PS2 address: 0016abe0. Not validated source. */

void FUN_0016abe0(int param_1)

{
  if ((*(int *)(param_1 + 8) != 0) && (*(code **)(param_1 + 0xc) != (code *)0x0)) {
    (**(code **)(param_1 + 0xc))();
  }
  return;
}

