/* Ghidra pseudocode. PS2 address: 0013f9c8. Not validated source. */

float FUN_0013f9c8(float param_1,float param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = 1.0;
  if (1.0 <= param_2) {
    fVar6 = param_2;
  }
  iVar1 = *(int *)(param_3 + 0xc);
  iVar2 = *(int *)(iVar1 + 0x394);
  fVar5 = (float)*(byte *)(iVar2 + 0x19) * DAT_002c20f4 * DAT_002c2100 + DAT_002c2108;
  fVar3 = (float)*(byte *)(iVar2 + 0xe) * DAT_002c20f8 * DAT_002c2100 + DAT_002c210c;
  fVar4 = (float)*(byte *)(iVar2 + 0x11) * DAT_002c20fc * DAT_002c2100 + DAT_002c2110;
  if ((*(int *)(iVar1 + 0x144) != *(int *)(iVar2 + 0x28)) && (*(int *)(iVar1 + 0x344) != 1)) {
    fVar7 = DAT_002c2118;
    if (*(int *)(iVar1 + 0x344) != 0) {
      fVar7 = DAT_002c2114;
    }
    fVar4 = fVar4 * fVar7;
    fVar5 = fVar5 * fVar7;
    fVar3 = fVar3 * fVar7;
  }
  fVar7 = 1.0;
  if (*(int *)(iVar1 + 0x210) - 3U < 2) {
    fVar7 = 0.5 - *(float *)(iVar1 + 0x14c) / *(float *)(iVar1 + 0x218);
  }
  return -param_1 * fVar7 *
         (fVar6 * *(float *)(param_4 + 4) * fVar3 + (1.0 - *(float *)(iVar1 + 0x198)) * DAT_002c2120
          + (*(float *)(iVar1 + 0xa8) + 1.0) * DAT_002c211c * *(float *)(iVar1 + 0x18c) *
            *(float *)(iVar1 + 0x18c) * fVar4 +
         ABS(param_1) * DAT_002c2104 *
         (fVar6 * *(float *)(param_4 + 8) +
         ABS(param_1) * DAT_002c2104 * fVar6 * *(float *)(param_4 + 0xc) * fVar5));
}

