/* Ghidra pseudocode. PS2 address: 00264ae0. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00264ae0(int param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 - 1U < 2) {
    if (ram0x002a6a98 == 0) {
      lVar1 = FUN_00265868(param_2);
      if (lVar1 == 0) goto LAB_00264b40;
      ram0x002a6a98 = 1;
    }
    uVar2 = FUN_00265640(param_2,param_3);
  }
  else {
LAB_00264b40:
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}

