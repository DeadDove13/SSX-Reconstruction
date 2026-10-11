/* Ghidra pseudocode. PS2 address: 001aaed0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001aaf94) */

void FUN_001aaed0(int param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  pfVar2 = (float *)(param_1 + param_2 * 0x14 + 0x1c);
  if (0.0 < pfVar2[3]) {
    fVar3 = *pfVar2;
    if ((((*(float *)(param_1 + 0xc0) + 35.0 <= fVar3) &&
         (fVar3 <= (*(float *)(param_1 + 0xc0) + *(float *)(param_1 + 0xc4)) - 35.0)) &&
        (*(float *)(param_1 + 0xbc) + 35.0 <= pfVar2[1])) &&
       (fVar3 <= (*(float *)(param_1 + 0xbc) + *(float *)(param_1 + 200)) - 35.0)) {
      fVar3 = pfVar2[4];
      goto LAB_001ab0f0;
    }
  }
  iVar1 = FUN_002109b0();
  fVar3 = 2.0 - (float)(uint)(iVar1 % 100) * DAT_002c32e8;
  pfVar2[3] = fVar3;
  pfVar2[4] = fVar3;
  iVar1 = FUN_002109b0();
  iVar5 = (int)(*(float *)(param_1 + 0xc4) - 70.0);
  if (iVar5 == 0) {
    trap(7);
  }
  *pfVar2 = *(float *)(param_1 + 0xc0) + 35.0 + (float)(uint)(iVar1 % iVar5);
  iVar1 = FUN_002109b0();
  iVar5 = (int)(*(float *)(param_1 + 200) - 70.0);
  if (iVar5 == 0) {
    trap(7);
  }
  pfVar2[1] = *(float *)(param_1 + 0xbc) + 35.0 + (float)(uint)(iVar1 % iVar5);
  fVar3 = pfVar2[4];
LAB_001ab0f0:
  fVar4 = pfVar2[3];
  if (fVar4 < fVar3 * 0.5) {
    pfVar2[2] = fVar4;
  }
  else {
    pfVar2[2] = fVar3 - fVar4;
  }
  return;
}

