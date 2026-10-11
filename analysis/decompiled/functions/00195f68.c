/* Ghidra pseudocode. PS2 address: 00195f68. Not validated source. */

void FUN_00195f68(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00196720();
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x44) == 0) {
    if (*(int *)(iVar2 + 0x14) == 0) {
      uVar1 = FUN_00193c38(param_1,1,*(undefined4 *)(iVar2 + 0x24),1);
      *(undefined4 *)(iVar2 + 0x14) = uVar1;
      *(undefined4 *)(iVar2 + 0x3928) = param_3;
    }
    else {
      *(undefined4 *)(iVar2 + 0x3928) = param_3;
    }
  }
  else {
    *(undefined4 *)(iVar2 + 0x3928) = param_3;
  }
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 7;
  FUN_001939f8(param_1);
  FUN_00194de8(param_1,1);
  return;
}

