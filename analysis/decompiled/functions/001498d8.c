/* Ghidra pseudocode. PS2 address: 001498d8. Not validated source. */

void FUN_001498d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = 0.0;
  lVar1 = FUN_00148998(param_3,0);
  if (lVar1 != 0) {
    fVar3 = *(float *)((int)lVar1 + 0x1e8);
    FUN_001eacb0(param_3,lVar1);
  }
  FUN_001493f0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_001478c8(param_2,0,0x3a);
  iVar2 = (int)param_2;
  *(undefined4 *)(iVar2 + 0x1e4) = 1;
  if (fVar3 < 0.0) {
    *(undefined4 *)(iVar2 + 0x1e8) = 0;
  }
  else {
    *(float *)(iVar2 + 0x1e8) = fVar3;
  }
  FUN_00149630(param_1,param_2,param_3,param_4,param_7,1);
  return;
}

