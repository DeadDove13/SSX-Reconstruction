/* Ghidra pseudocode. PS2 address: 001915b0. Not validated source. */

void FUN_001915b0(undefined8 param_1,float *param_2)

{
  int *piVar1;
  float fVar2;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  
  FUN_0011ed18(0x295e90,0xb);
  FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
  FUN_0011ed48(0x295e90,3);
  fStack_b0 = *param_2;
  fStack_ac = param_2[1];
  fStack_a8 = param_2[2];
  FUN_00193040(0x3f000000,0x28ad30,&fStack_b0);
  FUN_00193018(0x28ad30,param_1);
  fVar2 = *param_2 * DAT_002c2a28;
  fStack_b0 = 0.0;
  if ((0.0 <= fVar2) && (fStack_b0 = fVar2, 1.0 < fVar2)) {
    fStack_b0 = 1.0;
  }
  fVar2 = param_2[1] * DAT_002c2a28;
  fStack_ac = 0.0;
  if ((0.0 <= fVar2) && (fStack_ac = fVar2, 1.0 < fVar2)) {
    fStack_ac = 1.0;
  }
  fVar2 = param_2[2] * DAT_002c2a2c;
  if (0.0 <= fVar2) {
    fStack_a8 = 1.0;
    if (fVar2 <= 1.0) {
      fStack_a8 = fVar2;
    }
  }
  else {
    fStack_a8 = 0.0;
  }
  fStack_a0 = fStack_b0;
  fStack_9c = fStack_ac;
  fStack_98 = fStack_a8;
  FUN_00193040(0x3f000000,0x28ad30,&fStack_a0);
  piVar1 = (int *)param_1;
  FUN_0019fe18((float)*piVar1 + 0.5,(float)piVar1[1] + 0.5,(float)(*piVar1 + piVar1[2]) - 0.5,
               (float)piVar1[1] + 0.5,0x28ad30);
  FUN_0019fe18((float)*piVar1 + 0.5,(float)piVar1[1] + 0.5,(float)*piVar1 + 0.5,
               (float)(piVar1[1] + piVar1[3]) - 0.5,0x28ad30);
  fStack_98 = param_2[2] * DAT_002c2a30;
  fStack_a0 = *param_2 * DAT_002c2a30;
  fStack_9c = param_2[1] * DAT_002c2a30;
  fStack_90 = fStack_a0;
  fStack_8c = fStack_9c;
  fStack_88 = fStack_98;
  FUN_00193040(0x3f000000,0x28ad30,&fStack_90);
  fVar2 = (float)(piVar1[1] + piVar1[3]) - 0.5;
  FUN_0019fe18((float)*piVar1 + 0.5,fVar2,(float)(*piVar1 + piVar1[2]) - 0.5,fVar2,0x28ad30);
  fVar2 = (float)(*piVar1 + piVar1[2]) - 0.5;
  FUN_0019fe18(fVar2,(float)piVar1[1] + 0.5,fVar2,(float)(piVar1[1] + piVar1[3]) - 0.5,0x28ad30);
  FUN_0011ed18(0x295e90,0xc);
  return;
}

