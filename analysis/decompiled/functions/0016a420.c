/* Ghidra pseudocode. PS2 address: 0016a420. Not validated source. */

void FUN_0016a420(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x44) != 0) {
    (**(code **)(*(int *)(iVar1 + 0x284) + 0x3c))
              (iVar1 + *(short *)(*(int *)(iVar1 + 0x284) + 0x38));
    FUN_0016a470(param_1);
    return;
  }
  return;
}

