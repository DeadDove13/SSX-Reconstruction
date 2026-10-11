/* Ghidra pseudocode. PS2 address: 00155a30. Not validated source. */

undefined1 FUN_00155a30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00156b78();
  return *(undefined1 *)(*(int *)(iVar1 * 0x50 + param_1 + 0x1520) + 4);
}

