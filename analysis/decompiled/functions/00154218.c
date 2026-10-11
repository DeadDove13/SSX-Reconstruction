/* Ghidra pseudocode. PS2 address: 00154218. Not validated source. */

void FUN_00154218(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00156b78();
  param_1 = param_1 + iVar1 * 0x50;
  *(undefined1 *)(param_1 + 0x1508) = 0xff;
  *(undefined4 *)(param_1 + 0x1524) = 0;
  *(undefined4 *)(param_1 + 0x1520) = 0;
  return;
}

