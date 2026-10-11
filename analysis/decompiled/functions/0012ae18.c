/* Ghidra pseudocode. PS2 address: 0012ae18. Not validated source. */

void FUN_0012ae18(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  *(undefined **)((int)param_1 + 8) = &DAT_002a9518;
  iVar1 = *(int *)((int)param_1 + 0x4c);
  if (iVar1 != 0) {
    FUN_001bfed8(*(undefined4 *)(DAT_002859e4 + 0x34),iVar1);
  }
  FUN_001221d8(param_1,param_2);
  return;
}

