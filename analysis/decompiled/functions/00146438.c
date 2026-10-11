/* Ghidra pseudocode. PS2 address: 00146438. Not validated source. */

void FUN_00146438(int param_1,long param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 4);
    *(int *)(iVar1 + 4) = (int)param_2;
    *(int *)(param_1 + 4) = iVar1 + 4;
  }
  return;
}

