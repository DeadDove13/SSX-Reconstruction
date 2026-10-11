/* Ghidra pseudocode. PS2 address: 001eeab0. Not validated source. */

void FUN_001eeab0(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_001ee7d8(param_1,*(undefined4 *)(iVar1 + 0x6618));
  if (*(int *)(iVar1 + 0x6610) <= param_2) {
    param_2 = *(int *)(iVar1 + 0x6610) + -1;
  }
  FUN_001ee058(*(int *)(iVar1 + 0x6584) + param_2 * 0x14);
  return;
}

