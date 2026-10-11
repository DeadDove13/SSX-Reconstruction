/* Ghidra pseudocode. PS2 address: 0013cff8. Not validated source. */

bool FUN_0013cff8(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (1 < *(int *)(param_1 + 8)) {
    bVar1 = 0xf0 < *(int *)(param_1 + 0xc);
  }
  return bVar1;
}

