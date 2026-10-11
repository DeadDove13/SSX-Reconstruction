/* Ghidra pseudocode. PS2 address: 001c3948. Not validated source. */

void FUN_001c3948(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x29c) + 1;
  *(int *)(param_1 + 0x29c) = iVar1;
  if ((*(int *)(param_1 + 0x280) == 4) && (*(int *)(param_1 + 0x298) <= iVar1)) {
    *(undefined4 *)(param_1 + 0x280) = 5;
    *(undefined4 *)(param_1 + 0x29c) = 0;
    iSignalSema(*(undefined4 *)(param_1 + 0x2a8));
    return;
  }
  return;
}

