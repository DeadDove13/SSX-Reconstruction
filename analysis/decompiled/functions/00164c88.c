/* Ghidra pseudocode. PS2 address: 00164c88. Not validated source. */

void FUN_00164c88(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar1 != 0) {
    if (*(short *)(iVar1 + 0x36) == 0) {
      if (*(short *)(iVar1 + 0x34) == 1) {
        FUN_001f5d08(0x3f000000,DAT_002c56e8,*(undefined4 *)(param_1 + 0x14));
        uVar2 = *(uint *)(iVar1 + 0x40);
      }
      else {
        uVar2 = *(uint *)(iVar1 + 0x40);
      }
    }
    else {
      uVar2 = *(uint *)(iVar1 + 0x40);
    }
    *(uint *)(iVar1 + 0x40) = uVar2 & 0xfffffffd;
  }
  return;
}

