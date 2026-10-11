/* Ghidra pseudocode. PS2 address: 001d2340. Not validated source. */

void FUN_001d2340(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar2 = 0;
    do {
      if (*(int *)(iVar2 + *(int *)(param_1 + 0x28) + 0x28) == 0) {
        iVar1 = *(int *)(param_1 + 0x28);
      }
      else {
        FUN_00103710();
        *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x28) + 0x28) = 0;
        iVar1 = *(int *)(param_1 + 0x28);
      }
      if (*(int *)(iVar2 + iVar1 + 0x34) == 0) {
        iVar1 = *(int *)(param_1 + 0x24);
      }
      else {
        FUN_00103710();
        *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x28) + 0x34) = 0;
        iVar1 = *(int *)(param_1 + 0x24);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x58;
    } while (iVar3 < iVar1);
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  return;
}

