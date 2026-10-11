/* Ghidra pseudocode. PS2 address: 001aae20. Not validated source. */

void FUN_001aae20(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  
  fVar1 = DAT_002c32e0;
  iVar3 = (int)param_1 + 0x1c;
  iVar5 = 0;
  do {
    iVar6 = iVar5 + 1;
    *(float *)(iVar3 + 0xc) = *(float *)(iVar3 + 0xc) - fVar1;
    FUN_001aaed0(param_1,iVar5);
    fVar2 = DAT_002c32e4;
    iVar3 = iVar3 + 0x14;
    iVar5 = iVar6;
  } while (iVar6 < 5);
  pfVar4 = (float *)((int)param_1 + 0x80);
  iVar5 = 0;
  do {
    iVar3 = iVar5 + 1;
    pfVar4[1] = pfVar4[1] - *pfVar4 * fVar2;
    FUN_001ab130(param_1,iVar5);
    pfVar4 = pfVar4 + 5;
    iVar5 = iVar3;
  } while (iVar3 < 3);
  return;
}

