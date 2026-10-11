/* Ghidra pseudocode. PS2 address: 00204888. Not validated source. */

void FUN_00204888(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)param_1 + 0x3216c) == 0) {
    iVar2 = 0x2f;
    FUN_00205680();
    iVar1 = (int)param_1 + 0x32170;
    do {
      FUN_002047c0(iVar1,param_1);
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x2c;
    } while (-1 < iVar2);
  }
  return;
}

