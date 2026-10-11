/* Ghidra pseudocode. PS2 address: 00179640. Not validated source. */

void FUN_00179640(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_14d0 [5152];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  
  FUN_0016cf98();
  iVar4 = (int)param_1;
  if (DAT_002c4a00 != 2) {
    if (DAT_002c4a00 == 0) {
      if (*(int *)(*(int *)(iVar4 + 0xb50) + 0x4ec) != 1) {
        iVar9 = *(int *)(iVar4 + 0xb6c);
LAB_001796a8:
        iVar7 = 0;
        if (iVar9 < 1) {
          return;
        }
        iVar8 = 0;
        piVar5 = (int *)(iVar4 + 0xb78);
        iVar9 = *piVar5;
        while( true ) {
          iVar7 = iVar7 + 1;
          piVar5 = piVar5 + 1;
          iVar3 = *(int *)(iVar4 + 0xb74) + iVar8;
          iVar8 = iVar8 + 0x12;
          (**(code **)(*(int *)(iVar9 + 0x24) + 0x1c))
                    (0x3f800000,iVar9 + *(short *)(*(int *)(iVar9 + 0x24) + 0x18),
                     *(int *)(iVar4 + 0xb50) + 0x400,0xffffffffffffffd1,iVar3);
          if (*(int *)(iVar4 + 0xb6c) <= iVar7) break;
          iVar9 = *piVar5;
        }
        return;
      }
      if (*(int *)(iVar4 + 0xb58) == 0) {
        iVar9 = *(int *)(iVar4 + 0xb6c);
        goto LAB_001796a8;
      }
    }
    if ((DAT_002c4a00 == 1) &&
       ((*(int *)(*(int *)(iVar4 + 0xb50) + 0x4ec) != 1 || (*(int *)(iVar4 + 0xb58) == 1)))) {
      iVar8 = 0;
      piVar5 = (int *)(iVar4 + 0xb78);
      iVar7 = 2;
      iVar9 = *piVar5;
      while( true ) {
        piVar5 = piVar5 + 1;
        iVar7 = iVar7 + -1;
        iVar3 = *(int *)(iVar4 + 0xb74) + iVar8;
        iVar8 = iVar8 + 0x12;
        (**(code **)(*(int *)(iVar9 + 0x24) + 0x1c))
                  (0x3f800000,iVar9 + *(short *)(*(int *)(iVar9 + 0x24) + 0x18),
                   *(int *)(iVar4 + 0xb50) + 0x400,0xffffffffffffffd1,iVar3);
        if (iVar7 < 0) break;
        iVar9 = *piVar5;
      }
      return;
    }
  }
  puVar6 = &DAT_00283860;
  iVar9 = 0;
  piVar5 = &DAT_00283864;
  do {
    iVar7 = FUN_0016f348(param_1,0);
    iVar9 = iVar9 + 1;
    if (iVar7 == *piVar5) {
      lVar1 = FUN_00154610(0x27a598,*puVar6);
      if (lVar1 != 0) {
        return;
      }
      FUN_0019aa08(auStack_14d0);
      FUN_0019ae30(auStack_14d0);
      FUN_0019af18(auStack_14d0,*(int *)(iVar4 + 0xb50) + 0x400);
      FUN_0019af40(0xc2be0000,0xc2480000,0x42b40000,0x42980000,auStack_14d0);
      FUN_0019b0b8(0x3fa00000,0x3fa00000,auStack_14d0);
      uStack_b0 = 1;
      uStack_ac = 0;
      uVar2 = FUN_001707c8(param_1,0x1e2);
      FUN_0019af58(auStack_14d0,uVar2);
      FUN_0019b0e0(auStack_14d0);
      FUN_0019ac28(auStack_14d0);
      FUN_0019aa30(auStack_14d0,2);
      return;
    }
    puVar6 = puVar6 + 2;
    piVar5 = piVar5 + 2;
  } while (iVar9 < 8);
  return;
}

