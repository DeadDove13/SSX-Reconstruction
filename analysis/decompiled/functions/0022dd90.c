/* Ghidra pseudocode. PS2 address: 0022dd90. Not validated source. */

int FUN_0022dd90(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_2 * 4;
  if (param_2 < (long)(ulong)*(ushort *)(param_1 + 6)) {
    iVar1 = *(int *)(param_1 + iVar2 + 0x14);
    if (iVar1 != 0) {
      return param_1 + iVar2 + 0x14 + iVar1;
    }
  }
  return 0;
}

