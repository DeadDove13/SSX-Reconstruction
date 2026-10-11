/* Ghidra pseudocode. PS2 address: 00228098. Not validated source. */

undefined4 FUN_00228098(ulong param_1)

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
  if (iVar1 == 0) {
    return 0xfffffff8;
  }
  return *(undefined4 *)(iVar1 + 0xa8);
}

