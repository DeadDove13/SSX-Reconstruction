/* Ghidra pseudocode. PS2 address: 001f50c0. Not validated source. */

void FUN_001f50c0(undefined8 param_1,int param_2)

{
  float fVar1;
  undefined1 auStack_40 [32];
  
  fVar1 = (float)(**(code **)(*(int *)(param_2 + 0x32000) + 0x34))
                           (param_2 + *(short *)(*(int *)(param_2 + 0x32000) + 0x30),param_1,
                            auStack_40);
  *(float *)((int)param_1 + 0x5c) = SQRT(fVar1);
  return;
}

