/* Ghidra pseudocode. PS2 address: 00154c98. Not validated source. */

undefined4 FUN_00154c98(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00156b78();
  return *(undefined4 *)(param_1 + iVar1 * 4 + 0x1970);
}

