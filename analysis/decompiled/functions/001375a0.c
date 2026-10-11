/* Ghidra pseudocode. PS2 address: 001375a0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00137624) */

undefined4
FUN_001375a0(undefined8 param_1,long param_2,ulong param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  undefined4 uVar6;
  ulong auStack_90 [2];
  
  lVar2 = FUN_00138820();
  iVar3 = DAT_002c56e8;
  if (lVar2 != 0) {
    *(undefined4 *)(DAT_002c56e8 + 0x8bb3c) = 1;
    *(undefined4 *)(iVar3 + 0x8bb38) = 0;
  }
  iVar3 = (int)param_1;
  uVar6 = 0;
  if (*(int *)(iVar3 + 0x1c) == 0) {
    iVar1 = *(int *)(iVar3 + 0x40);
  }
  else {
    iVar1 = FUN_00137d50(param_1,*(undefined4 *)(iVar3 + 0x2c));
    *(int *)(iVar3 + 0x2c) = iVar1;
    uVar4 = (ulong)(iVar1 / 0xb4);
    fVar5 = (float)*(int *)(iVar3 + 0x38) * DAT_002c1cbc;
    *(int *)(iVar3 + 0x6c) = *(int *)(iVar3 + 0x6c) + 1;
    if ((long)uVar4 < 0) {
      uVar4 = (ulong)-(iVar1 / 0xb4);
    }
    *(float *)(iVar3 + 0xb4) = *(float *)(iVar3 + 0xb4) + fVar5;
    FUN_0023bbd0(auStack_90,0,8);
    auStack_90[0] =
         auStack_90[0] & 0xffff0f0fffffffff | (param_3 & 0xf) << 0x2c | (uVar4 & 0xf) << 0x24;
    FUN_00137c30(param_1,auStack_90,0);
    FUN_00138540(param_1,auStack_90);
    uVar6 = FUN_00136a48(param_1);
    iVar1 = FUN_00136a70(param_1);
    if (0 < iVar1) {
      FUN_00137ea0(0x40200000,param_1,2,iVar1);
      *(int *)(iVar3 + 0xd0) = *(int *)(iVar3 + 0xd0) + iVar1;
      if (*(int *)(iVar3 + 0xc4) < iVar1) {
        *(int *)(iVar3 + 0xc4) = iVar1;
        *(ulong *)(iVar3 + 200) = auStack_90[0];
      }
    }
    FUN_00137bc0(param_1);
    if (param_2 == 0) {
      *(undefined4 *)(iVar3 + 0x24) = 0x3f800000;
    }
    else {
      *(undefined4 *)(iVar3 + 0x24) = DAT_002c1cc0;
    }
    iVar1 = *(int *)(iVar3 + 0x40);
  }
  if (iVar1 < 0) {
    *(undefined4 *)(iVar3 + 0x40) = 0;
  }
  *(undefined4 *)(iVar3 + 0x18) = param_5;
  *(int *)(iVar3 + 0x10) = (int)param_2;
  *(undefined4 *)(iVar3 + 0x14) = param_4;
  *(int *)(iVar3 + 0x1c) = (int)param_3;
  return uVar6;
}

