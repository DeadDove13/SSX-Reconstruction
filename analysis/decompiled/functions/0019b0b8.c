/* Ghidra pseudocode. PS2 address: 0019b0b8. Not validated source. */

void FUN_0019b0b8(undefined4 param_1,float param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_3 + 0x1400) + 0xc);
  *(undefined4 *)(param_3 + 0x1418) = param_1;
  *(float *)(param_3 + 0x1414) = ((float)iVar1 + 3.0) * param_2;
  return;
}

