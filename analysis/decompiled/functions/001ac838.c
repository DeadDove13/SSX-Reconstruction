/* Ghidra pseudocode. PS2 address: 001ac838. Not validated source. */

void FUN_001ac838(undefined8 param_1,float *param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = 0.0;
  iVar3 = 0;
  fVar4 = param_2[6];
  iVar5 = *(int *)(DAT_002859e4 + 0x5c);
  fVar6 = 0.0;
  if (0 < (int)fVar4) {
    pfVar2 = param_2 + 0xc;
    do {
      if (fVar6 < pfVar2[-4]) {
        fVar6 = pfVar2[-4];
      }
      iVar1 = FUN_001a0a88(0x3f800000,iVar5,*pfVar2,0);
      if (fVar7 < (float)iVar1) {
        fVar7 = (float)iVar1;
      }
      fVar4 = param_2[6];
      iVar3 = iVar3 + 1;
      pfVar2 = pfVar2 + 6;
    } while (iVar3 < (int)fVar4);
  }
  iVar5 = *(int *)(iVar5 + 0xc);
  fVar7 = fVar7 + fVar6 + 90.0;
  param_2[4] = fVar6;
  *param_2 = fVar7;
  fVar4 = (float)(int)fVar4 * ((float)iVar5 + 4.0) + 90.0;
  param_2[1] = fVar4;
  param_2[2] = 320.0 - fVar7 * 0.5;
  param_2[3] = 240.0 - fVar4 * 0.5;
  return;
}

