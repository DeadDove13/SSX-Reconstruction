/* Ghidra pseudocode. PS2 address: 00195b78. Not validated source. */

void FUN_00195b78(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  switch(*(undefined4 *)(iVar4 + 0x20)) {
  case 1:
    *(undefined4 *)(iVar4 + 0x3928) = 0;
    FUN_001939f8(param_1);
    FUN_00194de8(param_1,1);
    uVar2 = 5;
    if (*(int *)(iVar4 + 0x2c) == 0) {
      uVar2 = 6;
    }
    goto LAB_00195ccc;
  case 2:
    *(undefined4 *)(iVar4 + 0x3928) = 0;
    FUN_00193a88(param_1);
    FUN_00194de8(param_1,1);
    uVar2 = 5;
    if (*(int *)(iVar4 + 0x2c) == 0) {
      uVar2 = 6;
    }
    goto LAB_00195ccc;
  case 3:
    *(undefined4 *)(iVar4 + 0x3928) = 0;
    iVar3 = FUN_00195330(param_1,*(undefined4 *)(iVar4 + 0x2c));
    iVar1 = *(int *)(iVar3 + 0x38);
    *(int *)(iVar4 + 0xc) = iVar3;
    if (*(int *)(iVar4 + 0x2c) == iVar1) {
      FUN_00195708(param_1);
    }
    else if ((*(int *)(iVar3 + 0x28) != 0) &&
            (*(int *)(*(int *)(iVar3 + 0x28) + 0x38) == *(int *)(iVar4 + 0x2c))) {
      FUN_00195708(param_1);
    }
    FUN_00194de8(param_1,1);
    uVar2 = 5;
    if (*(int *)(iVar4 + 0x2c) == 0) {
      uVar2 = 6;
    }
    goto LAB_00195ccc;
  case 4:
    *(undefined4 *)(iVar4 + 0x3928) = 0;
    if (*(int *)(*(int *)(iVar4 + 0xc) + 0x28) == 0) {
      *(undefined4 *)(iVar4 + 0x20) = 0;
      return;
    }
    FUN_001956b8(param_1);
    FUN_00194de8(param_1,1);
    uVar2 = 5;
LAB_00195ccc:
    *(undefined4 *)(iVar4 + 0x18) = uVar2;
    FUN_0015c970();
    *(undefined4 *)(iVar4 + 0x20) = 0;
    return;
  case 5:
    *(undefined4 *)(iVar4 + 0x3928) = 0;
    FUN_00194de8(param_1,0);
    *(undefined4 *)(iVar4 + 0x18) = 4;
    break;
  case 6:
    if (*(int *)(iVar4 + 0x18) == 3) {
      *(undefined4 *)(iVar4 + 0x18) = 1;
    }
    else {
      *(undefined4 *)(iVar4 + 0x18) = 3;
    }
    break;
  case 7:
    *(undefined4 *)(iVar4 + 0x18) = 3;
    break;
  case 8:
    *(undefined4 *)(iVar4 + 0x18) = 2;
    break;
  case 9:
  case 10:
    FUN_001939f8(param_1);
    FUN_00194de8(param_1,1);
    *(undefined4 *)(iVar4 + 0x18) = 5;
    break;
  default:
    if (*(int *)(iVar4 + 0x18) != 3) {
      *(undefined4 *)(iVar4 + 0x40) = 1;
      FUN_00194de8(param_1,0);
    }
  }
  *(undefined4 *)(iVar4 + 0x20) = 0;
  return;
}

