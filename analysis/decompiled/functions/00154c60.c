/* Ghidra pseudocode. PS2 address: 00154c60. Not validated source. */

undefined4 FUN_00154c60(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00156b78();
  return **(undefined4 **)(iVar1 * 0x50 + param_1 + 0x1520);
}

