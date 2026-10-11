/* Ghidra pseudocode. PS2 address: 0023ea60. Not validated source. */

void FUN_0023ea60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(&DAT_002a3ec4 + param_1 * 8) + -1;
  *(int *)(&DAT_002a3ec4 + param_1 * 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(&DAT_002a3ec0 + param_1 * 8) = 0;
    SignalSema();
    return;
  }
  return;
}

