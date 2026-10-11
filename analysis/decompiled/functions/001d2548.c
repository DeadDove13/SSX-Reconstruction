/* Ghidra pseudocode. PS2 address: 001d2548. Not validated source. */

int FUN_001d2548(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  iVar4 = -1;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x80)) {
    piVar3 = (int *)(*(int *)(param_1 + 0x84) + 0xc);
    fVar5 = 0.0;
    do {
      if (*piVar3 < 0) {
        return iVar2;
      }
      fVar6 = fVar5;
      iVar1 = iVar4;
      if (((iVar2 != param_2) &&
          (fVar6 = *(float *)(*piVar3 * 0x58 + *(int *)(param_1 + 0x28) + 0x54), iVar1 = iVar2,
          -1 < iVar4)) && (fVar5 <= fVar6)) {
        fVar6 = fVar5;
        iVar1 = iVar4;
      }
      iVar4 = iVar1;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 4;
      fVar5 = fVar6;
    } while (iVar2 < *(int *)(param_1 + 0x80));
  }
  iVar2 = iVar4 * 0x10 + *(int *)(param_1 + 0x84);
  *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x58 + *(int *)(param_1 + 0x28) + 0x30) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0xc) = 0xffffffff;
  return iVar4;
}

