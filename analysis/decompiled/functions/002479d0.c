/* Ghidra pseudocode. PS2 address: 002479d0. Not validated source. */

undefined4 FUN_002479d0(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00248f88(1);
  uVar1 = 0;
  if (lVar2 == 0) {
    uVar1 = DAT_002a5270;
    DAT_002a5270 = param_1;
  }
  return uVar1;
}

