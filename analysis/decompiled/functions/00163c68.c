/* Ghidra pseudocode. PS2 address: 00163c68. Not validated source. */

undefined8 FUN_00163c68(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_4 == 0) {
    lVar1 = FUN_00163570();
  }
  else {
    if (param_4 != 1) {
      if (param_4 != 2) {
        return 0;
      }
      uVar2 = FUN_00163570(param_1,param_2);
      return uVar2;
    }
    lVar1 = FUN_00163570(param_1,param_3);
    param_3 = param_2;
  }
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_00163570(param_1,param_3);
    uVar2 = 0;
    if (lVar1 == 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

