/* Ghidra pseudocode. PS2 address: 001c3a08. Not validated source. */

undefined4 FUN_001c3a08(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x284 + *(int *)(param_1 + 0x1468) * 4);
  if ((*piVar1 != 0) && (*piVar1 != 1)) {
    return 0;
  }
  if (*piVar1 == 0) {
    *piVar1 = 1;
  }
  return 1;
}

