/* Ghidra pseudocode. PS2 address: 00123fb8. Not validated source. */

void FUN_00123fb8(int param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xe4) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0xe4) + 0x100);
    if (iVar2 == 0) {
      iVar2 = *(int *)((int)param_2 + 4);
      goto LAB_00123ffc;
    }
    if (*(int *)(iVar2 + 0x14) == 5) {
      return;
    }
  }
  iVar2 = *(int *)((int)param_2 + 4);
LAB_00123ffc:
  if (iVar2 == 1) {
    lVar1 = FUN_002107c8(0x298590,0xb0,0x40000000,0x2a8ea8,0,0);
    if (lVar1 != 0) {
      FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0xb0);
    }
    FUN_001e6b68(lVar1,3,*(undefined4 *)(param_1 + 0xe4),param_2);
  }
  else if (iVar2 < 2) {
    if (((iVar2 == 0) && (lVar1 = FUN_002107c8(0x298590,400,0x60000000,0x2c40d8,0,0), lVar1 != 0))
       && (FUN_0023bbd0(lVar1,0xffffffffdeadc0ed,400), lVar1 != 0)) {
      FUN_0012e908(lVar1,4,*(undefined4 *)(param_1 + 0xe4),param_2);
    }
  }
  else if ((iVar2 == 2) && (iVar2 = *(int *)(*(int *)(param_1 + 0xe4) + 0x100), iVar2 != 0)) {
    (**(code **)(*(int *)(iVar2 + 8) + 0xd4))
              (iVar2 + *(short *)(*(int *)(iVar2 + 8) + 0xd0),param_2);
  }
  return;
}

