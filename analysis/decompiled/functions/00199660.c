/* Ghidra pseudocode. PS2 address: 00199660. Not validated source. */

void FUN_00199660(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x5d68) == 0) {
    iVar1 = *(int *)(param_1 + 0x5d70);
  }
  else {
    FUN_00103710();
    iVar1 = *(int *)(param_1 + 0x5d70);
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x5d70) = 0;
  }
  else {
    FUN_00103710();
    *(undefined4 *)(param_1 + 0x5d70) = 0;
  }
  *(undefined4 *)(param_1 + 0x5d68) = 0;
  return;
}

