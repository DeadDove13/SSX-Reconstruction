/* Ghidra pseudocode. PS2 address: 00265960. Not validated source. */

void FUN_00265960(int param_1)

{
  int iVar1;
  
  if (0x7d < DAT_002a6aa0) {
    DAT_002a6aa0 = 0;
    DAT_002d593f = 0;
    FUN_00268da8(0x2d58c0);
  }
  iVar1 = DAT_002a6aa0;
  if (param_1 == 10) {
    DAT_002a6aa0 = 0;
    (&DAT_002d58c0)[iVar1] = 10;
    *(undefined1 *)(iVar1 + 0x2d58c1) = 0;
    FUN_00268da8();
    return;
  }
  (&DAT_002d58c0)[DAT_002a6aa0] = (char)param_1;
  DAT_002a6aa0 = DAT_002a6aa0 + 1;
  return;
}

