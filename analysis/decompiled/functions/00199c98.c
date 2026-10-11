/* Ghidra pseudocode. PS2 address: 00199c98. Not validated source. */

void thunk_FUN_00199c48(undefined4 *param_1)

{
  FUN_0023bbd0(param_1 + 9,0,0xe00);
  FUN_0023bbd0(param_1 + 2,0,0x1c);
  *param_1 = 0;
  param_1[1] = 0xffffffff;
  return;
}

