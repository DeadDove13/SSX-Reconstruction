/* Ghidra pseudocode. PS2 address: 00261f58. Not validated source. */

undefined8 FUN_00261f58(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x3ff0000000000000;
  if (param_1 < 0x18) {
    uVar1 = *(undefined8 *)(&DAT_002c08e0 + param_1 * 8);
  }
  else {
    for (; 0 < param_1; param_1 = param_1 + -1) {
      uVar1 = FUN_00257580(uVar1,0x4024000000000000);
    }
  }
  return uVar1;
}

