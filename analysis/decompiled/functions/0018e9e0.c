/* Ghidra pseudocode. PS2 address: 0018e9e0. Not validated source. */

uint FUN_0018e9e0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00182670(0x285290,*(undefined4 *)(param_1 + 0x2c));
  return *(uint *)(iVar1 + 0xc) & param_2;
}

