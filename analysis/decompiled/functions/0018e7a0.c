/* Ghidra pseudocode. PS2 address: 0018e7a0. Not validated source. */

undefined4 FUN_0018e7a0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + *(int *)(param_1 + 8) * 4 + 0x10);
  iVar2 = *(int *)(iVar1 + 0xc);
  (**(code **)(iVar2 + 0x3c))(iVar1 + *(short *)(iVar2 + 0x38));
  uVar3 = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x110) = 0;
  return uVar3;
}

