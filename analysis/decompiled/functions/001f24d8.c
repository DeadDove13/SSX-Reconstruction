/* Ghidra pseudocode. PS2 address: 001f24d8. Not validated source. */

undefined4 FUN_001f24d8(int param_1)

{
  switch(*(undefined1 *)(*(int *)(param_1 + 0x394) + 0x4c)) {
  case 1:
    return 2;
  case 2:
    return 0x20;
  case 3:
    return 0x80;
  case 4:
    return 8;
  case 5:
    return 0x10;
  case 6:
    return 4;
  case 7:
    return 1;
  case 8:
    return 0x40;
  default:
    return 0x100;
  }
}

