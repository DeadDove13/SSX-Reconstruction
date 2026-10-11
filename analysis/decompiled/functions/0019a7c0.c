/* Ghidra pseudocode. PS2 address: 0019a7c0. Not validated source. */

int FUN_0019a7c0(short *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  sVar1 = *param_1;
  while (sVar1 != 0) {
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
    sVar1 = *param_1;
  }
  return iVar2;
}

