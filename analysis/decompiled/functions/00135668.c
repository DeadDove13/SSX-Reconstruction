/* Ghidra pseudocode. PS2 address: 00135668. Not validated source. */

void FUN_00135668(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00107a40(*param_1);
  if (*(int *)(DAT_002859e4 + 0x38) == 0) {
    uVar1 = param_1[0x229];
  }
  else {
    iVar2 = *(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x18);
    if (iVar2 != 0 && iVar2 < 10) {
      return;
    }
    uVar1 = param_1[0x229];
  }
  FUN_00133250(uVar1,param_3,param_4);
  return;
}

