/* Ghidra pseudocode. PS2 address: 00100db0. Not validated source. */

void FUN_00100db0(int param_1,undefined8 param_2)

{
  if ((*(int *)(DAT_002859e4 + 0x38) == 0) ||
     (FUN_00195758(), *(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x44) == 0)) {
    (**(code **)(*(int *)(param_1 + 8) + 0x94))
              (param_1 + *(short *)(*(int *)(param_1 + 8) + 0x90),param_2);
    (**(code **)(*(int *)(param_1 + 8) + 0x54))
              (param_1 + *(short *)(*(int *)(param_1 + 8) + 0x50),5);
  }
  else {
    (**(code **)(*(int *)(param_1 + 8) + 0x54))
              (param_1 + *(short *)(*(int *)(param_1 + 8) + 0x50),10);
  }
  return;
}

