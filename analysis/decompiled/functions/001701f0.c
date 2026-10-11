/* Ghidra pseudocode. PS2 address: 001701f0. Not validated source. */

void FUN_001701f0(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  
  uVar3 = 0;
  iVar1 = FUN_00182670(0x285290,0);
  uVar4 = 0;
  iVar7 = (int)param_1;
  if ((*(int *)(iVar1 + 4) == 0) ||
     ((*(int *)(*(int *)(iVar7 + 0xb3c) + 0x470) != 0 &&
      (iVar1 = FUN_00182670(0x285290,1), *(int *)(iVar1 + 4) == 0)))) goto LAB_00170364;
  if (param_2 == -1) {
    iVar1 = 0;
    if (DAT_002852a4 < 1) goto LAB_001702d8;
    do {
      iVar2 = FUN_00182670(0x285290,iVar1);
      iVar1 = iVar1 + 1;
      uVar4 = uVar4 | *(uint *)(iVar2 + 0xc);
      uVar3 = uVar3 | *(uint *)(iVar2 + 0xc) & ~*(uint *)(iVar2 + 8);
    } while (iVar1 < DAT_002852a4);
    iVar1 = *(int *)(iVar7 + 0x544);
  }
  else {
    iVar1 = FUN_00182670(0x285290,param_2);
    uVar4 = *(uint *)(iVar1 + 0xc);
    uVar3 = uVar4 & ~*(uint *)(iVar1 + 8);
LAB_001702d8:
    iVar1 = *(int *)(iVar7 + 0x544);
  }
  if (iVar1 != 0) {
    iVar1 = ((int)param_2 + 1) * 4;
    puVar6 = (uint *)(iVar7 + 0x520 + iVar1);
    if (uVar4 == *puVar6) {
      piVar5 = (int *)(iVar7 + 0x52c + iVar1);
      if (7 < DAT_002859d4 - *piVar5) {
        *piVar5 = DAT_002859d4;
        uVar3 = uVar3 | uVar4;
      }
    }
    else {
      *puVar6 = uVar4 & 0x1e000f;
      *(int *)(iVar7 + iVar1 + 0x52c) = DAT_002859d4 + 0x17;
    }
  }
  uVar3 = FUN_00170168(param_1,uVar3,uVar4);
LAB_00170364:
  *(uint *)(iVar7 + ((int)param_2 + 1) * 4 + 0x538) = uVar3;
  uVar4 = *(uint *)(iVar7 + 0x538) & 0x130;
  *(uint *)(iVar7 + 0x53c) = *(uint *)(iVar7 + 0x53c) | uVar4;
  *(uint *)(iVar7 + 0x540) = *(uint *)(iVar7 + 0x540) | uVar4;
  return;
}

