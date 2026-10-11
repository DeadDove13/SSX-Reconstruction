/* Ghidra pseudocode. PS2 address: 00202bc0. Not validated source. */

int FUN_00202bc0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00202b28();
  iVar2 = FUN_00202b70(param_1);
  return (iVar1 >> 2) + iVar2 * 2;
}

