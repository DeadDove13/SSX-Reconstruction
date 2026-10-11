/* Ghidra pseudocode. PS2 address: 00166368. Not validated source. */

undefined8 FUN_00166368(undefined8 param_1,undefined8 param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pfVar1 = (float *)param_2;
  FUN_001662b8(pfVar1 + 1);
  fVar3 = pfVar1[1];
  if (DAT_002c2758 <= fVar3) {
    fVar5 = *pfVar1 + DAT_002c275c;
    fVar4 = pfVar1[2] + DAT_002c275c;
    pfVar1[1] = DAT_002c275c - fVar3;
    *pfVar1 = fVar5;
    pfVar1[2] = fVar4;
  }
  else if (fVar3 < (float)PTR_DAT_002c2760) {
    fVar5 = pfVar1[2] + DAT_002c2764;
    fVar3 = -fVar3 - DAT_002c2764;
    *pfVar1 = *pfVar1 + DAT_002c2764;
    pfVar1[2] = fVar5;
    pfVar1[1] = fVar3;
  }
  FUN_001662b8(param_2);
  FUN_001662b8(pfVar1 + 2);
  pfVar2 = (float *)param_1;
  *pfVar2 = *pfVar1;
  pfVar2[1] = pfVar1[1];
  pfVar2[2] = pfVar1[2];
  return param_1;
}

