/* Ghidra pseudocode. PS2 address: 0015ea60. Not validated source. */

void FUN_0015ea60(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x200) != 0) {
    iVar5 = 0;
    iVar3 = 0;
    do {
      iVar5 = iVar5 + 1;
      if (*(int *)(iVar3 + param_1 + 0x220) != 0) {
        iVar4 = 0;
        if (0 < DAT_0027b810) {
          do {
            iVar2 = FUN_00189b78(DAT_002859e4,iVar4);
            iVar1 = *(int *)(iVar2 + 0x6cf4);
            if (iVar1 == 0) {
              iVar1 = *(int *)(iVar2 + 0x6cf8);
            }
            else {
              (**(code **)(*(int *)(iVar1 + 0x3d4) + 0x14))
                        (iVar1 + *(short *)(*(int *)(iVar1 + 0x3d4) + 0x10));
              iVar1 = *(int *)(iVar2 + 0x6cf8);
            }
            if (iVar1 != 0) {
              (**(code **)(*(int *)(iVar1 + 0x3d4) + 0x14))
                        (iVar1 + *(short *)(*(int *)(iVar1 + 0x3d4) + 0x10));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < DAT_0027b810);
        }
        *(undefined4 *)(iVar3 + param_1 + 0x220) = 0;
      }
      iVar3 = iVar5 * 0x40;
    } while (iVar5 < 8);
    *(undefined4 *)(param_1 + 0x200) = 0;
  }
  return;
}

