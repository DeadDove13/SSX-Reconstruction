/* Ghidra pseudocode. PS2 address: 00127188. Not validated source. */

void FUN_00127188(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00223368(0x299cc8,*(undefined2 *)(param_1 + 0x36));
  *(ushort *)(iVar1 + 0x24) = *(ushort *)(iVar1 + 0x24) | 1;
  return;
}

