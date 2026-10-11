/* Ghidra pseudocode. PS2 address: 00237898. Not validated source. */

undefined8 FUN_00237898(uint param_1)

{
  if (((int)param_1 >> 0x18 == 2) &&
     (FUN_00267bc8(param_1 & 0xffffff), DAT_002c59cc == (param_1 & 0xffffff))) {
    DAT_002c59cc = 0xffffffff;
  }
  return 0;
}

