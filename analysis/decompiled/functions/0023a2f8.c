/* Ghidra pseudocode. PS2 address: 0023a2f8. Not validated source. */

undefined8 FUN_0023a2f8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00238298(param_1,param_2,0);
  uVar2 = 0;
  if (lVar1 != 0) {
    FUN_00238f58(lVar1);
    uVar2 = FUN_00239028(lVar1);
  }
  return uVar2;
}

