/* Ghidra pseudocode. PS2 address: 0016c210. Not validated source. */

void FUN_0016c210(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  int iVar1;
  
  if (param_6 == 1) {
    iVar1 = FUN_001a0a88(0x3f800000,param_2,param_5,0);
    FUN_001a1208(param_1,param_2,(int)param_3 - (int)((float)iVar1 * param_1),param_4,param_5);
    return;
  }
  if (param_6 < 2) {
    if (param_6 == 0) {
      FUN_001a1208(param_1,param_2,param_3,param_4,param_5);
      return;
    }
  }
  else if (param_6 == 2) {
    iVar1 = FUN_001a0a88(0x3f800000,param_2,param_5,0);
    FUN_001a1208(param_1,param_2,(int)param_3 - (int)((float)iVar1 * param_1) / 2,param_4,param_5);
    return;
  }
  return;
}

