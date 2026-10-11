/* Ghidra pseudocode. PS2 address: 001aed00. Not validated source. */

void FUN_001aed00(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar3 = (int)param_1;
  puVar5 = (undefined4 *)(iVar3 + 0x288);
  iVar4 = 3;
  FUN_001ab4f8(iVar3 + 0x180);
  FUN_0023bbd0(iVar3 + 0x1d8,0,0xa0);
  *(undefined4 *)(iVar3 + 0x2a0) = 0;
  puVar6 = &DAT_0028af64;
  puVar1 = &DAT_0028af68;
  do {
    FUN_0023bbd0(puVar1,0,0x6e);
    iVar4 = iVar4 + -1;
    *puVar5 = 0xffffffff;
    *puVar6 = 0;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 0x1e;
    puVar1 = puVar1 + 0x78;
  } while (-1 < iVar4);
  *(undefined4 *)(iVar3 + 0x1b8) = 0;
  *(undefined4 *)(iVar3 + 0x1b4) = 0;
  iVar4 = 0xf;
  *(undefined4 *)(iVar3 + 0x1c8) = 0;
  uVar2 = FUN_00152ec8(0x27a598);
  *(undefined4 *)(iVar3 + 0x1c4) = uVar2;
  *(undefined4 *)(iVar3 + 0x1d4) = 3;
  *(undefined4 *)(iVar3 + 0x1cc) = 0x43600000;
  puVar5 = &DAT_0028b1fc;
  *(undefined4 *)(iVar3 + 0x1d0) = 0x43a00000;
  *(undefined4 *)(iVar3 + 0x280) = 0;
  *(undefined4 *)(iVar3 + 0x27c) = 0;
  *(undefined4 *)(iVar3 + 0x284) = 0x43a00000;
  do {
    *puVar5 = 0xffffffff;
    iVar4 = iVar4 + -1;
    puVar5 = puVar5 + -1;
  } while (-1 < iVar4);
  iVar4 = 7;
  puVar5 = &DAT_0028b1bc;
  do {
    *puVar5 = 0xffffffff;
    iVar4 = iVar4 + -1;
    puVar5 = puVar5 + -1;
  } while (-1 < iVar4);
  switch(DAT_0027ba88) {
  case 0:
    FUN_001af5f0(param_1);
    uVar2 = *(undefined4 *)(iVar3 + 0x1b4);
    break;
  case 1:
    FUN_001b0688(param_1);
    uVar2 = *(undefined4 *)(iVar3 + 0x1b4);
    break;
  case 2:
  case 4:
  case 8:
    FUN_001aeee8(param_1);
    uVar2 = *(undefined4 *)(iVar3 + 0x1b4);
    break;
  case 3:
  case 5:
    FUN_001afc30(param_1);
    uVar2 = *(undefined4 *)(iVar3 + 0x1b4);
    break;
  case 6:
    FUN_001b09b8(param_1);
  default:
    uVar2 = *(undefined4 *)(iVar3 + 0x1b4);
  }
  *(undefined4 *)(iVar3 + 0x178) = 0;
  *(undefined4 *)(iVar3 + 0x1c8) = uVar2;
  FUN_001f2190(DAT_002c56e8);
  return;
}

