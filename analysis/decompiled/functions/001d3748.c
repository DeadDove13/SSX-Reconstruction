/* Ghidra pseudocode. PS2 address: 001d3748. Not validated source. */

void FUN_001d3748(int param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0xc20);
  iVar3 = param_1 + iVar2 * 8;
  *(undefined2 *)(iVar3 + 0xc24) = *param_2;
  uVar1 = param_2[1];
  *(int *)(param_1 + 0xd088) = iVar2;
  *(undefined2 *)(iVar3 + 0xc26) = uVar1;
  iVar2 = *(int *)(param_1 + 0xc20);
  uVar1 = param_2[2];
  *(undefined4 *)(param_1 + 0xd07c) = 0;
  *(undefined2 *)(iVar3 + 0xc28) = uVar1;
  *(int *)(param_1 + 0xc20) = iVar2 + 1;
  *(undefined2 *)(iVar3 + 0xc2a) = param_2[3];
  return;
}

