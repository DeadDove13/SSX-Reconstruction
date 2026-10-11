/* Ghidra pseudocode. PS2 address: 00109c50. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00109c94) */

undefined4 FUN_00109c50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x394) + 0x2c);
  iVar2 = *(int *)(*(int *)(param_1 + 0x394) + 0x44);
  iVar3 = FUN_002109e0();
  return *(undefined4 *)((iVar3 % 0xf) * 4 + iVar2 * 0xb4 + iVar1 * 0x3c + 0x27e248);
}

