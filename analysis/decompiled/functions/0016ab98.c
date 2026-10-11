/* Ghidra pseudocode. PS2 address: 0016ab98. Not validated source. */

void FUN_0016ab98(int param_1)

{
  if ((*(int *)(param_1 + 0x10) != 0) && (*(code **)(param_1 + 0x14) != (code *)0x0)) {
    (**(code **)(param_1 + 0x14))();
  }
  return;
}

