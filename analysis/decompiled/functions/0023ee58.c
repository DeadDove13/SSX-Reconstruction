/* Ghidra pseudocode. PS2 address: 0023ee58. Not validated source. */

void FUN_0023ee58(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1 * 8;
  iVar1 = GetThreadId();
  if (*(int *)(&DAT_002a3ec0 + iVar2) != iVar1) {
    WaitSema(param_1);
    iVar1 = GetThreadId();
    *(int *)(&DAT_002a3ec0 + iVar2) = iVar1;
  }
  *(int *)(&DAT_002a3ec4 + iVar2) = *(int *)(&DAT_002a3ec4 + iVar2) + 1;
  return;
}

