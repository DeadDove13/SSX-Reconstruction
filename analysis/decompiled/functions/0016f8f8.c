/* Ghidra pseudocode. PS2 address: 0016f8f8. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0016f8f8(undefined8 param_1)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  iVar8 = 0;
  fVar11 = 0.5;
  uVar12 = 0x41600000;
  FUN_00165a10((float)DAT_002859d4 / 60.0);
  do {
    lVar2 = FUN_00165a30(0,0x40800000,0);
    if (lVar2 != 0) {
      FUN_00165a98(&uStack_a0,&uStack_9c);
      FUN_00165ac0(0,0x40800000);
      uVar9 = FUN_00165b08(0,DAT_002c2800);
      FUN_00218240(uVar9);
      fVar10 = (float)FUN_00165b08((float)iVar8 * fVar11 * 100.0,(float)(iVar8 + 1) * fVar11 * 100.0
                                  );
      fVar10 = -fVar10;
      if (iVar8 == 1) {
        uVar9 = FUN_00165b08(0x3f800000,0);
      }
      else {
        uVar9 = 0x3f800000;
      }
      uVar7 = iVar8 << 0x18;
      uStack_cc = 0;
      uStack_c4 = 0;
      fStack_d0 = fVar10;
      uStack_c8 = uVar12;
      FUN_0016f538(param_1,uVar7 | 0x1b0,&fStack_d0);
      FUN_0016f770(uVar9,param_1,0xffffffffffffffff);
      uStack_cc = 0;
      uStack_c4 = 0;
      fStack_d0 = fVar10;
      uStack_c8 = uVar12;
      FUN_0016f538(param_1,uVar7 | 0x364,&fStack_d0);
      FUN_0016f770(uVar9,param_1,0xffffffffffffffff);
      uStack_cc = 0;
      uStack_c8 = 0x41800000;
      uStack_c4 = 0;
      fStack_d0 = fVar10;
      FUN_0016f538(param_1,uVar7 | 0x1b1,&fStack_d0);
      FUN_0016f770(uVar9,param_1,0xffffffffffffffff);
      uStack_cc = 0;
      uStack_c8 = 0x41800000;
      uStack_c4 = 0;
      fStack_d0 = fVar10;
      FUN_0016f538(param_1,uVar7 | 0x365,&fStack_d0);
      FUN_0016f770(uVar9,param_1,0xffffffffffffffff);
      FUN_00165ab0(uStack_a0,uStack_9c);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 2);
  iVar8 = (int)param_1;
  lVar2 = FUN_00165a30(*(undefined4 *)(iVar8 + 8),0x40a00000,0);
  if (lVar2 != 0) {
    FUN_00165a98(&uStack_98,&uStack_94);
    uVar12 = DAT_002c2804;
    FUN_00165ac0(*(undefined4 *)(iVar8 + 8),0x40a00000);
    fVar11 = 1.0;
    fVar10 = (float)FUN_00165b08(0,uVar12);
    uVar9 = FUN_00218240(fVar10 * 4.0);
    uStack_b8 = DAT_002c2808;
    uStack_b4 = 0;
    uStack_a8 = DAT_002c2808;
    uStack_a4 = DAT_002c280c;
    fStack_c0 = fVar11;
    fStack_bc = fVar11;
    fStack_b0 = fVar11;
    fStack_ac = fVar11;
    FUN_0016f858(uVar9,&fStack_d0,&fStack_c0,&fStack_b0);
    _DAT_00280f28 = CONCAT44(uStack_cc,fStack_d0);
    _DAT_00280f30 = CONCAT44(uStack_c4,uStack_c8);
    uVar3 = FUN_0016f348(param_1,*(undefined4 *)(*(int *)(iVar8 + 0xb3c) + 0x46c));
    if (*(int *)(iVar8 + 0xb30) == 0) {
      fVar11 = (float)FUN_00165b08(0,uVar12);
      fVar10 = (float)FUN_00218240(fVar11 * 4.0);
    }
    else {
      fVar10 = -1.0;
      if (*(int *)(iVar8 + 0xb34) != 0) {
        fVar10 = fVar11;
      }
    }
    fVar11 = (fVar10 + 1.0) / 11.0 + DAT_002c2810;
    FUN_0016e100(param_1,uVar3);
    FUN_0016e340(fVar11,param_1,0xffffffffffffffff);
    lVar2 = FUN_0016ef88(uVar3);
    if (lVar2 < 0) {
      iVar6 = *(int *)(iVar8 + 4);
    }
    else {
      lVar4 = FUN_0016dd88(param_1,lVar2);
      if (lVar4 != 0) {
        FUN_0016e100(param_1,lVar2);
        FUN_0016e340(fVar11,param_1,0xffffffffffffffff);
      }
      iVar6 = *(int *)(iVar8 + 4);
    }
    uVar5 = (**(code **)(iVar6 + 0x9c))
                      (iVar8 + *(short *)(iVar6 + 0x98),uVar3,
                       *(undefined4 *)(*(int *)(iVar8 + 0xb3c) + 0x46c));
    uVar5 = FUN_0016c390(uVar5,*(undefined4 *)(iVar8 + 0xb20));
    FUN_0016e100(param_1,uVar5);
    FUN_0016e340(fVar11,param_1,0xffffffffffffffff);
    piVar1 = (int *)FUN_0016f230(param_1,uVar3,*(undefined4 *)(*(int *)(iVar8 + 0xb3c) + 0x46c));
    if (*piVar1 < 0) {
      *(float *)(iVar8 + 0xc) = fVar11;
    }
    else {
      FUN_0016e100(param_1);
      FUN_0016e340(fVar11,param_1,0xffffffffffffffff);
      *(float *)(iVar8 + 0xc) = fVar11;
    }
    FUN_00165ab0(uStack_98,uStack_94);
  }
  return;
}

