/* Ghidra pseudocode. PS2 address: 00154808. Not validated source. */

uint FUN_00154808(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_002c4664 == 0) {
    iVar2 = FUN_00156b78(param_1,param_2);
    uVar1 = *(int *)(*(int *)((int)param_1 + iVar2 * 0x50 + 0x1524) + 0x60) >> (param_3 & 0x1f) & 1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

