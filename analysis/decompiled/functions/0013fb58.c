/* Ghidra pseudocode. PS2 address: 0013fb58. Not validated source. */

float FUN_0013fb58(float param_1,float param_2,float param_3,int param_4,int param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  param_2 = ABS(param_2);
  if (param_2 < DAT_002c2124) {
    fVar3 = (param_2 - 0.0) * DAT_002c2128 + DAT_002c212c;
  }
  else {
    if (param_2 < DAT_002c2130) {
      fVar3 = (param_2 - DAT_002c2124) * DAT_002c2134;
      fVar2 = DAT_002c2138;
    }
    else {
      fVar3 = (param_2 - DAT_002c2130) * DAT_002c2140;
      fVar2 = DAT_002c213c;
    }
    fVar3 = fVar3 + fVar2;
  }
  param_1 = param_1 * fVar3;
  fVar3 = ABS(param_3) * DAT_002c2144 + 0.0;
  if (1.0 <= fVar3) {
    param_1 = param_1 * fVar3;
  }
  iVar1 = *(int *)(param_4 + 0xc);
  fVar3 = (float)*(byte *)(*(int *)(iVar1 + 0x394) + 0x13) * DAT_002c2148 * DAT_002c214c +
          DAT_002c2150;
  if (*(int *)(iVar1 + 0x144) != *(int *)(*(int *)(iVar1 + 0x394) + 0x28)) {
    if (*(int *)(iVar1 + 0x344) == 1) {
      fVar2 = *(float *)(iVar1 + 0xa8);
      goto LAB_0013fc70;
    }
    if (*(int *)(iVar1 + 0x344) == 0) {
      fVar3 = fVar3 * DAT_002c2158;
    }
    else {
      fVar3 = fVar3 * DAT_002c2154;
    }
  }
  fVar2 = *(float *)(iVar1 + 0xa8);
LAB_0013fc70:
  fVar3 = param_1 * -*(float *)(param_5 + 0x10) * fVar3;
  if (0.0 < fVar2) {
    fVar3 = fVar3 * (1.0 / (fVar2 * 0.0 + 1.0));
  }
  return fVar3;
}

