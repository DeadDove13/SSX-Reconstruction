/* Ghidra pseudocode. PS2 address: 00239c98. Not validated source. */

undefined4 FUN_00239c98(undefined8 param_1,long param_2)

{
  undefined4 auStack_20 [4];
  
  auStack_20[0] = 0;
  if (param_2 != 0) {
    FUN_002398a0(param_1,param_2,0,auStack_20,0x2c5a00);
  }
  return auStack_20[0];
}

