/* Ghidra pseudocode. PS2 address: 001d2428. Not validated source. */

int FUN_001d2428(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  iVar4 = *(int *)(param_1 + 0x58);
  fVar9 = 0.0;
  iVar7 = -1;
  if (iVar4 < *(int *)(param_1 + 0x44)) {
    iVar5 = iVar4 * 0x18 + *(int *)(param_1 + 0x4c);
    iVar6 = iVar5;
    do {
      if (((*(int *)(iVar5 + 4) == param_2) ||
          ((param_2 < *(int *)(iVar5 + 4) && (1 < *(int *)(iVar5 + 8))))) &&
         (iVar3 = *(int *)(iVar5 + 0x14), iVar3 != 0)) {
        iVar2 = *(int *)(iVar3 + 4);
        while( true ) {
          if (iVar2 < 0) {
            return *(int *)(iVar3 + 8);
          }
          fVar8 = *(float *)(iVar2 * 0x58 + *(int *)(param_1 + 0x28) + 0x54) *
                  (float)*(int *)(iVar6 + 4);
          if ((iVar7 < 0) || (fVar8 < fVar9)) {
            piVar1 = (int *)(iVar3 + 8);
            iVar3 = *(int *)(iVar3 + 0xc);
            if (*piVar1 != param_3) {
              fVar9 = fVar8;
              iVar7 = *piVar1;
            }
          }
          else {
            iVar3 = *(int *)(iVar3 + 0xc);
          }
          if (iVar3 == 0) break;
          iVar2 = *(int *)(iVar3 + 4);
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x18;
      iVar6 = iVar6 + 0x18;
    } while (iVar4 < *(int *)(param_1 + 0x44));
  }
  iVar4 = iVar7 * 0x14 + *(int *)(param_1 + 0x54);
  *(undefined4 *)(*(int *)(iVar4 + 4) * 0x58 + *(int *)(param_1 + 0x28) + 0x24) = 0xffffffff;
  *(undefined4 *)(iVar4 + 4) = 0xffffffff;
  return iVar7;
}

