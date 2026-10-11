/* Ghidra pseudocode. PS2 address: 0019af18. Not validated source. */

void FUN_0019af18(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0xc);
  *(int *)(param_1 + 0x1400) = param_2;
  *(float *)(param_1 + 0x1414) = (float)iVar1 + 3.0;
  FUN_0019b0e0();
  return;
}

