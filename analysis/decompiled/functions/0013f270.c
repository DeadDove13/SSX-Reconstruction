/* Ghidra pseudocode. PS2 address: 0013f270. Not validated source. */

void FUN_0013f270(float param_1,float param_2,float param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  bVar2 = ABS(param_1) <= DAT_002c208c;
  bVar3 = DAT_002c2090 <= param_2;
  bVar4 = DAT_002c2094 <= param_3;
  FUN_0010b340(*(undefined4 *)(param_4 + 0x20),2);
  iVar1 = *(int *)(param_4 + 0x20);
  iVar6 = *(int *)(iVar1 + 0x6cf4);
  if (*(int *)(&DAT_002ac2c4 + *(int *)(iVar6 + 8) * 0xc) == 0xf) {
    *(undefined4 *)(iVar1 + 0x1a0) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x198) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x19c) = 0;
    *(undefined4 *)(iVar1 + 0x194) = 0;
    *(undefined4 *)(iVar1 + 0x18c) = 0;
    *(undefined4 *)(iVar1 + 400) = 0;
    *(undefined4 *)(iVar1 + 0x1ac) = 0;
    *(undefined4 *)(iVar1 + 0x1a4) = 0;
    *(undefined4 *)(iVar1 + 0x1a8) = 0;
LAB_0013f4a4:
    FUN_0014cd18(iVar6,0x34,0,5);
    FUN_0010b330(*(undefined4 *)(param_4 + 0x20),0xc);
    return;
  }
  if (*(int *)(iVar1 + 0x344) == 2) {
    if (bVar2) {
      if (*(int *)(iVar1 + 0x144) == *(int *)(*(int *)(iVar1 + 0x394) + 0x28)) {
        uVar8 = 0x6d;
        if (bVar4) {
          if (bVar3) goto LAB_0013f4a4;
          goto LAB_0013f4f8;
        }
      }
      else {
        uVar8 = 0x6f;
      }
    }
    else {
      uVar5 = *(uint *)(iVar1 + 0x144) ^ 1;
      *(uint *)(iVar1 + 0x144) = uVar5;
      uVar7 = DAT_002c20a4;
      fVar11 = 0.0;
      if (uVar5 != 0) {
        fVar11 = DAT_002c2098;
      }
      fVar10 = fVar11 * DAT_002c209c + 0.5;
      fVar9 = (float)(int)fVar10;
      if (fVar10 < fVar9) {
        fVar9 = fVar9 - 1.0;
      }
      *(float *)(iVar6 + 0x18) = fVar11 - fVar9 * DAT_002c20a0;
      FUN_001129e8(uVar7,iVar1,iVar1 + 0x130);
      FUN_001110b8(DAT_002c20a8,*(undefined4 *)(*(int *)(param_4 + 0x20) + 0x6cf4));
      FUN_001110c0(0xbf800000,auStack_60,*(int *)(param_4 + 0x20) + 0x290);
      iVar1 = *(int *)(param_4 + 0x20);
      *(int *)(iVar1 + 0x290) = auStack_60._0_4_;
      *(int *)(iVar1 + 0x294) = auStack_60._4_4_;
      *(undefined4 *)(iVar1 + 0x298) = uStack_58;
      *(undefined4 *)(iVar1 + 0x29c) = uStack_54;
      FUN_001110c0(0xbf800000,auStack_60,*(int *)(param_4 + 0x20) + 0x2a0);
      iVar1 = *(int *)(param_4 + 0x20);
      *(int *)(iVar1 + 0x2a0) = auStack_60._0_4_;
      *(int *)(iVar1 + 0x2a4) = auStack_60._4_4_;
      *(undefined4 *)(iVar1 + 0x2a8) = uStack_58;
      *(undefined4 *)(iVar1 + 0x2ac) = uStack_54;
      iVar1 = *(int *)(param_4 + 0x20);
      if (*(int *)(iVar1 + 0x144) == *(int *)(*(int *)(iVar1 + 0x394) + 0x28)) {
        iVar6 = *(int *)(iVar1 + 0x6cf4);
        uVar7 = 0x34;
LAB_0013f518:
        FUN_0014cd18(iVar6,uVar7,0,5);
        uVar7 = *(undefined4 *)(param_4 + 0x20);
        goto LAB_0013f524;
      }
      iVar6 = *(int *)(iVar1 + 0x6cf4);
      uVar8 = 0x6f;
    }
  }
  else {
    if ((bVar3) && (bVar4)) {
      FUN_0014cd18(iVar6,0x34,0,5);
      FUN_0010b330(*(undefined4 *)(param_4 + 0x20),0xc);
      return;
    }
    if (bVar2) {
      if (bVar3) {
        uVar7 = 0x6d;
        goto LAB_0013f518;
      }
LAB_0013f4f8:
      uVar8 = 0x71;
    }
    else if (bVar3) {
      uVar8 = 0x6e;
    }
    else {
      uVar8 = 0x72;
    }
  }
  FUN_0014cd18(iVar6,uVar8,0,5);
  uVar7 = *(undefined4 *)(param_4 + 0x20);
LAB_0013f524:
  FUN_0010b330(uVar7,0xb);
  return;
}

