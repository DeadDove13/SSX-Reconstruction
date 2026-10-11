/* Ghidra pseudocode. PS2 address: 0022cc68. Not validated source. */

undefined8 FUN_0022cc68(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0x18) & 8) != 0) {
    iVar1 = *(int *)(param_1 + 0x68);
    iVar3 = *param_3;
    iVar2 = iVar1;
    if (*param_3 == 0) {
      *param_3 = iVar1;
      iVar2 = *(int *)(param_1 + 0x68);
      iVar3 = iVar1;
    }
    **(int **)(param_1 + 100) = param_2 + (iVar2 - iVar3);
  }
  return 0;
}

