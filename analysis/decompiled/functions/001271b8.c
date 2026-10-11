/* Ghidra pseudocode. PS2 address: 001271b8. Not validated source. */

void FUN_001271b8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00223368(0x299cc8,*(undefined2 *)(param_1 + 0x36));
  *(ushort *)(iVar1 + 0x24) = *(ushort *)(iVar1 + 0x24) & 0xfffe;
  return;
}

