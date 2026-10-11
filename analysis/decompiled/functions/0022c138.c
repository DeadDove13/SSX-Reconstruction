/* Ghidra pseudocode. PS2 address: 0022c138. Not validated source. */

void FUN_0022c138(void)

{
  int iVar1;
  
  iVar1 = GetThreadId();
  if (DAT_0029e8fc != iVar1) {
    WaitSema(DAT_0029e8f8);
    DAT_0029e8fc = iVar1;
  }
  DAT_0029e900 = DAT_0029e900 + 1;
  return;
}

