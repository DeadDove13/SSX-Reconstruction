/* Ghidra pseudocode. PS2 address: 001ab130. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001ab1ec) */

void FUN_001ab130(int param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  pfVar2 = (float *)(param_1 + param_2 * 0x14 + 0x80);
  if (0.0 < *pfVar2) {
    fVar3 = pfVar2[1];
    if (*(float *)(param_1 + 0xc0) <= fVar3 + *(float *)(param_1 + 0xc4) * DAT_002c32ec) {
      if (*(float *)(param_1 + 0xbc) <= pfVar2[2]) {
        if (pfVar2[2] <= *(float *)(param_1 + 0xbc) + *(float *)(param_1 + 200)) {
          pfVar2[3] = fVar3;
          goto LAB_001ab28c;
        }
        fVar3 = *(float *)(param_1 + 0xc0);
      }
      else {
        fVar3 = *(float *)(param_1 + 0xc0);
      }
    }
    else {
      fVar3 = *(float *)(param_1 + 0xc0);
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0xc0);
  }
  pfVar2[1] = fVar3 + *(float *)(param_1 + 0xc4);
  iVar1 = FUN_002109b0();
  fVar3 = pfVar2[1];
  fVar4 = DAT_002c32f8 - (float)param_2 * DAT_002c32f4;
  *pfVar2 = (1.0 - (float)(uint)(iVar1 % 100) * DAT_002c32f0) * 200.0;
  pfVar2[2] = *(float *)(param_1 + 0xbc) + *(float *)(param_1 + 200) * fVar4;
  pfVar2[3] = fVar3;
LAB_001ab28c:
  pfVar2[4] = fVar3 + *(float *)(param_1 + 0xc4) * DAT_002c32fc;
  if (fVar3 < *(float *)(param_1 + 0xc0)) {
    pfVar2[3] = *(float *)(param_1 + 0xc0);
  }
  fVar3 = *(float *)(param_1 + 0xc0) + *(float *)(param_1 + 0xc4);
  if (fVar3 < pfVar2[4]) {
    pfVar2[4] = fVar3;
  }
  return;
}

