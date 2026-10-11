/* Ghidra pseudocode. PS2 address: 0018e9a0. Not validated source. */

bool FUN_0018e9a0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00182670(0x285290,*(undefined4 *)(param_1 + 0x2c));
  return *(int *)(iVar1 + 0x28) == param_2;
}

