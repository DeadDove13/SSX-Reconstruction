/* Ghidra pseudocode. PS2 address: 001d9d78. Not validated source. */

void FUN_001d9d78(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x170);
  if (*(int *)(param_1 + 4) == 0) {
    (**(code **)(iVar1 + 0xc4))(param_1 + *(short *)(iVar1 + 0xc0));
  }
  else {
    (**(code **)(iVar1 + 0x6c))(param_1 + *(short *)(iVar1 + 0x68));
  }
  return;
}

