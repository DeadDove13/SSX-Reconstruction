/* Ghidra pseudocode. PS2 address: 00165a30. Not validated source. */

undefined4 FUN_00165a30(float param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0.0) {
    uVar1 = 0;
    if (param_1 <= DAT_002c5b80) {
      return 1;
    }
  }
  else {
    uVar1 = 0;
    if ((param_1 <= DAT_002c5b80) && (uVar1 = 1, param_1 + param_2 * param_3 <= DAT_002c5b80)) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

