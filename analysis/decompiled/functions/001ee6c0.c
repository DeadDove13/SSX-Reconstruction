/* Ghidra pseudocode. PS2 address: 001ee6c0. Not validated source. */

void FUN_001ee6c0(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x6618) = (int)param_2;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x6610)) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      FUN_001edeb0(*(int *)(param_1 + 0x6584) + iVar2,param_2);
      iVar2 = iVar2 + 0x14;
    } while (iVar1 < *(int *)(param_1 + 0x6610));
  }
  return;
}

