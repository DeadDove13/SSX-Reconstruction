/* Ghidra pseudocode. PS2 address: 001f4c90. Not validated source. */

int FUN_001f4c90(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_2 * 0x1c + *(int *)(param_1 + 0x351c4));
  if (*piVar1 == 1) {
    return piVar1[1];
  }
  return -1;
}

