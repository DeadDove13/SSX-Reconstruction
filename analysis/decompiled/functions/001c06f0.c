/* Ghidra pseudocode. PS2 address: 001c06f0. Not validated source. */

void FUN_001c06f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = DAT_00299ce8;
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x38);
  FUN_0021a7e8();
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}

