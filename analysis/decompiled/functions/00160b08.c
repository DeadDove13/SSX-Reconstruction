/* Ghidra pseudocode. PS2 address: 00160b08. Not validated source. */

void FUN_00160b08(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5
                 ,undefined8 param_6)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_4 != 0) {
    lVar1 = FUN_001608f0(param_4,param_2,param_3,param_6);
  }
  if (lVar1 == 0) {
    lVar1 = 0;
    if (param_5 != 0) {
      lVar1 = FUN_001608f0(param_5,param_2,param_3,param_6);
    }
    if (lVar1 == 0) {
      FUN_00160aa0(param_1,param_2,param_4,param_5,param_6);
    }
  }
  return;
}

