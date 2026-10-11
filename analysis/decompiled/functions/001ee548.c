/* Ghidra pseudocode. PS2 address: 001ee548. Not validated source. */

void FUN_001ee548(int param_1)

{
  int iVar1;
  
  iVar1 = 0x10;
  param_1 = param_1 + 0x3e30;
  do {
    iVar1 = iVar1 + -1;
    FUN_001ea750(param_1);
    param_1 = param_1 + 0x250;
  } while (-1 < iVar1);
  return;
}

