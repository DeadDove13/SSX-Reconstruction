/* Ghidra pseudocode. PS2 address: 001819e0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00181a1c) */
/* WARNING: Removing unreachable block (ram,0x00181a2c) */
/* WARNING: Removing unreachable block (ram,0x00181a80) */

void FUN_001819e0(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined1 auStack_160 [80];
  undefined1 auStack_110 [80];
  undefined8 auStack_c0 [10];
  
  ppuVar3 = (undefined **)&DAT_002b2ed0;
  puVar7 = (undefined4 *)param_1;
  puVar2 = auStack_c0;
  do {
    uVar4 = *(undefined8 *)(ppuVar3 + 2);
    uVar5 = *(undefined8 *)(ppuVar3 + 4);
    uVar6 = *(undefined8 *)(ppuVar3 + 6);
    *puVar2 = *(undefined8 *)ppuVar3;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    ppuVar3 = ppuVar3 + 8;
    puVar2 = puVar2 + 4;
  } while (ppuVar3 != &PTR_DAT_002b2f10);
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  *(undefined **)puVar2 = PTR_DAT_002b2f10;
  lVar1 = FUN_00181c60(param_1,0x2c4d00);
  while ((lVar1 != 0 && (lVar1 = FUN_001820a0(param_1), lVar1 == 0))) {
    lVar1 = FUN_00182030(param_1,0x2b2f18);
    if (lVar1 == 0) break;
    lVar1 = FUN_0025b6a8(*puVar7,auStack_c0,auStack_160,auStack_110);
    if (lVar1 == 2) {
      FUN_00181e38(param_1,auStack_160,auStack_110);
    }
    lVar1 = FUN_00182100(param_1);
  }
  lVar1 = FUN_00181c60(param_1,0x2b2f18);
  while ((lVar1 != 0 && (lVar1 = FUN_001820a0(param_1), lVar1 == 0))) {
    lVar1 = FUN_00182030(param_1,0x2b2f28);
    if (lVar1 == 0) break;
    lVar1 = FUN_0025b6a8(*puVar7,auStack_c0,auStack_160,auStack_110);
    if (lVar1 == 2) {
      FUN_00181ee0(param_1,auStack_160,auStack_110);
    }
    lVar1 = FUN_00182100(param_1);
  }
  lVar1 = FUN_00181c60(param_1,0x2b2f28);
  while ((lVar1 != 0 && (lVar1 = FUN_001820a0(param_1), lVar1 == 0))) {
    lVar1 = FUN_00182030(param_1);
    if (lVar1 == 0) {
      return;
    }
    lVar1 = FUN_0025b6a8(*puVar7,auStack_c0,auStack_160,auStack_110);
    if (lVar1 == 2) {
      FUN_00181f58(param_1,auStack_160,auStack_110);
    }
    lVar1 = FUN_00182100(param_1);
  }
  return;
}

