/* Ghidra pseudocode. PS2 address: 00111c18. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00111c84) */

void FUN_00111c18(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  if (*(int *)(param_1 + 0x170) == 0) {
    fVar5 = ABS(*(float *)(param_1 + 0x1a4));
    if (((DAT_002c13d4 < fVar5) && (0.0 < *(float *)(param_1 + 0x1a4) * *(float *)(param_1 + 0x1a8))
        ) && (iVar2 = FUN_002109e0(), iVar2 % 0x60 == 0)) {
      fVar4 = *(float *)(param_1 + 0x198);
      iVar2 = *(int *)(param_1 + 0x6cf4);
      bVar1 = fVar4 < DAT_002c13d8;
      *(undefined4 *)(param_1 + 0x170) = 1;
      *(undefined4 *)(iVar2 + 0x14) = 0x1fe0;
      if (bVar1) {
        uVar3 = 0x3d;
        if (DAT_002c13dc < fVar5) {
          uVar3 = 0x3e;
        }
        FUN_0014cd18(iVar2,uVar3,0,5);
        iVar2 = *(int *)(param_1 + 0x6cf4);
      }
      else {
        if (DAT_002c13e0 < fVar4) {
          FUN_0014cd18(iVar2,0x3c,0,5);
        }
        iVar2 = *(int *)(param_1 + 0x6cf4);
      }
      *(undefined4 *)(iVar2 + 0x14) = 0xffffffff;
    }
  }
  return;
}

