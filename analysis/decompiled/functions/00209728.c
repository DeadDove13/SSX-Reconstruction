/* Ghidra pseudocode. PS2 address: 00209728. Not validated source. */

undefined8 FUN_00209728(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00242370();
  if (lVar1 == 0) {
    lVar1 = FUN_00241178(param_2);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_00242398(param_2);
    }
  }
  else {
    uVar2 = FUN_00242398(param_2);
  }
  return uVar2;
}

