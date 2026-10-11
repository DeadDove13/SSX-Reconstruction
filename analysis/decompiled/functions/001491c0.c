/* Ghidra pseudocode. PS2 address: 001491c0. Not validated source. */

void FUN_001491c0(int param_1,long param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x224);
    *(int *)(iVar1 + 4) = (int)param_2;
    *(int *)(param_1 + 0x224) = iVar1 + 4;
  }
  return;
}

