/* Ghidra pseudocode. PS2 address: 001cb610. Not validated source. */

void FUN_001cb610(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + 1;
    *(undefined4 *)(param_1 + 0x14b8 + iVar1 + *(int *)(param_1 + 0x1468) * 8) = 0;
    iVar1 = *(int *)(param_1 + 0x1468) * 0x700 + iVar3;
    iVar3 = iVar3 + 0x380;
    *(undefined4 *)(param_1 + iVar1 + 0x3cd0) = 0;
  } while (iVar2 < 2);
  return;
}

