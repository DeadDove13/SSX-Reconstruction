/* Ghidra pseudocode. PS2 address: 0014cb38. Not validated source. */

void FUN_0014cb38(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  undefined4 auStack_a0 [4];
  
  lVar7 = FUN_001eac78(param_1 + 0x20);
  if (lVar7 != 0) {
    FUN_001eac78(param_1 + 0x20);
    iVar8 = *(int *)(param_1 + 0x54);
    FUN_001ee548(*(int *)(param_1 + 0x1c) + 0x6cc);
    if (iVar8 == param_1 + 500) {
      iVar8 = *(int *)(param_1 + 0x1c);
    }
    else {
      iVar12 = *(int *)(iVar8 + 0x224);
      while( true ) {
        iVar1 = *(int *)(iVar8 + 0x34);
        iVar2 = *(int *)(iVar8 + 0x1e4);
        uVar13 = *(uint *)(*(int *)(iVar12 + 8) + 0xc) >> 0xf & 0xf;
        if ((0.0 < *(float *)(iVar8 + 8)) && (iVar12 = 0, uVar13 != 0)) {
          uStack_ac = *(undefined4 *)(iVar8 + 0x30);
          while( true ) {
            *(undefined4 *)(iVar8 + 0x2c) = 0;
            uStack_a8 = *(undefined4 *)(iVar8 + 0x34);
            iStack_a4 = 0;
            iVar11 = iVar12 * 4;
            iVar3 = *(int *)(param_1 + 0x1c);
            iVar4 = *(int *)(iVar3 + (*(byte *)(*(int *)(*(int *)(*(int *)(iVar8 + 0x224) + iVar11 +
                                                                 0xc) + 8) + 0xf) & 0x1f) * 4 +
                            0x6c98);
            iVar12 = iVar12 + 1;
            iStack_b0 = iVar8;
            if (-1 < iVar4) {
              if (0 < iVar2) {
                iStack_a4 = 0;
                piVar10 = (int *)(iVar8 + 0x224);
                iVar9 = iVar2;
                do {
                  iVar5 = *piVar10;
                  piVar10 = piVar10 + 1;
                  puVar6 = auStack_a0 + iStack_a4;
                  iStack_a4 = iStack_a4 + 1;
                  iVar9 = iVar9 + -1;
                  *puVar6 = *(undefined4 *)(iVar5 + iVar11 + 0xc);
                } while (iVar9 != 0);
              }
              FUN_0014c1d0(&iStack_b0);
              FUN_001ea840(iVar3 + iVar4 * 0x250 + 0x44fc,iVar8);
              *(undefined4 *)(iStack_b0 + 0x30) = uStack_ac;
              *(undefined4 *)(iStack_b0 + 0x34) = uStack_a8;
            }
            if ((int)uVar13 <= iVar12) break;
            uStack_ac = *(undefined4 *)(iVar8 + 0x30);
          }
        }
        if (iVar1 == param_1 + 500) break;
        iVar12 = *(int *)(iVar1 + 0x224);
        iVar8 = iVar1;
      }
      iVar8 = *(int *)(param_1 + 0x1c);
    }
    FUN_001ee588(iVar8 + 0x6cc);
  }
  return;
}

