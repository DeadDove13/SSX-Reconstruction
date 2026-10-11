/* Ghidra pseudocode. PS2 address: 00193780. Not validated source. */

int FUN_00193780(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00193838();
    iVar1 = *(int *)(param_1 + 4);
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
  }
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 0x28);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  return iVar1;
}

