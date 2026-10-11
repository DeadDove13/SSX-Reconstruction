/* Ghidra pseudocode. PS2 address: 00126cc8. Not validated source. */

void FUN_00126cc8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar2 = *(int *)(param_1 + 0x38) + -1;
  *(int *)(param_1 + 0x38) = iVar2;
  if (iVar2 < 1) {
    lVar3 = FUN_00222970(0x299cc8,*(undefined4 *)(param_1 + 0x28),4);
    if (lVar3 != -1) {
      lVar4 = FUN_002107c8(0x298590,0xf0,0x40000000,0x2c40e8,0,0);
      if (lVar4 == 0) {
        uVar1 = *(undefined4 *)(param_1 + 0x28);
      }
      else {
        FUN_0023bbd0(lVar4,0xffffffffdeadc0de,0xf0);
        uVar1 = *(undefined4 *)(param_1 + 0x28);
      }
      FUN_00122ca8(lVar4,3,lVar3,uVar1,0,0,0);
    }
    (**(code **)(*(int *)(param_1 + 8) + 0xb4))
              (param_1 + *(short *)(*(int *)(param_1 + 8) + 0xb0),0);
  }
  iVar2 = *(int *)(param_1 + 0x34) + -1;
  if ((0 < *(int *)(param_1 + 0x34)) && (*(int *)(param_1 + 0x34) = iVar2, iVar2 == 0)) {
    (**(code **)(*(int *)(param_1 + 8) + 0xb4))
              (param_1 + *(short *)(*(int *)(param_1 + 8) + 0xb0),1);
  }
  return;
}

