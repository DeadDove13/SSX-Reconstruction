/* Ghidra pseudocode. PS2 address: 001af5f0. Not validated source. */

void FUN_001af5f0(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  FUN_001ab478(0x42fa0000,param_1 + 0x180);
  DAT_0028b248 = 0x42dc0000;
  DAT_0028b160 = 0;
  DAT_0028b16c = 2;
  iVar7 = *(int *)(param_1 + 0x1b4);
  DAT_0028b164 = 1;
  DAT_0028b168 = 1;
  DAT_0028b258 = 0x44070000;
  DAT_0028b24c = 0x43340000;
  DAT_0028b250 = 0x43b40000;
  DAT_0028b254 = 0x43e10000;
  uVar4 = FUN_00234e80(DAT_002852fc,0x72);
  uVar6 = DAT_002852fc;
  iVar7 = iVar7 * 8 + param_1;
  *(undefined4 *)(iVar7 + 0x18c) = 2;
  *(undefined4 *)(iVar7 + 400) = uVar4;
  iVar7 = *(int *)(param_1 + 0x1b4) + 1;
  *(int *)(param_1 + 0x1b4) = iVar7;
  uVar4 = FUN_00234e80(uVar6,0x71);
  uVar6 = DAT_002852fc;
  iVar7 = iVar7 * 8 + param_1;
  *(undefined4 *)(iVar7 + 0x18c) = 1;
  *(undefined4 *)(iVar7 + 400) = uVar4;
  iVar7 = *(int *)(param_1 + 0x1b4) + 1;
  *(int *)(param_1 + 0x1b4) = iVar7;
  uVar4 = FUN_00234e80(uVar6,0x73);
  uVar6 = DAT_002852fc;
  iVar7 = iVar7 * 8 + param_1;
  *(undefined4 *)(iVar7 + 0x18c) = 3;
  *(undefined4 *)(iVar7 + 400) = uVar4;
  *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + 1;
  uVar5 = FUN_00234e80(uVar6,0x10);
  FUN_0019a7f8(0x28f670,uVar5);
  uVar5 = FUN_00234e80(DAT_002852fc,0x11);
  FUN_0019a7f8(0x28f270,uVar5);
  uVar5 = FUN_00234e80(DAT_002852fc,0x12);
  FUN_0019a7f8(0x28f2f0,uVar5);
  uVar5 = FUN_00234e80(DAT_002852fc,0x17);
  FUN_0019a7f8(0x28f370,uVar5);
  uVar5 = FUN_00234e80(DAT_002852fc,0x18);
  FUN_0019a7f8(0x28f3f0,uVar5);
  *(undefined4 *)(param_1 + 0x188) = 4;
  *(int *)(param_1 + 0x184) = DAT_0027b810;
  iVar7 = 0;
  if (0 < DAT_0027b810) {
    do {
      iVar8 = iVar7 * 0x80;
      iVar9 = iVar7 + 1;
      iVar1 = (&DAT_0027bc0c)[iVar7];
      iVar3 = iVar1 * 0x74;
      FUN_0019a8f0(&DAT_0028b270 + iVar8,0x2c5190,iVar9);
      iVar1 = iVar1 * 0x68;
      FUN_0019a830(iVar8 + 0x28ba70,&DAT_0027b818 + iVar1);
      FUN_0019a8f0(&DAT_0028c270 + iVar8,0x2c5190,*(undefined4 *)(&DAT_0027bc80 + iVar3));
      FUN_0019a8f0(iVar8 + 0x28ca70,0x2c5190,*(undefined4 *)(&DAT_0027bc84 + iVar3));
      uVar6 = 0xffffffff;
      if ((&DAT_0027b868)[iVar1] != -1) {
        uVar6 = 0;
      }
      bVar2 = iVar9 < DAT_0027b810;
      (&DAT_0028b1c0)[iVar7] = uVar6;
      iVar7 = iVar9;
    } while (bVar2);
  }
  return;
}

