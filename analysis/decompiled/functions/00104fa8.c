/* Ghidra pseudocode. PS2 address: 00104fa8. Not validated source. */

void FUN_00104fa8(int param_1)

{
  int iVar1;
  long lVar2;
  
  do {
    if (DAT_002859ec != 0) break;
    lVar2 = FUN_001c3a58(0x2913b0);
  } while (lVar2 == 0);
  FUN_001ee430(param_1 + 0x6cc);
  iVar1 = *(int *)(param_1 + 0x6cf4);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x6cf8);
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0x3d4) + 0x14))
              (iVar1 + *(short *)(*(int *)(iVar1 + 0x3d4) + 0x10));
    *(undefined4 *)(param_1 + 0x6cf4) = 0;
    iVar1 = *(int *)(param_1 + 0x6cf8);
  }
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x3d4) + 0x14))
              (iVar1 + *(short *)(*(int *)(iVar1 + 0x3d4) + 0x10));
    *(undefined4 *)(param_1 + 0x6cf8) = 0;
  }
  return;
}

