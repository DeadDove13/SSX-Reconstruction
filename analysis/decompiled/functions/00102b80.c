/* Ghidra pseudocode. PS2 address: 00102b80. Not validated source. */

void FUN_00102b80(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  undefined4 auStack_b0 [4];
  
  FUN_00103db8();
  FUN_00189438(DAT_002859e4);
  FUN_00103700(DAT_002859e4);
  FUN_00207088(DAT_002c56e8,9);
  FUN_00155d30(0x27a598);
  *(undefined4 *)(param_1 + 8) = 0;
  iVar8 = DAT_0027ba88;
  if ((*(int *)(param_2 + 0x80) == 1) && (uVar3 = DAT_0027ba88 - 2, uVar3 < 4)) {
    lVar9 = 3;
    if ((DAT_0027ba88 == 5) || (iVar6 = 0, DAT_0027ba88 == 3)) {
      lVar9 = FUN_00159328(DAT_0027bcac,DAT_0027ba84);
    }
    else {
      for (; iVar6 < DAT_0027b810; iVar6 = iVar6 + 1) {
        if (-1 < (char)(&DAT_0027b868)[(&DAT_0027bc0c)[iVar6] * 0x68]) {
          lVar9 = FUN_00159388(iVar6);
          break;
        }
      }
    }
    uVar4 = 2;
    if (lVar9 == 3) {
LAB_00102cb0:
      *(undefined4 *)(param_1 + 8) = uVar4;
    }
    else {
      lVar5 = FUN_00152ea8(0x27a598);
      uVar4 = 1;
      if (lVar5 == 0) goto LAB_00102cb0;
      *(undefined4 *)(param_1 + 8) = 3;
    }
    if ((uVar3 < 2) && (lVar9 != 0)) {
      *(undefined4 *)(param_1 + 8) = 0;
    }
    if (((iVar8 == 4) && (lVar5 = FUN_00154078(0x27a598), lVar5 != 3)) && (lVar9 != 3)) {
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  FUN_001a32c8(*(undefined4 *)(DAT_002859e4 + 0x30),0,0xffffffffffffffff);
  FUN_001a32c8(*(undefined4 *)(DAT_002859e4 + 0x30),7,0xffffffffffffffff);
  uVar4 = 2;
  if (DAT_0027c330 < 0) {
    iVar8 = 0;
    if (0 < DAT_002c4694) {
      piVar7 = &DAT_0027e9ac;
      iVar6 = DAT_002c4694;
      do {
        iVar2 = *piVar7;
        piVar7 = piVar7 + 3;
        iVar6 = iVar6 + -1;
        if (2 < iVar2 - 6U) {
          iVar8 = iVar8 + 1;
        }
      } while (iVar6 != 0);
    }
    if (iVar8 == 0) {
      FUN_001a32b0(*(undefined4 *)(DAT_002859e4 + 0x30),1,0xffffffffffffffff);
      iVar8 = *(int *)(param_1 + 8);
      goto LAB_00102dac;
    }
    uVar1 = *(undefined4 *)(DAT_002859e4 + 0x30);
    uVar4 = 0xd;
  }
  else {
    uVar1 = *(undefined4 *)(DAT_002859e4 + 0x30);
  }
  FUN_001a32b0(uVar1,uVar4,0xffffffffffffffff);
  iVar8 = *(int *)(param_1 + 8);
LAB_00102dac:
  if (iVar8 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    iVar8 = 0;
    FUN_0015da00(*(undefined4 *)(DAT_002859e4 + 0xa0),0x2a6d50);
    piVar7 = (int *)(param_2 + 200);
    if (0 < *(int *)(param_2 + 0x8c)) {
      do {
        iVar6 = *piVar7;
        if (*(char *)(*(int *)(iVar6 + 0x394) + 0x54) < '\0') {
          FUN_00107bc8(iVar6,0);
        }
        else {
          FUN_00107bc8(iVar6,1);
          FUN_00104fa8(*piVar7);
          FUN_001e9448(auStack_b0);
          uVar4 = FUN_001e9718(param_2 + 0x128,*piVar7,1,auStack_b0[0]);
          *(undefined4 *)(param_2 + 0x440) = uVar4;
        }
        iVar8 = iVar8 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar8 < *(int *)(param_2 + 0x8c));
    }
    *(undefined4 *)(param_2 + 0x438) = 1;
    FUN_00147440(0x2795b8);
    if (*(int *)(param_1 + 8) == 2) {
      FUN_001f3640(DAT_002c56e8,0x2a6d60,5,*(undefined4 *)(param_2 + 0x444),0x41000);
    }
    else if (*(int *)(param_1 + 8) == 1) {
      FUN_001f3640(DAT_002c56e8,0x2a6d80,5,*(undefined4 *)(param_2 + 0x444),0x41000);
    }
    *(undefined4 *)(param_1 + 4) = 1;
  }
  return;
}

