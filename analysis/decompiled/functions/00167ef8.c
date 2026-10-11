/* Ghidra pseudocode. PS2 address: 00167ef8. Not validated source. */

void FUN_00167ef8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00222170(0x299cc8);
  FUN_00169be8(param_1 + 0x4c8);
  FUN_00169be8(param_1 + 0x498);
  FUN_00168730(0x295e90);
  iVar1 = *(int *)(param_1 + 0x488);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x4c4);
  }
  else {
    (**(code **)(*(int *)(iVar1 + 4) + 0x54))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x50));
    iVar1 = *(int *)(param_1 + 0x488);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 4) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 8),3);
    }
    *(undefined4 *)(param_1 + 0x488) = 0;
    uVar2 = *(undefined4 *)(param_1 + 0x4c4);
  }
  FUN_00103778(uVar2);
  return;
}

