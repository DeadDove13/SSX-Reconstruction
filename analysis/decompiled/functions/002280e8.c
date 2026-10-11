/* Ghidra pseudocode. PS2 address: 002280e8. Not validated source. */

undefined4 FUN_002280e8(ulong param_1,undefined1 param_2)

{
  int iVar1;
  
  if (DAT_0029a888 == '\0') {
    return 0xfffffff6;
  }
  if (param_1 < 8) {
    iVar1 = (&DAT_0029a7e8)[(int)param_1];
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 6) = param_2;
    return 0;
  }
  return 0xfffffff8;
}

