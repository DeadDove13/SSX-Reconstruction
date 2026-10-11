/* Ghidra pseudocode. PS2 address: 00155bb0. Not validated source. */

undefined4 FUN_00155bb0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00156b78();
  return *(undefined4 *)(*(int *)(iVar1 * 0x50 + param_1 + 0x1520) + 0xc);
}

