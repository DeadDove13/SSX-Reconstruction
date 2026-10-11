/* Ghidra pseudocode. PS2 address: 0022c6c0. Not validated source. */

void FUN_0022c6c0(uint param_1,undefined1 param_2,undefined1 param_3)

{
  if (param_1 < 2) {
    param_1 = 0;
  }
  else if (param_1 == 5) {
    param_1 = 1;
  }
  else if (param_1 == 10) {
    param_1 = 2;
  }
  else if (param_1 == 0x14) {
    param_1 = 3;
  }
  else if (param_1 == 0x1e) {
    param_1 = 4;
  }
  else if (param_1 == 0x28) {
    param_1 = 5;
  }
  else if (param_1 == 0x32) {
    param_1 = 6;
  }
  else if (param_1 == 100) {
    param_1 = 9;
  }
  else if (param_1 == 0x6e) {
    param_1 = 8;
  }
  else if (param_1 == 0x78) {
    param_1 = 7;
  }
  DAT_0029ad0a = param_3;
  DAT_0029ad08 = (char)param_1;
  DAT_0029ad09 = param_2;
  DAT_0029e6c6 = (short)(0x200000 - *(int *)(&DAT_002a1ae0 + param_1 * 4) >> 6);
  return;
}

