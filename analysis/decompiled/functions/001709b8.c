/* Ghidra pseudocode. PS2 address: 001709b8. Not validated source. */

undefined8 FUN_001709b8(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0xb10) != 0) {
    uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x8c))
                      (param_1 + *(short *)(*(int *)(param_1 + 4) + 0x88));
  }
  return uVar1;
}

