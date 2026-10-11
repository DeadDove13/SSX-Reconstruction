/* Ghidra pseudocode. PS2 address: 0019ac28. Not validated source. */

void FUN_0019ac28(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  lVar2 = FUN_0019b358();
  if (lVar2 == 0) {
    FUN_0019aa58(param_1);
    return;
  }
  iVar3 = (int)param_1;
  uVar5 = *(undefined4 *)(iVar3 + 0x1408);
  uVar6 = *(undefined4 *)(iVar3 + 0x1404);
  iVar1 = FUN_0019b358();
  fVar4 = *(float *)(iVar3 + 0x1414) * (float)(iVar1 + -1) +
          (float)*(int *)(*(int *)(iVar3 + 0x1400) + 0xc);
  if (fVar4 < *(float *)(iVar3 + 0x1410)) {
    *(float *)(iVar3 + 0x1408) =
         *(float *)(iVar3 + 0x1408) + (*(float *)(iVar3 + 0x1410) - fVar4) * 0.5;
  }
  iVar1 = FUN_0019b388(param_1);
  if (((*(int *)(iVar3 + 0x1420) == 0) && (*(int *)(iVar3 + 0x1424) == 0)) &&
     ((float)iVar1 < *(float *)(iVar3 + 0x140c))) {
    *(float *)(iVar3 + 0x1404) =
         *(float *)(iVar3 + 0x1404) + (*(float *)(iVar3 + 0x140c) - (float)iVar1) * 0.5;
  }
  FUN_0019aa58(param_1);
  *(undefined4 *)(iVar3 + 0x1404) = uVar6;
  *(undefined4 *)(iVar3 + 0x1408) = uVar5;
  return;
}

