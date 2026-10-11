/* Ghidra pseudocode. PS2 address: 00146718. Not validated source. */

void FUN_00146718(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4) + param_2 * 0x2c;
  iVar2 = 0;
  if (*(int *)(iVar1 + 8) != 0) {
    iVar2 = *(int *)(param_1 + 8) + *(int *)(iVar1 + 4);
  }
  *(int *)(param_3 + 0xbc) = iVar2;
  *(int *)(param_3 + 8) = iVar1;
  return;
}

