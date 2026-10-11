/* Ghidra pseudocode. PS2 address: 00126ac8. Not validated source. */

void FUN_00126ac8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c) + -1;
  if ((0 < *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) = iVar1, iVar1 == 0)) {
    (**(code **)(*(int *)(param_1 + 8) + 0xb4))
              (param_1 + *(short *)(*(int *)(param_1 + 8) + 0xb0),1);
  }
  return;
}

