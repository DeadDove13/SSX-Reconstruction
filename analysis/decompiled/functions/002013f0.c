/* Ghidra pseudocode. PS2 address: 002013f0. Not validated source. */

undefined4 FUN_002013f0(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x8bb74) == 0) && (0.875 < *(float *)(*(int *)(param_2 + 0x18) + 0x1c))) {
    FUN_001f1b70();
  }
  return 1;
}

