/* Ghidra pseudocode. PS2 address: 001ee1b8. Not validated source. */

void FUN_001ee1b8(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      FUN_001ebf28(*(int *)(param_1 + 0xc) + iVar2,param_2);
      iVar2 = iVar2 + 0x34;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  return;
}

