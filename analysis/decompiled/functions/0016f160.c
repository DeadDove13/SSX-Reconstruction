/* Ghidra pseudocode. PS2 address: 0016f160. Not validated source. */

undefined4 FUN_0016f160(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0xb38)) {
  case 0:
    return 1;
  default:
    return 0;
  case 2:
    return 2;
  case 3:
    return 0x400;
  case 4:
    return 0x10;
  case 5:
    return 0x40;
  case 7:
    return 4;
  case 9:
    return 8;
  }
}

