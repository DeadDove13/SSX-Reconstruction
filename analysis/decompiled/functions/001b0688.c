/* Ghidra pseudocode. PS2 address: 001b0688. Not validated source. */

void FUN_001b0688(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  iVar5 = *(int *)(iVar7 + 0x184);
  if (0 < iVar5) {
    puVar2 = &DAT_0028b1c0;
    do {
      *puVar2 = 0xffffffff;
      iVar5 = iVar5 + -1;
      puVar2 = puVar2 + 1;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(iVar7 + 0x1b4);
  puVar2 = &DAT_0028b1bc;
  iVar6 = 7;
  do {
    *puVar2 = 0xffffffff;
    iVar6 = iVar6 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar6);
  uVar3 = FUN_00234e80(DAT_002852fc,0x72);
  uVar1 = DAT_002852fc;
  iVar5 = iVar5 * 8 + iVar7;
  *(undefined4 *)(iVar5 + 0x18c) = 2;
  *(undefined4 *)(iVar5 + 400) = uVar3;
  iVar5 = *(int *)(iVar7 + 0x1b4) + 1;
  *(int *)(iVar7 + 0x1b4) = iVar5;
  uVar3 = FUN_00234e80(uVar1,0x71);
  uVar1 = DAT_002852fc;
  iVar5 = iVar5 * 8 + iVar7;
  *(undefined4 *)(iVar5 + 0x18c) = 1;
  *(undefined4 *)(iVar5 + 400) = uVar3;
  iVar5 = *(int *)(iVar7 + 0x1b4) + 1;
  *(int *)(iVar7 + 0x1b4) = iVar5;
  uVar3 = FUN_00234e80(uVar1,0x73);
  uVar1 = DAT_002852fc;
  iVar5 = iVar5 * 8 + iVar7;
  *(undefined4 *)(iVar5 + 0x18c) = 3;
  *(undefined4 *)(iVar5 + 400) = uVar3;
  *(int *)(iVar7 + 0x1b4) = *(int *)(iVar7 + 0x1b4) + 1;
  uVar4 = FUN_00234e80(uVar1,0xd);
  FUN_0019a7f8(0x28f670,uVar4);
  FUN_001ab478(0x42ae0000,iVar7 + 0x180);
  if (DAT_0027b810 == 1) {
    *(undefined4 *)(iVar7 + 0x188) = 3;
    DAT_0028b248 = 180.0;
    FUN_0019a830(0x28b270,0x27b818);
  }
  else {
    DAT_0028b248 = 40.0;
    *(undefined4 *)(iVar7 + 0x188) = 7;
    FUN_0019a830(0x28b270,0x27b818);
    FUN_0019a830(0x28d270,0x27b880);
  }
  puVar2 = &DAT_0028af60;
  DAT_0028af64 = 1;
  DAT_0028afdc = 5;
  *(undefined4 *)(iVar7 + 0x184) = 2;
  iVar5 = 0;
  if (0 < DAT_0027b810) {
    do {
      iVar6 = FUN_001b0298(param_1,puVar2,2);
      if (*(int *)(iVar7 + 0x184) < iVar6) {
        *(int *)(iVar7 + 0x184) = iVar6;
      }
      iVar5 = iVar5 + 1;
      puVar2 = puVar2 + 0x1e;
    } while (iVar5 < DAT_0027b810);
  }
  DAT_0028b1c0 = 0;
  DAT_0028b250 = DAT_0028b248 + 0.0 + 160.0;
  DAT_0028b178 = 2;
  DAT_0028b160 = 0;
  DAT_0028b254 = DAT_0028b250 + 90.0;
  DAT_0028b258 = DAT_0028b254 + 40.0;
  DAT_0028b25c = DAT_0028b258 + 0.0;
  DAT_0028b260 = DAT_0028b25c + 160.0;
  DAT_0028b198 = 1;
  DAT_0028b24c = DAT_0028b248 + 0.0;
  DAT_0028b164 = 0;
  DAT_0028b168 = 2;
  DAT_0028b16c = 1;
  DAT_0028b170 = 0;
  DAT_0028b174 = 0;
  DAT_0028b184 = 1;
  DAT_0028b188 = 1;
  DAT_0028b194 = 1;
  DAT_0028b264 = DAT_0028b260 + 90.0;
  return;
}

