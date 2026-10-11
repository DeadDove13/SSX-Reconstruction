/* Ghidra pseudocode. PS2 address: 00154888. Not validated source. */

bool FUN_00154888(undefined8 param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  if (DAT_002c4664 == 0) {
    iVar2 = FUN_00156b78(param_1,param_2);
    iVar2 = *(int *)((int)param_1 + iVar2 * 0x50 + 0x1524);
    bVar1 = *(int *)(&DAT_0027e0c8 + param_3 * 0x10) <= *(int *)(iVar2 + 4) + *(int *)(iVar2 + 8);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

