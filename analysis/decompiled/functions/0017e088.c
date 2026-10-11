/* Ghidra pseudocode. PS2 address: 0017e088. Not validated source. */

void FUN_0017e088(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  FUN_0017c140();
  iVar7 = (int)param_1;
  iVar2 = *(int *)(iVar7 + 0xbd0);
  if (iVar2 == 3) {
    if (*(int *)(iVar7 + 0xbcc) != 0) {
      FUN_0016af98(*(int *)(iVar7 + 0xbcc),param_2);
      return;
    }
  }
  else {
    if (iVar2 < 4) {
      if (iVar2 < 0) {
        return;
      }
      iVar2 = *(int *)(iVar7 + 0xb3c);
    }
    else {
      if (iVar2 != 4) {
        return;
      }
      iVar2 = *(int *)(iVar7 + 0xb3c);
    }
    iVar1 = *(int *)(iVar7 + 0xbc8);
    uVar9 = *(undefined4 *)(iVar2 + 0x46c);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x40) + 0x24))
                (iVar1 + *(short *)(*(int *)(iVar1 + 0x40) + 0x20),param_2);
    }
    FUN_001686c0(*(undefined4 *)(iVar7 + 0xb3c),param_2);
    FUN_0011ed18(0x295e90,0xe);
    lVar3 = FUN_0016f348(param_1,uVar9);
    if (lVar3 == 0x174) {
      if (*(int *)(iVar7 + 0xbb0) != 0) {
        uVar9 = 0x41600000;
        FUN_0017dee0(0xc3120000,0xc2340000,0x41600000,0x41f00000,param_1,0x2c4b10,1,
                     *(undefined4 *)(iVar7 + 3000));
        FUN_0017dee0(0xc25c0000,0xc2340000,uVar9,0x41f00000,param_1,0x2c4b18,0,
                     *(undefined4 *)(iVar7 + 0xbb4));
      }
    }
    else if ((lVar3 == 0x175) && (*(int *)(iVar7 + 0xbb0) != 0)) {
      fVar8 = DAT_00283e5c;
      if (*(int *)(iVar7 + 0xb90) != 0) {
        fVar8 = *(float *)(&DAT_00283e08 + *(int *)(*(int *)(iVar7 + 0xb90) + 0x29c) * 0xc);
      }
      uVar10 = 0;
      uVar9 = 0x41f00000;
      FUN_0017dee0(-188.0 - fVar8 * 0.5,0,0x41600000,0x41f00000,param_1,0x2c4b10,1,
                   *(undefined4 *)(iVar7 + 3000));
      FUN_0017dee0(fVar8 * 0.5 + -188.0,uVar10,0x41600000,uVar9,param_1,0x2c4b18,0,
                   *(undefined4 *)(iVar7 + 0xbb4));
    }
    FUN_0011ed18(0x295e90,0xc);
    FUN_00173700(DAT_002c291c,iVar7 + 0xbd4,param_2,0xffffffffffffffd3,0x76);
    iVar2 = *(int *)(iVar7 + 0xbd0);
    if (iVar2 == 2) {
      uVar4 = FUN_0019a998(0x177);
      uVar5 = FUN_0019a998(0x77);
      uVar6 = FUN_0019a998(0x78);
      FUN_0016c6f0(param_1,param_2,uVar4,uVar5,uVar6,1);
      iVar2 = *(int *)(iVar7 + 0xbd0);
    }
    if (iVar2 == 4) {
      FUN_0016cb78(param_1);
      return;
    }
  }
  return;
}

