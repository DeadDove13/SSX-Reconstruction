/* Ghidra pseudocode. PS2 address: 001f5c50. Not validated source. */

void FUN_001f5c50(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x329bc) = 1;
  iVar1 = 0x3f;
  param_1 = param_1 + 0x329c0;
  do {
    iVar1 = iVar1 + -1;
    FUN_001f5720(param_1);
    param_1 = param_1 + 0xa0;
  } while (-1 < iVar1);
  return;
}

