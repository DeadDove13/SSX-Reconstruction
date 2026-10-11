/* Ghidra pseudocode. PS2 address: 0022feb8. Not validated source. */

void FUN_0022feb8(int param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = DAT_002a1c9c + param_1 * 0x54;
  if (0 < param_2) {
    if (*(int *)(iVar3 + 0x50) == 0) {
      uVar2 = FUN_00225218(0x40);
      iVar1 = (int)uVar2;
      *(undefined2 *)(iVar1 + 0xc) = 1;
      *(int *)(iVar3 + 0x50) = iVar1;
      *(undefined4 *)(iVar1 + 8) = 0;
      FUN_00232f68(uVar2);
      FUN_00230038(iVar3 + 0x34,*(undefined4 *)(iVar3 + 0x50));
    }
    FUN_00232f90(*(undefined4 *)(iVar3 + 0x50),param_2,DAT_0029a820._6_2_);
    return;
  }
  if (*(int *)(iVar3 + 0x50) != 0) {
    FUN_00230098(iVar3 + 0x34);
    FUN_002253d0(*(undefined4 *)(iVar3 + 0x50));
    *(undefined4 *)(iVar3 + 0x50) = 0;
  }
  return;
}

