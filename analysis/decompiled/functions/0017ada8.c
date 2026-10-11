/* Ghidra pseudocode. PS2 address: 0017ada8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0017ae00) */

void FUN_0017ada8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x334) + 0xb3c) + *(char *)(param_1 + 0x298) * 4 +
                  0x364);
  if ((*(int *)(iVar1 + 0x6cf4) == 0) && (*(int *)(iVar1 + 0x6c4c) == 0)) {
    return;
  }
  iVar2 = FUN_002109b0();
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x334) + 0xb3c);
  iVar5 = 0;
  if (*(int *)(*(int *)(param_1 + 0x334) + 0xb38) != 5) {
    iVar5 = iVar2 % 3;
  }
  *(int *)(param_1 + 0x290) = iVar5;
  uVar3 = FUN_00168268(uVar4,*(undefined1 *)(param_1 + 0x298));
  switch(uVar3) {
  case 0:
    if (iVar5 == 0) {
      uVar3 = 0x128;
    }
    else {
      uVar3 = 0x12a;
      if (iVar5 != 1) {
        uVar4 = *(undefined4 *)(iVar1 + 0x6cf4);
        goto LAB_0017af34;
      }
      uVar3 = 0x129;
    }
    break;
  case 1:
    uVar3 = 0x156;
    break;
  case 2:
    uVar3 = 0x148;
    break;
  case 3:
    uVar3 = 0x166;
    break;
  case 4:
    if (iVar5 == 0) {
      uVar3 = 0x175;
    }
    else {
      uVar3 = 0x176;
      if (iVar5 != 1) {
        uVar4 = *(undefined4 *)(iVar1 + 0x6cf4);
        goto LAB_0017af34;
      }
      uVar3 = 0x174;
    }
    break;
  default:
    if (iVar5 == 0) {
      uVar3 = 0x185;
    }
    else {
      uVar3 = 0x184;
      if (iVar5 != 1) {
        uVar4 = *(undefined4 *)(iVar1 + 0x6cf4);
        goto LAB_0017af34;
      }
      uVar3 = 0x186;
    }
    break;
  case 6:
    if (iVar5 == 0) {
      uVar3 = 0x138;
    }
    else {
      uVar3 = 0x13a;
      if (iVar5 != 1) {
        uVar4 = *(undefined4 *)(iVar1 + 0x6cf4);
        goto LAB_0017af34;
      }
      uVar3 = 0x139;
    }
    break;
  case 7:
    if (iVar5 == 0) {
      uVar3 = 0x118;
    }
    else {
      uVar3 = 0x11a;
      if (iVar5 != 1) {
        uVar4 = *(undefined4 *)(iVar1 + 0x6cf4);
        goto LAB_0017af34;
      }
      uVar3 = 0x119;
    }
  }
  uVar4 = *(undefined4 *)(iVar1 + 0x6cf4);
LAB_0017af34:
  FUN_0014cd18(uVar4,uVar3,0,5);
  return;
}

