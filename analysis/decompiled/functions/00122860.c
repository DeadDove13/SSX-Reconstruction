/* Ghidra pseudocode. PS2 address: 00122860. Not validated source. */

void FUN_00122860(int param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(short *)(param_1 + 0x34) < 1) {
    lVar2 = FUN_00222970(0x299cc8,*(undefined4 *)(param_1 + 0x28),4);
    if (lVar2 < 0) {
      iVar1 = *(int *)(param_1 + 8);
    }
    else {
      FUN_00124338(lVar2,*(undefined4 *)(param_1 + 0x28));
      iVar1 = *(int *)(param_1 + 8);
    }
    (**(code **)(iVar1 + 0xb4))(param_1 + *(short *)(iVar1 + 0xb0),0);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x38) + -1;
    if ((0 < *(int *)(param_1 + 0x38)) && (*(int *)(param_1 + 0x38) = iVar1, iVar1 == 0)) {
      (**(code **)(*(int *)(param_1 + 8) + 0xb4))
                (param_1 + *(short *)(*(int *)(param_1 + 8) + 0xb0),1);
    }
  }
  return;
}

