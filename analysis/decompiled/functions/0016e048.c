/* Ghidra pseudocode. PS2 address: 0016e048. Not validated source. */

void FUN_0016e048(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = FUN_0016dd88();
  *(float *)(iVar1 + 0x88) = (float)param_3;
  *(float *)(iVar1 + 0x84) = (float)param_4;
  *(float *)(iVar1 + 0x80) = (float)param_5;
  return;
}

