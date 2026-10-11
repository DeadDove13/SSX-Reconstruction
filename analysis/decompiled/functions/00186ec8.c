/* Ghidra pseudocode. PS2 address: 00186ec8. Not validated source. */

void FUN_00186ec8(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  char acStack_100 [64];
  
  FUN_0021b630(0x2c5938);
  FUN_00168750(0x295e90,0);
  iVar3 = FUN_00182670(0x285290,0);
  (**(code **)(*(int *)(iVar3 + 0x34) + 0x34))
            (iVar3 + *(short *)(*(int *)(iVar3 + 0x34) + 0x30),DAT_0027acc8 != 0);
  iVar3 = FUN_00182670(0x285290,1);
  (**(code **)(*(int *)(iVar3 + 0x34) + 0x34))
            (iVar3 + *(short *)(*(int *)(iVar3 + 0x34) + 0x30),DAT_0027accc != 0);
  iVar3 = (int)param_1;
  *(undefined4 *)(iVar3 + 0x54) = 0;
  *(undefined4 *)(iVar3 + 0x3c) = 0;
  *(undefined4 *)(iVar3 + 0x68) = 0;
  uVar4 = DAT_0027ba90;
  *(undefined4 *)(iVar3 + 0x6c) = 0x3f800000;
  *(undefined4 *)(iVar3 + 100) = 0xbf800000;
  FUN_002109d0(uVar4);
  *(undefined4 *)(iVar3 + 0x44) = 0;
  *(undefined4 *)(iVar3 + 0x40) = 0;
  FUN_00210598(0x298590,0xc,0x2b37c0);
  FUN_00210598(0x28ac20,4,0x2b3820);
  FUN_00186258(0x2c4dd8,0xe);
  FUN_00186ab8(0x2c4dd8,3);
  lVar6 = FUN_0023a448(0x2c4e08,0x51c,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0,0x51c);
  }
  FUN_00185ef0(lVar6,2);
  *(int *)(iVar3 + 0xc) = (int)lVar6;
  *(undefined **)((int)lVar6 + 8) = &DAT_002a7068;
  lVar6 = FUN_0023a448(0x2c4e10,0x448,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0,0x448);
  }
  FUN_00185ef0(lVar6,7);
  iVar12 = (int)lVar6;
  *(undefined **)(iVar12 + 8) = &DAT_002a6e80;
  *(undefined **)(iVar12 + 0x2c) = &DAT_002a6fa8;
  *(undefined **)(iVar12 + 0x38) = &DAT_002a6f68;
  *(undefined **)(iVar12 + 0x3c) = &DAT_002a6f88;
  *(undefined **)(iVar12 + 0x40) = &DAT_002a6f48;
  *(undefined **)(iVar12 + 0x44) = &DAT_002a6f28;
  *(undefined **)(iVar12 + 0x50) = &DAT_002aa2e8;
  *(undefined **)(iVar12 + 0x54) = &DAT_002aa2c8;
  *(undefined **)(iVar12 + 0x58) = &DAT_002aa2a8;
  *(undefined **)(iVar12 + 0x5c) = &DAT_002aa288;
  *(undefined **)(iVar12 + 0x60) = &DAT_002a6fc8;
  FUN_00219328(iVar12 + 0x100);
  FUN_00219328(iVar12 + 0x114);
  FUN_001e94d0(iVar12 + 0x128);
  *(int *)(iVar3 + 0x14) = iVar12;
  lVar6 = FUN_0023a448(0x2c4e18,0xc,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0,0xc);
  }
  FUN_00185ef0(lVar6,5);
  iVar12 = DAT_0027ba88;
  *(int *)(iVar3 + 0x10) = (int)lVar6;
  *(undefined **)((int)lVar6 + 8) = &DAT_002a6e30;
  if (iVar12 == 6) {
    *(undefined4 *)(iVar3 + 0x38) = 0;
  }
  else {
    lVar6 = FUN_0023a448(0x2b3840,0x5da8,0);
    if (lVar6 != 0) {
      FUN_0023bbd0(lVar6,0,0x5da8);
    }
    iVar10 = (int)lVar6;
    iVar9 = iVar10 + 0x50;
    iVar11 = 3;
    iVar12 = iVar10 + 0x3f68;
    do {
      iVar11 = iVar11 + -1;
      FUN_00199c48(iVar9);
      iVar9 = iVar9 + 0xe24;
    } while (iVar11 != -1);
    FUN_0018a0e0(iVar10 + 0x38e0);
    iVar9 = 0x3f;
    do {
      iVar9 = iVar9 + -1;
    } while (iVar9 != -1);
    iVar9 = 0x7f;
    do {
      iVar9 = iVar9 + -1;
      FUN_00197218(iVar12);
      *(undefined4 *)(iVar12 + 0x30) = 0;
      iVar12 = iVar12 + 0x3c;
    } while (iVar9 != -1);
    *(int *)(iVar3 + 0x38) = iVar10;
    FUN_00193428(lVar6);
  }
  lVar6 = FUN_0023a448(0x2b3850,0x6c0,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0,0x6c0);
  }
  *(int *)(iVar3 + 0x1c) = (int)lVar6;
  FUN_0021aa98(lVar6);
  lVar6 = FUN_0023a448(0x2b3860,0x44,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0,0x44);
  }
  uVar4 = FUN_00131f80(lVar6);
  *(undefined4 *)(iVar3 + 0x28) = uVar4;
  uVar4 = FUN_0018ae70(0x28530c,DAT_0027ba84);
  *(undefined4 *)(iVar3 + 8) = uVar4;
  lVar6 = FUN_0023a448(0x2b3870,0x554,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0,0x554);
  }
  *(int *)(iVar3 + 0x20) = (int)lVar6;
  FUN_0021be10(lVar6);
  if (DAT_0027ba84 < 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = DAT_0027ba84;
    if (10 < DAT_0027ba84) {
      iVar12 = 10;
    }
  }
  iVar12 = iVar12 * 0x7c + *(int *)(iVar3 + 0x20);
  iVar9 = *(int *)(iVar12 + 0x50);
  *(int *)(iVar3 + 0x24) = iVar12;
  *(ulong *)(iVar3 + 0x48) =
       CONCAT44((float)*(int *)(iVar12 + 0x4c) / 255.0,(float)*(int *)(iVar12 + 0x48) / 255.0);
  *(float *)(iVar3 + 0x50) = (float)iVar9 / 255.0;
  thunk_FUN_00104050(*(undefined4 *)(iVar3 + 0xc));
  iVar12 = *(int *)(*(int *)(iVar3 + 0x14) + 8);
  (**(code **)(iVar12 + 0x5c))(*(int *)(iVar3 + 0x14) + (int)*(short *)(iVar12 + 0x58));
  *(undefined4 *)(iVar3 + 0x29c) = 0;
  FUN_00188d40(param_1);
  if (*(int *)(iVar3 + 0x38) != 0) {
    FUN_001934d0(*(int *)(iVar3 + 0x38),*(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x8c));
  }
  lVar6 = FUN_0023a448(0x2b3880,0x88,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0x88);
  }
  iVar9 = FUN_001d7ce8(lVar6);
  iVar12 = DAT_002913b0;
  uVar4 = *(undefined4 *)(iVar9 + 0x78);
  *(int *)(iVar3 + 0x7c) = iVar9;
  *(undefined4 *)(iVar12 + 0x5c) = uVar4;
  *(undefined4 *)(iVar12 + 0x60) = *(undefined4 *)(iVar9 + 0x7c);
  *(undefined4 *)(iVar12 + 100) = *(undefined4 *)(iVar9 + 0x80);
  lVar6 = FUN_0023a448(0x2c4e20,0xc,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0xc);
  }
  FUN_00185ef0(lVar6,0xb);
  *(int *)(iVar3 + 0x18) = (int)lVar6;
  *(undefined **)((int)lVar6 + 8) = &DAT_002a6de0;
  lVar6 = FUN_0023a448(0x2b3890,0xb60,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0xb60);
  }
  uVar4 = FUN_001e07a0(lVar6,2);
  *(undefined4 *)(iVar3 + 0x80) = uVar4;
  if (*(int *)(*(int *)(iVar3 + 0x14) + 0x8c) < 3) {
    uVar5 = FUN_002109b0();
    *(uint *)(iVar3 + 0x70) =
         (uint)(((float)(uVar5 & 0x7fffff | 0x3f800000) - 1.0) + 0.0 <
               *(float *)(*(int *)(iVar3 + 0x24) + 0x54));
  }
  else {
    *(undefined4 *)(iVar3 + 0x70) = 0;
  }
  lVar6 = FUN_0023a448(0x2b38a8,0x4d0,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0x4d0);
  }
  uVar7 = FUN_001c1be0(lVar6,2);
  uVar5 = FUN_002109b0();
  fVar14 = 0.0;
  fVar13 = (((float)(uVar5 & 0x7fffff | 0x3f800000) - 1.0) + 0.0) * DAT_002c29b0 + DAT_002c29ac;
  *(float *)(iVar3 + 0x74) = fVar13;
  FUN_001c1ef0(fVar13,uVar7);
  uVar5 = FUN_002109b0();
  fVar13 = ((float)(uVar5 & 0x7fffff | 0x3f800000) - 1.0) + fVar14;
  uVar5 = FUN_002109b0();
  FUN_001c1fd8(fVar13 + 5.0,7.0 - (((float)(uVar5 & 0x7fffff | 0x3f800000) - 1.0) + fVar14),uVar7);
  lVar6 = FUN_0023a448(0x2c4e28,0x34,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0x34);
  }
  uVar7 = FUN_001a03b0(lVar6);
  *(int *)(iVar3 + 0x58) = (int)uVar7;
  FUN_001a0460(uVar7,0x2b38b8,0);
  lVar6 = FUN_0023a448(0x2b38d0,0x34,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0x34);
  }
  uVar7 = FUN_001a03b0(lVar6);
  *(int *)(iVar3 + 0x5c) = (int)uVar7;
  FUN_001a0460(uVar7,0x2b38e0,0);
  iVar12 = *(int *)(iVar3 + 0x5c);
  *(undefined4 *)(iVar12 + 0x1c) = 0x3f800000;
  *(undefined4 *)(iVar12 + 0x18) = 0x3fa00000;
  FUN_0018e840(0x28abe0);
  DAT_0028ac18 = *(undefined4 *)(iVar3 + 0x58);
  FUN_00183a08(0x2852f8,*(undefined4 *)(iVar3 + 8));
  FUN_00221b88(0x299cc8,*(undefined4 *)(iVar3 + 8));
  iVar9 = DAT_0029a7a8;
  iVar12 = DAT_002859d0;
  if (DAT_0029a7a8 < 0) {
    *(undefined4 *)(DAT_002859d0 + 0x24) = 0;
  }
  else {
    *(undefined4 *)(DAT_002859d0 + 0x20) = 1;
    *(int *)(iVar12 + 0x5bc) = iVar9;
    *(undefined4 *)(iVar12 + 0x24) = 1;
  }
  iVar12 = 0;
  uVar7 = FUN_0018ada0(0x28530c,*(undefined4 *)(iVar3 + 8));
  FUN_0025bbe4(acStack_100,uVar7);
  pcVar8 = acStack_100;
  while (acStack_100[0] != '\0') {
    cVar1 = acStack_100[iVar12];
    cVar2 = cVar1 + -0x20;
    if (0x19 < (int)cVar1 - 0x61U) {
      cVar2 = cVar1;
    }
    *pcVar8 = cVar2;
    iVar12 = iVar12 + 1;
    pcVar8 = pcVar8 + 1;
    acStack_100[0] = *pcVar8;
  }
  FUN_00206a00(DAT_002c56e8,acStack_100);
  if (DAT_0027ba88 == 6) {
    lVar6 = FUN_0023a448(0x2b38f8,0x2fc,0);
    if (lVar6 != 0) {
      FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0x2fc);
    }
    uVar4 = FUN_0012fbe0(lVar6,*(int *)(iVar3 + 0x14) + 0x128,6);
    *(undefined4 *)(iVar3 + 0x2c) = uVar4;
  }
  else {
    *(undefined4 *)(iVar3 + 0x2c) = 0;
  }
  lVar6 = FUN_0023a448(0x2b3908,0x48,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0x48);
  }
  uVar4 = FUN_001a29d8(lVar6,0xc);
  *(undefined4 *)(iVar3 + 0x30) = uVar4;
  lVar6 = FUN_0023a448(0x2b3918,0xc,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0xc);
  }
  FUN_00185ef0(lVar6,1);
  *(undefined **)((int)lVar6 + 8) = &DAT_002b6e00;
  lVar6 = FUN_0023a448(0x2c4e30,0x3c,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0x3c);
  }
  FUN_001bfa58(lVar6,0);
  lVar6 = FUN_0023a448(0x2b3928,0xc,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0xc);
  }
  FUN_00185ef0(lVar6,0);
  *(undefined **)((int)lVar6 + 8) = &DAT_002b6e50;
  lVar6 = FUN_0023a448(0x2b3938,0xc,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0xc);
  }
  FUN_00185ef0(lVar6,1);
  *(undefined **)((int)lVar6 + 8) = &DAT_002b6d60;
  lVar6 = FUN_0023a448(0x2b3948,8,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,8);
  }
  uVar4 = FUN_001bfca0(lVar6,0x28);
  *(undefined4 *)(iVar3 + 0x34) = uVar4;
  uVar7 = FUN_00187dc8(param_1);
  FUN_00187dd8(param_1,uVar7);
  uVar4 = FUN_00187e00(param_1);
  FUN_00187e10(uVar4,param_1);
  uVar7 = FUN_00188090(param_1);
  FUN_001880a0(param_1,uVar7);
  FUN_0018a188(0x2852f8);
  return;
}

