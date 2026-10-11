/* Ghidra pseudocode. PS2 address: 00105698. Not validated source. */

void FUN_00105698(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x6cf4) == 0) {
    iVar2 = param_1 + 0x6d5c;
    if (*(int *)(param_1 + 0x344) == 2) {
      FUN_0010de58(iVar2);
      *(undefined **)(param_1 + 0x7130) = &DAT_002a86d8;
      *(undefined **)(param_1 + 0x71b8) = &DAT_002aeb78;
      *(undefined **)(param_1 + 0x71bc) = &DAT_002aeb68;
    }
    else {
      FUN_0010de58(iVar2);
      *(undefined **)(param_1 + 0x7130) = &DAT_002a86b0;
      *(undefined **)(param_1 + 0x71b8) = &DAT_002aeb88;
    }
    *(int *)(param_1 + 0x6cf4) = iVar2;
    iVar2 = *(int *)(param_1 + 0x6cf4);
    *(int *)(iVar2 + 0x3c8) = param_1;
    *(int *)(iVar2 + 0x3cc) = iVar2;
    *(int *)(iVar2 + 0x1c) = param_1;
    (**(code **)(*(int *)(iVar2 + 0x3d4) + 0x14))
              (iVar2 + *(short *)(*(int *)(iVar2 + 0x3d4) + 0x10));
    iVar2 = *(int *)(*(int *)(param_1 + 0x394) + 0x40);
    if ((((iVar2 == 7) || (iVar2 == 1)) || (iVar2 == 5)) ||
       (((iVar2 == 0xf || (iVar2 == 9)) || (iVar2 == 0xd)))) {
      iVar1 = FUN_00151170(param_1 + 0x71c0,*(undefined4 *)(*(int *)(param_1 + 0x394) + 0x40));
      iVar2 = *(int *)(iVar1 + 0x3d4);
      *(int *)(iVar1 + 0x3c8) = param_1;
      *(int *)(iVar1 + 0x3cc) = iVar1;
      *(int *)(iVar1 + 0x1c) = param_1;
      *(int *)(param_1 + 0x6cf8) = iVar1;
      (**(code **)(iVar2 + 0x14))(iVar1 + *(short *)(iVar2 + 0x10));
    }
  }
  return;
}

