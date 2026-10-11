/* Ghidra pseudocode. PS2 address: 0023ebe0. Not validated source. */

bool FUN_0023ebe0(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = GetThreadId();
  iVar1 = DAT_002c5bf0;
  if (param_1 != 0) {
    if (param_1 == -1) {
      return true;
    }
    iVar1 = *(int *)((int)param_1 + 0x10);
  }
  return iVar2 == iVar1;
}

