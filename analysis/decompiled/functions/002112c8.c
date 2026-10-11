/* Ghidra pseudocode. PS2 address: 002112c8. Not validated source. */

void FUN_002112c8(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x154 + *(int *)(param_1 + 0xc) * 0x14);
  if (*piVar1 == -1) {
    *piVar1 = 0;
  }
  return;
}

