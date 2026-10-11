/* Ghidra pseudocode. PS2 address: 0010afc0. Not validated source. */

int FUN_0010afc0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar2 = *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = FUN_00189b78(DAT_002859e4,iVar4);
      iVar1 = *(int *)((int)param_1 + 0x9c);
      if (((iVar1 == 0) && (*(int *)((int)uVar3 + 0x9c) == 1)) ||
         ((0 < iVar1 && (*(int *)((int)uVar3 + 0x9c) == 0)))) {
        fVar5 = (float)FUN_0010af78(param_1);
        fVar6 = (float)FUN_001055f8(uVar3);
        fVar6 = fVar5 - fVar6;
        fVar7 = (float)FUN_001055f8(param_1);
        fVar5 = fVar5 - fVar7;
        if (fVar5 <= 0.0) {
          if (fVar6 <= 0.0) {
            return 0;
          }
          iVar2 = FUN_0010af80(uVar3);
          fVar7 = (float)iVar2 / fVar6;
        }
        else {
          iVar2 = FUN_0010af80(param_1);
          fVar7 = (float)iVar2 / fVar5;
        }
        iVar2 = FUN_0010af80(param_1);
        iVar4 = FUN_0010af80(uVar3);
        return ((int)(fVar7 * (fVar6 - fVar5)) + iVar2) - iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return 0;
}

