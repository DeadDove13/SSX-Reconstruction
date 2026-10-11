/* Ghidra pseudocode. PS2 address: 00160aa0. Not validated source. */

void FUN_00160aa0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5
                 )

{
  long lVar1;
  
  lVar1 = 0;
  if (param_3 != 0) {
    lVar1 = FUN_00160828(param_3,param_2,param_5);
  }
  if ((lVar1 == 0) && (param_4 != 0)) {
    FUN_00160828(param_4,param_2,param_5);
  }
  return;
}

