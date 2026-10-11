/* Ghidra pseudocode. PS2 address: 00241108. Not validated source. */

undefined8 FUN_00241108(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00242370();
  if (lVar1 == 0) {
    lVar1 = FUN_00241178(param_1);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_00242398(param_1);
    }
  }
  else {
    uVar2 = FUN_00242398(param_1);
  }
  return uVar2;
}

