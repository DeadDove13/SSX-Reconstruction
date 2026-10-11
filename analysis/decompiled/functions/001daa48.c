/* Ghidra pseudocode. PS2 address: 001daa48. Not validated source. */

void FUN_001daa48(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_00211c98(*(undefined4 *)((int)param_1 + 0x16c));
  if (lVar2 != 0) {
    return;
  }
  iVar1 = *(int *)((int)param_1 + 0x16c);
  lVar2 = FUN_00211ca8(iVar1,*(undefined4 *)(iVar1 + 0xc));
  if (lVar2 != 0) {
    FUN_001d9670(param_1,0xd);
    return;
  }
  FUN_001d9670(param_1,0xe);
  return;
}

