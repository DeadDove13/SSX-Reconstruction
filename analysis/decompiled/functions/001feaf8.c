/* Ghidra pseudocode. PS2 address: 001feaf8. Not validated source. */

void FUN_001feaf8(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x100);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 8) + 0xdc))(iVar1 + *(short *)(*(int *)(iVar1 + 8) + 0xd8));
  }
  return;
}

