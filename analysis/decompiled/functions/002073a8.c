/* Ghidra pseudocode. PS2 address: 002073a8. Not validated source. */

void FUN_002073a8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x35f88);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xfc) == 0)) {
    *(undefined4 *)(iVar1 + 0xfc) = 1;
    FUN_00205720(param_1,0,DAT_002c5760,0,0,0,0,0);
    return;
  }
  return;
}

