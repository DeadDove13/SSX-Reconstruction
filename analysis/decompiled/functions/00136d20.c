/* Ghidra pseudocode. PS2 address: 00136d20. Not validated source. */

void FUN_00136d20(float param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_00137ea0(0x40200000,param_2,9,(int)param_1);
  iVar1 = (int)param_2;
  if ((int)param_1 == 1) {
    *(int *)(iVar1 + 0x8c) = *(int *)(iVar1 + 0x8c) + 1;
  }
  if ((int)param_1 == 5) {
    *(int *)(iVar1 + 0x90) = *(int *)(iVar1 + 0x90) + 1;
  }
  if ((int)param_1 == 10) {
    *(int *)(iVar1 + 0x94) = *(int *)(iVar1 + 0x94) + 1;
  }
  return;
}

