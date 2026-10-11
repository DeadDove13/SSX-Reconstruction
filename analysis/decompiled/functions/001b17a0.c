/* Ghidra pseudocode. PS2 address: 001b17a0. Not validated source. */

void FUN_001b17a0(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  FUN_001ab4f8();
  FUN_001ab478(0x42fa0000,param_1);
  DAT_0028b258 = DAT_002c33a4;
  uVar1 = DAT_002852fc;
  DAT_0028b16c = 2;
  DAT_0028b248 = 0x42dc0000;
  DAT_0028b160 = 0;
  iVar4 = (int)param_1;
  *(undefined4 *)(iVar4 + 0x38) = 0;
  *(undefined4 *)(iVar4 + 0x34) = 0;
  DAT_0028b24c = 0x430c0000;
  DAT_0028b250 = 0x43a00000;
  DAT_0028b254 = 0x43dc0000;
  DAT_0028b168 = 1;
  DAT_0028b164 = 0;
  uVar1 = FUN_00234e80(uVar1,0x1c8);
  *(undefined4 *)(iVar4 + 0x10) = uVar1;
  *(undefined4 *)(iVar4 + 0xc) = 0;
  *(int *)(iVar4 + 0x34) = *(int *)(iVar4 + 0x34) + 1;
  puVar5 = &DAT_0028b1fc;
  iVar2 = 0xf;
  do {
    *puVar5 = 0xffffffff;
    iVar2 = iVar2 + -1;
    puVar5 = puVar5 + -1;
  } while (-1 < iVar2);
  iVar2 = 7;
  puVar5 = &DAT_0028b1bc;
  do {
    *puVar5 = 0xffffffff;
    iVar2 = iVar2 + -1;
    puVar5 = puVar5 + -1;
  } while (-1 < iVar2);
  FUN_0019a830(0x28f270,0x2c50d0);
  iVar2 = 0;
  uVar3 = FUN_00234e80(DAT_002852fc,0x12);
  FUN_0019a7f8(0x28f2f0,uVar3);
  uVar3 = FUN_00234e80(DAT_002852fc,0x44);
  FUN_0019a7f8(0x28f370,uVar3);
  uVar1 = DAT_0027ba88;
  *(undefined4 *)(iVar4 + 4) = 5;
  *(undefined4 *)(iVar4 + 8) = 4;
  switch(uVar1) {
  case 2:
  case 4:
  case 8:
    FUN_0019a8a8(0x28f670,DAT_002c5210,5);
    uVar3 = 0;
    break;
  case 3:
  case 5:
    FUN_0019a8a8(0x28f670,DAT_002c5214,5);
    uVar3 = 1;
    break;
  default:
    goto switchD_001b1974_caseD_6;
  }
  iVar2 = FUN_00153f58(0x27a598,uVar3,DAT_0027ba84);
switchD_001b1974_caseD_6:
  if (*(int *)(iVar2 + 0x7c) == 0) {
    uVar3 = FUN_00234e80(DAT_002852fc,0x15);
    FUN_0019a7f8(0x28f3f0,uVar3);
  }
  else {
    uVar3 = FUN_00234e80(DAT_002852fc,0x14);
    FUN_0019a7f8(0x28f3f0,uVar3);
  }
  iVar4 = 7;
  puVar5 = &DAT_0028b1bc;
  do {
    *puVar5 = 0xffffffff;
    iVar4 = iVar4 + -1;
    puVar5 = puVar5 + -1;
  } while (-1 < iVar4);
  iVar4 = 0;
  do {
    uVar9 = iVar4 * 0x18 >> 0x1f;
    iVar7 = iVar4 * 0x80;
    iVar6 = iVar4 + 1;
    iVar8 = iVar4 * 0x18 + iVar2;
    (&DAT_0028b1c0)[iVar4] = 0xffffffff;
    FUN_0019a8f0(&DAT_0028b270 + iVar7,0x2c5190);
    FUN_0019a830(iVar7 + 0x28ba70,iVar8);
    FUN_0019a830(&DAT_0028c270 + iVar7,
                 *(undefined4 *)((uVar9 | 0x27c380) + *(int *)(iVar8 + 0x10) * 0x3c + 4));
    if (*(int *)(iVar2 + 0x7c) == 0) {
      FUN_0019a8f0(iVar7 + 0x28ca70,0x2c5190,*(undefined4 *)(iVar8 + 0x14));
    }
    else {
      FUN_001a2650(*(undefined4 *)(iVar8 + 0x14),iVar7 + 0x28ca70);
    }
    iVar4 = iVar6;
  } while (iVar6 < 5);
  return;
}

