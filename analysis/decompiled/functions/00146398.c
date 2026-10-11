/* Ghidra pseudocode. PS2 address: 00146398. Not validated source. */

undefined4 FUN_00146398(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = **(undefined4 **)(param_1 + 4);
  (**(code **)(*(int *)(param_1 + 8) + 0x24))
            (param_1 + *(short *)(*(int *)(param_1 + 8) + 0x20),uVar1);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -4;
  return uVar1;
}

