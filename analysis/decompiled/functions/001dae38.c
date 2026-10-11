/* Ghidra pseudocode. PS2 address: 001dae38. Not validated source. */

void FUN_001dae38(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  *(float *)(iVar2 + 0x38) =
       (float)*(int *)(*(int *)(iVar2 + 0x16c) + 0x28) / (float)*(int *)(iVar2 + 0x28);
  lVar1 = FUN_00211390();
  iVar2 = *(int *)(iVar2 + 0x16c);
  if (lVar1 != 1) {
    lVar1 = FUN_00211ca8(iVar2,*(undefined4 *)(iVar2 + 0xc));
    if (lVar1 != 0) {
      FUN_001d9670(param_1,0x12);
      return;
    }
    return;
  }
  lVar1 = FUN_00211ca8(iVar2,*(undefined4 *)(iVar2 + 0xc));
  if (lVar1 != 0) {
    FUN_001d9670(param_1,0x12);
    return;
  }
  FUN_001d9670(param_1,0xf);
  return;
}

