/* Ghidra pseudocode. PS2 address: 00238c18. Not validated source. */

undefined8 FUN_00238c18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (DAT_002a3358 == 0) {
    uVar1 = FUN_00238db8();
    uVar1 = FUN_0023a448(0x2be610,uVar1,0x10);
    uVar1 = FUN_00238ca0(param_1,param_2,param_3,uVar1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

