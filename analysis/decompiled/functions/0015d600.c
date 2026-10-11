/* Ghidra pseudocode. PS2 address: 0015d600. Not validated source. */

void FUN_0015d600(float param_1,float param_2,float param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,long param_7,long param_8,undefined8 param_9)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_1;
  if ((param_1 <= param_2) && (fVar2 = param_2, param_3 < param_2)) {
    fVar2 = param_3;
  }
  fVar1 = (fVar2 - param_1) / (param_3 - param_1);
  if (param_7 == 1) {
    fVar1 = (float)FUN_001624f8(0,0x3f800000,0,0x3f800000,fVar1);
  }
  else if (1 < param_7) {
    if (param_7 == 2) {
      fVar1 = (float)FUN_001624f8(0,0x3f800000,0,0,fVar1);
    }
    else if (param_7 == 3) {
      fVar1 = (float)FUN_001624f8(0,0x3f800000,0x3f800000,0,fVar1);
    }
  }
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  if (param_8 == 0) {
    FUN_0015ca68(fVar1,param_4,param_5,param_6);
  }
  else {
    FUN_0015d0c0(fVar1,param_4,param_5,param_6,param_9);
  }
  if (param_3 <= fVar2) {
    FUN_0025bbe4((int)param_4 + 0x18,param_6);
    return;
  }
  return;
}

