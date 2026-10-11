/* Ghidra pseudocode. PS2 address: 0018e708. Not validated source. */

undefined4 FUN_0018e708(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0018e6e0();
  return *(undefined4 *)(param_1 + iVar1 * 4 + 0x10);
}

