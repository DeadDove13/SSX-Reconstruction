/* Ghidra pseudocode. PS2 address: 001f2d78. Not validated source. */

undefined4 FUN_001f2d78(undefined8 param_1)

{
  switch(param_1) {
  case 0:
    return 0x40;
  case 1:
    return 1;
  default:
    return 0;
  case 3:
  case 6:
  case 7:
  case 9:
  case 10:
    return 0x10;
  case 4:
    return 0x100;
  case 5:
    return 0x80;
  case 8:
    return 4;
  }
}

