/* Ghidra pseudocode. PS2 address: 00109cc0. Not validated source. */

undefined4 FUN_00109cc0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x394) + 0x2c);
  iVar2 = *(int *)(*(int *)(param_1 + 0x394) + 0x44);
  uVar3 = FUN_002109e0();
  return *(undefined4 *)((uVar3 & 3) * 4 + iVar2 * 0xb4 + iVar1 * 0x3c + 0x27e248);
}

