/* Ghidra pseudocode. PS2 address: 0023efe8. Not validated source. */

void FUN_0023efe8(int param_1)

{
  int iVar1;
  
  param_1 = DAT_002c5a9c + param_1;
  iVar1 = DAT_002c5a9c - param_1;
  while (iVar1 < 0) {
    FUN_0023e608(0);
    iVar1 = DAT_002c5a9c - param_1;
  }
  return;
}

