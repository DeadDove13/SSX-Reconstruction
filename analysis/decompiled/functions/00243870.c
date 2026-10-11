/* Ghidra pseudocode. PS2 address: 00243870. Not validated source. */

void FUN_00243870(undefined4 *param_1)

{
  *(undefined1 *)((int)param_1 + 0xf) = 0xff;
  param_1[1] = 0xffffffff;
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0xff;
  *(undefined1 *)((int)param_1 + 0xd) = 0xff;
  *(undefined1 *)((int)param_1 + 0xe) = 0xff;
  return;
}

