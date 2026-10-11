/* Ghidra pseudocode. PS2 address: 001952c8. Not validated source. */

void FUN_001952c8(int param_1)

{
  int iVar1;
  
  iVar1 = 3;
  param_1 = param_1 + 0x50;
  do {
    iVar1 = iVar1 + -1;
    FUN_00199ca0(param_1);
    param_1 = param_1 + 0xe24;
  } while (-1 < iVar1);
  return;
}

