/* Ghidra pseudocode. PS2 address: 00190930. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001909c0) */

long FUN_00190930(undefined8 param_1)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  
  lVar3 = FUN_0018dc18();
  lVar4 = FUN_0018dd28(param_1);
  if ((lVar4 == 0) && (lVar3 == 0)) {
    lVar4 = FUN_0018dda0(param_1,8);
    uVar6 = 0xffffffff;
    if (lVar4 == 0) {
      lVar4 = FUN_0018dda0(param_1,4);
      uVar6 = (uint)(lVar4 != 0);
    }
    iVar7 = (int)param_1;
    if (uVar6 == *(uint *)(iVar7 + 0x1c)) {
      *(int *)(iVar7 + 0x18) = *(int *)(iVar7 + 0x18) + 1;
    }
    else {
      *(undefined4 *)(iVar7 + 0x18) = 0;
      *(uint *)(iVar7 + 0x1c) = uVar6;
    }
    if (uVar6 != 0) {
      iVar1 = (*(int *)(iVar7 + 0x18) * *(int *)(iVar7 + 0x18)) / 0x120;
      iVar5 = 1;
      if (0 < iVar1) {
        iVar5 = iVar1;
      }
      pfVar2 = (float *)(*(int *)(iVar7 + 0x10) + *(int *)(iVar7 + 0x14) * 4);
      fVar8 = *pfVar2 + (float)(int)uVar6 * (float)iVar5 * DAT_002c2a1c;
      if (fVar8 < 0.0) {
        fVar8 = 0.0;
      }
      if (1.0 < fVar8) {
        fVar8 = 1.0;
      }
      iVar7 = *(int *)(iVar7 + 4);
      *pfVar2 = fVar8;
      iVar1 = *(int *)(iVar7 + 0x114);
      (**(code **)(iVar1 + 0x24))(iVar7 + *(short *)(iVar1 + 0x20),param_1);
    }
  }
  return lVar3;
}

