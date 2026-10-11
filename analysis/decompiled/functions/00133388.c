/* Ghidra pseudocode. PS2 address: 00133388. Not validated source. */

void FUN_00133388(float param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  if ((0.5 < param_1) &&
     ((*(int *)(DAT_002859e4 + 0x38) == 0 ||
      (iVar1 = *(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x18), iVar1 == 0 || 9 < iVar1)))) {
    fVar3 = param_1 * DAT_002c1c3c;
    iVar1 = *(int *)(*param_2 + 0x34);
    fVar2 = DAT_002c1c40;
    if ((DAT_002c1c40 <= fVar3) && (fVar2 = DAT_002c1c44, fVar3 <= DAT_002c1c44)) {
      fVar2 = fVar3;
    }
    (**(code **)(iVar1 + 0x24))(*param_2 + (int)*(short *)(iVar1 + 0x20),1,(int)(fVar2 * 60.0));
  }
  fVar2 = (float)param_2[1];
  param_1 = param_1 + DAT_002c1c48;
  if ((fVar2 <= param_1) && (fVar2 = param_1, 2.0 < param_1)) {
    fVar2 = 2.0;
  }
  param_2[1] = (int)fVar2;
  return;
}

