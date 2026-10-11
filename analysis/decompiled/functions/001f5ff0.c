/* Ghidra pseudocode. PS2 address: 001f5ff0. Not validated source. */

void FUN_001f5ff0(int param_1)

{
  int iVar1;
  
  iVar1 = 0x3f;
  param_1 = param_1 + 0x329c0;
  do {
    *(undefined4 *)(param_1 + 0x5c) = 0xbf800000;
    iVar1 = iVar1 + -1;
    param_1 = param_1 + 0xa0;
  } while (-1 < iVar1);
  return;
}

