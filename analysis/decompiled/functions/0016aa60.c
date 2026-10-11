/* Ghidra pseudocode. PS2 address: 0016aa60. Not validated source. */

undefined8 FUN_0016aa60(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = (**(code **)(*(int *)(param_1 + 0x284) + 0x2c))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x284) + 0x28));
  }
  return uVar1;
}

