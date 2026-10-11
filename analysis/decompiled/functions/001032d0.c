/* Ghidra pseudocode. PS2 address: 001032d0. Not validated source. */

void FUN_001032d0(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  for (iVar3 = 0; iVar3 < *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c); iVar3 = iVar3 + 1) {
    uVar1 = FUN_00189b78(DAT_002859e4,iVar3);
    iVar2 = (int)uVar1;
    if (*(int *)(iVar2 + 0x6c4c) != 0) {
      FUN_0014cb38(*(undefined4 *)(iVar2 + 0x6cf4));
      if (*(int *)(iVar2 + 0x6cf8) != 0) {
        FUN_0014cb38();
      }
      FUN_00113180(uVar1);
    }
    FUN_00110e58(uVar1);
    *(undefined4 *)(iVar2 + 0x36c) = *(undefined4 *)(iVar2 + 0xf0);
  }
  FUN_00132490(*(undefined4 *)(DAT_002859e4 + 0x28));
  FUN_00132a98(*(undefined4 *)(DAT_002859e4 + 0x28));
  return;
}

