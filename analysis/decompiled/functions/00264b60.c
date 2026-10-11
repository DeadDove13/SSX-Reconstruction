/* Ghidra pseudocode. PS2 address: 00264b60. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00264b60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    if (ram0x002a6a98 == 0) {
      lVar1 = FUN_00265868(param_2);
      if (lVar1 == 0) goto LAB_00264bb8;
      ram0x002a6a98 = 1;
    }
    uVar2 = FUN_00265790(param_2,param_3);
  }
  else {
LAB_00264bb8:
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}

