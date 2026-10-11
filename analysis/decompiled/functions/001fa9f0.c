/* Ghidra pseudocode. PS2 address: 001fa9f0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001faae8) */

void FUN_001fa9f0(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_001f8b30(param_1,5);
  FUN_001f9c28(param_1);
  FUN_00205878(param_1,DAT_002c5618);
  FUN_001f5d68(param_1);
  FUN_001fcd40(param_1);
  FUN_0020a818(DAT_002c56e8,2);
  FUN_00209730(DAT_002c56e8,0);
  FUN_00209730(DAT_002c56e8,1);
  FUN_0020a970(DAT_002c56e8,2,0x7f);
  FUN_0020a970(DAT_002c56e8,0,0x7f);
  FUN_0020a970(DAT_002c56e8,3,0x7f);
  FUN_001fd400(param_1);
  iVar2 = (int)param_1;
  if (DAT_0027ba88 != 6) {
    FUN_00207008(param_1);
    uVar1 = (**(code **)(*(int *)(iVar2 + 0x32000) + 0x1c))
                      (iVar2 + *(short *)(*(int *)(iVar2 + 0x32000) + 0x18));
    for (uVar1 = ((uVar1 & 0x7fff) * 0x15) / 0x7fff; uVar1 != 0; uVar1 = uVar1 - 1) {
      FUN_00207268(param_1);
    }
    FUN_001fcda0(param_1);
    FUN_00206fb8(param_1);
  }
  if ((DAT_0027ba88 < 6) && (3 < DAT_0027ba88)) {
    FUN_001f8b30(param_1,2);
    FUN_001fc990(param_1,1);
  }
  if (*(int *)(iVar2 + 0x8bb74) < 1) {
    *(undefined4 *)(iVar2 + 0x8bb74) = 0;
  }
  else {
    FUN_001f5ef8(param_1,*(undefined4 *)(iVar2 + 0x8bb70));
    *(undefined4 *)(iVar2 + 0x8bb74) = 0;
  }
  FUN_001fdc00(param_1,1);
  FUN_001fd948(param_1,1,0,*(int *)(iVar2 + 0x32160) + 3000,0);
  return;
}

