/* Ghidra pseudocode. PS2 address: 00138c18. Not validated source. */

void FUN_00138c18(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x170) == 0) {
    fVar4 = *(float *)(param_1 + 8) + DAT_002c1d00;
    *(float *)(param_1 + 8) = fVar4;
    if (1.0 <= fVar4) {
      for (iVar3 = 0; iVar3 < *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c); iVar3 = iVar3 + 1) {
        iVar1 = *(int *)(param_1 + 0x10);
        if (iVar3 != *(int *)(iVar1 + 0x390)) {
          iVar2 = iVar1 + iVar3 * 0x10;
          fVar6 = *(float *)(iVar2 + 0x30) - *(float *)(iVar1 + 0x140);
          fVar4 = fVar6 * DAT_002c1d04 + 0.5;
          fVar5 = (float)(int)fVar4;
          if (fVar4 < fVar5) {
            fVar5 = fVar5 - 1.0;
          }
          fVar6 = fVar6 - fVar5 * DAT_002c1d08;
          if ((*(float *)(iVar2 + 0x2c) < DAT_002c1d0c) && (DAT_002c1d10 < ABS(fVar6))) {
            iVar3 = *(int *)(iVar1 + 0x6cf4);
            *(undefined4 *)(iVar1 + 0x170) = 5;
            *(undefined4 *)(iVar3 + 0x14) = 0x238;
            if ((uint)(fVar6 < 0.0) == *(uint *)(iVar1 + 0x144)) {
              FUN_0014cd18(iVar3,0x43,0,5);
              iVar3 = *(int *)(param_1 + 0x10);
            }
            else {
              FUN_0014cd18(iVar3,0x42,0,5);
              iVar3 = *(int *)(param_1 + 0x10);
            }
            *(undefined4 *)(*(int *)(iVar3 + 0x6cf4) + 0x14) = 0xffffffff;
            return;
          }
        }
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

