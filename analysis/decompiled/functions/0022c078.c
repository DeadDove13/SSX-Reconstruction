/* Ghidra pseudocode. PS2 address: 0022c078. Not validated source. */

void FUN_0022c078(void)

{
  int iVar1;
  
  iVar1 = GetThreadId();
  if ((DAT_0029e8fc == iVar1) && (DAT_0029e900 = DAT_0029e900 + -1, DAT_0029e900 == 0)) {
    DAT_0029e8fc = -1;
  }
  if (DAT_0029e900 < 1) {
    SignalSema(DAT_0029e8f8);
    return;
  }
  return;
}

