/* Ghidra pseudocode. PS2 address: 001d6820. Not validated source. */

void FUN_001d6820(undefined8 param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  undefined4 *puVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = DAT_002c3658;
  iVar1 = *param_2;
  iVar6 = 7;
  fVar8 = 0.0;
  puVar3 = (undefined4 *)(iVar1 + 0xc);
  pfVar4 = (float *)(iVar1 + 4);
  do {
    iVar5 = iVar1;
    iVar6 = iVar6 + -1;
    puVar3[-3] = fVar8 * fVar8 * fVar8;
    pfVar4[1] = fVar8;
    *pfVar4 = fVar8 * fVar8;
    fVar8 = fVar8 + fVar9;
    *puVar3 = 0x3f800000;
    fVar2 = DAT_002c365c;
    pfVar4 = (float *)(iVar5 + 0x14);
    puVar3 = puVar3 + 4;
    iVar1 = iVar5 + 0x10;
  } while (-1 < iVar6);
  fVar9 = 0.0;
  iVar7 = 5;
  iVar1 = *param_2;
  puVar3 = (undefined4 *)(iVar5 + 0x1c);
  iVar6 = iVar5 + 0x10;
  do {
    iVar5 = iVar6;
    iVar7 = iVar7 + -1;
    puVar3[-3] = fVar9 * fVar9 * fVar9;
    pfVar4[1] = fVar9;
    *pfVar4 = fVar9 * fVar9;
    fVar9 = fVar9 + fVar2;
    *puVar3 = 0x3f800000;
    fVar8 = DAT_002c3660;
    pfVar4 = (float *)(iVar5 + 0x14);
    puVar3 = puVar3 + 4;
    iVar6 = iVar5 + 0x10;
  } while (-1 < iVar7);
  iVar7 = 3;
  fVar9 = 0.0;
  puVar3 = (undefined4 *)(iVar5 + 0x1c);
  do {
    iVar7 = iVar7 + -1;
    puVar3[-3] = fVar9 * fVar9 * fVar9;
    pfVar4[1] = fVar9;
    *pfVar4 = fVar9 * fVar9;
    fVar9 = fVar9 + fVar8;
    *puVar3 = 0x3f800000;
    pfVar4 = (float *)(iVar6 + 0x14);
    puVar3 = puVar3 + 4;
    iVar6 = iVar6 + 0x10;
  } while (-1 < iVar7);
  *param_2 = iVar1 + 0x120;
  return;
}

