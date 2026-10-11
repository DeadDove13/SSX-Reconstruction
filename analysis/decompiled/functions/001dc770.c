/* Ghidra pseudocode. PS2 address: 001dc770. Not validated source. */

void FUN_001dc770(float param_1,float param_2,int param_3)

{
  *(float *)(param_3 + 0x10) = param_2 - param_1;
  *(float *)(param_3 + 0x18) = param_1 - (param_2 - param_1);
  return;
}

