/* Ghidra pseudocode. PS2 address: 00178458. Not validated source. */

void FUN_00178458(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  iVar6 = (int)param_1;
  if (DAT_002c4a00 == 1) {
    uVar1 = FUN_001707c8(param_1,0x1db);
    puVar4 = *(undefined4 **)(iVar6 + 0xb78);
    puVar4[1] = uVar1;
    *puVar4 = 0;
    uVar1 = FUN_001707c8(param_1,0x1dc);
    puVar4 = *(undefined4 **)(iVar6 + 0xb7c);
    puVar4[1] = uVar1;
    *puVar4 = 0;
    uVar1 = FUN_001707c8(param_1,0x1dd);
    puVar4 = *(undefined4 **)(iVar6 + 0xb80);
    puVar4[1] = uVar1;
    *puVar4 = 0;
    FUN_0016eb08(param_1,0x130);
    FUN_0016eae0(param_1,0x132);
    FUN_0016eb08(param_1,0x19a);
    FUN_0016eb08(param_1,0x198);
    return;
  }
  if (DAT_002c4a00 < 2) {
    if (DAT_002c4a00 == 0) {
      iVar5 = 0;
      iVar7 = iVar6 + 0xb78;
      if (*(int *)(iVar6 + 0xb6c) < 1) {
LAB_0017856c:
        FUN_0016eae0(param_1,0x130);
        FUN_0016eb08(param_1,0x132);
        FUN_0016eb08(param_1,0x19a);
        FUN_0016eb08(param_1,0x198);
        return;
      }
      iVar2 = *(int *)(iVar6 + 0xb70);
      do {
        switch(*(undefined4 *)(iVar5 * 4 + iVar2)) {
        case 1:
          puVar4 = (undefined4 *)(iVar7 + iVar5 * 4);
          uVar3 = 0x117;
          break;
        case 2:
        case 4:
          puVar4 = (undefined4 *)(iVar7 + iVar5 * 4);
          uVar3 = 0x114;
          break;
        case 3:
        case 5:
          puVar4 = (undefined4 *)(iVar7 + iVar5 * 4);
          uVar3 = 0x116;
          break;
        case 6:
          puVar4 = (undefined4 *)(iVar7 + iVar5 * 4);
          uVar3 = 0x115;
          break;
        default:
          goto switchD_001784f0_default;
        }
        uVar1 = FUN_001707c8(param_1,uVar3);
        puVar4 = (undefined4 *)*puVar4;
        puVar4[1] = uVar1;
        *puVar4 = 0;
switchD_001784f0_default:
        iVar5 = iVar5 + 1;
        if (*(int *)(iVar6 + 0xb6c) <= iVar5) goto LAB_0017856c;
        iVar2 = *(int *)(iVar6 + 0xb70);
      } while( true );
    }
  }
  else if (DAT_002c4a00 == 2) {
    iVar5 = *(int *)(iVar6 + 0xb6c);
    piVar8 = (int *)(iVar6 + 0xb78);
    if (0 < iVar5) {
      do {
        puVar4 = (undefined4 *)*piVar8;
        iVar5 = iVar5 + -1;
        piVar8 = piVar8 + 1;
        puVar4[1] = 0;
        *puVar4 = s_Unknown_002c4a18;
      } while (iVar5 != 0);
    }
    FUN_0016eb08(param_1,0x130);
    FUN_0016eb08(param_1,0x132);
    FUN_0016eae0(param_1,0x19a);
    FUN_0016eae0(param_1,0x198);
    return;
  }
  return;
}

