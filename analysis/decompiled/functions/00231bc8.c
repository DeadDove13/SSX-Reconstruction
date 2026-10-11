/* Ghidra pseudocode. PS2 address: 00231bc8. Not validated source. */

void FUN_00231bc8(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float afStack_38 [14];
  
  fVar7 = *(float *)(param_1 + 0x2c);
  iVar5 = 10;
  pfVar3 = afStack_38 + 1;
  pfVar1 = (float *)(param_1 + 0x28);
  do {
    fVar8 = *pfVar1;
    iVar5 = iVar5 + -1;
    pfVar1 = pfVar1 + -1;
    *pfVar3 = fVar8;
    pfVar3 = pfVar3 + -1;
  } while (-1 < iVar5);
  iVar5 = 0;
  while( true ) {
    iVar6 = 10;
    pfVar1 = afStack_38;
    pfVar3 = (float *)(param_1 + 0x28);
    fVar7 = -fVar7 * afStack_38[1];
    do {
      fVar8 = *pfVar3;
      iVar6 = iVar6 + -1;
      pfVar3 = pfVar3 + -1;
      fVar7 = fVar7 - fVar8 * *pfVar1;
      pfVar1[1] = fVar8 * fVar7 + *pfVar1;
      pfVar1 = pfVar1 + -1;
    } while (-1 < iVar6);
    afStack_38[iVar5 + 2] = fVar7;
    iVar6 = 0;
    if (0 < iVar5) {
      do {
        iVar2 = iVar5 - iVar6;
        iVar4 = iVar6 * 4;
        iVar6 = iVar6 + 1;
        fVar7 = fVar7 - *(float *)(iVar4 + param_2) * afStack_38[iVar2 + 1];
      } while (iVar6 < iVar5);
    }
    *(float *)(iVar5 * 4 + param_2) = fVar7;
    if (0xb < iVar5 + 1) break;
    fVar7 = *(float *)(param_1 + 0x2c);
    iVar5 = iVar5 + 1;
  }
  return;
}

