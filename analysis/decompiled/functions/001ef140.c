/* Ghidra pseudocode. PS2 address: 001ef140. Not validated source. */

void FUN_001ef140(int param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 4) = param_2;
  iVar1 = *(int *)(param_2 + 8);
  *(int *)(param_1 + 8) = param_2 + *(short *)(param_2 + 6);
  *(int *)(param_1 + 0xc) = param_2 + iVar1;
  return;
}

