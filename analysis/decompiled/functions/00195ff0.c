/* Ghidra pseudocode. PS2 address: 00195ff0. Not validated source. */

undefined4 FUN_00195ff0(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x4c) == 0) {
    *(undefined4 *)(iVar2 + 0x4c) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    FUN_0015f700(0);
    *(undefined4 *)(iVar2 + 0x4c) = 0;
  }
  FUN_00196720(param_1);
  if (*(int *)(iVar2 + 0x44) == 0) {
    *(undefined4 *)(iVar2 + 0x3928) = 0;
    FUN_00193ea8(param_1,*(undefined4 *)(iVar2 + 0x14));
    if (*(int *)(iVar2 + 0x48) == 0) {
      FUN_001938b8(param_1,*(undefined4 *)(iVar2 + 0x14));
      *(undefined4 *)(iVar2 + 0x14) = 0;
      uVar1 = FUN_001032d0(*(undefined4 *)(DAT_002859e4 + 0x18));
      *(undefined4 *)(iVar2 + 0x18) = 0;
    }
    else {
      uVar1 = FUN_001032d0(*(undefined4 *)(DAT_002859e4 + 0x18));
      *(undefined4 *)(iVar2 + 0x18) = 0xd;
    }
  }
  else {
    uVar1 = *(undefined4 *)(iVar2 + 0x14);
  }
  return uVar1;
}

