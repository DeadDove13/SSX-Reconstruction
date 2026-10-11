/* Ghidra pseudocode. PS2 address: 0012af68. Not validated source. */

void FUN_0012af68(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 0x3c) + -1;
  if ((*(int *)(param_1 + 0x3c) < 1) || (*(int *)(param_1 + 0x3c) = iVar1, iVar1 != 0)) {
    fVar2 = *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x44);
    *(float *)(param_1 + 0x38) = fVar2;
    if (1.0 <= fVar2) {
      *(float *)(param_1 + 0x38) = fVar2 - 1.0;
    }
  }
  else {
    (**(code **)(*(int *)(param_1 + 8) + 0xb4))
              (param_1 + *(short *)(*(int *)(param_1 + 8) + 0xb0),1);
  }
  return;
}

