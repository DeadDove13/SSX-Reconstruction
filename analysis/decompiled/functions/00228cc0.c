/* Ghidra pseudocode. PS2 address: 00228cc0. Not validated source. */

undefined8 FUN_00228cc0(undefined1 *param_1)

{
  param_1[5] = 0x3c;
  *(undefined2 *)(param_1 + 0x10) = 0x1000;
  *(undefined2 *)(param_1 + 0x14) = 0xffff;
  param_1[1] = 0x40;
  param_1[2] = 0x7f;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0x1000;
  *(undefined2 *)(param_1 + 0xe) = 0x1000;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[6] = 0x7f;
  param_1[4] = 0x40;
  *param_1 = 0x7f;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  return 0;
}

