/* Ghidra pseudocode. PS2 address: 0017abc8. Not validated source. */

void FUN_0017abc8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x334) + 0xb3c);
  iVar2 = *(int *)(iVar1 + *(char *)(param_1 + 0x298) * 4 + 0x364);
  if (*(int *)(iVar2 + 0x6cf4) == 0) {
    if (*(int *)(iVar2 + 0x6c4c) == 0) {
      return;
    }
    iVar5 = *(int *)(param_1 + 0x290);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x290);
  }
  uVar3 = FUN_00168268(iVar1);
  switch(uVar3) {
  case 0:
    if (iVar5 == 0) {
      uVar3 = 0x125;
    }
    else {
      uVar3 = 0x127;
      if (iVar5 != 1) {
        uVar4 = *(undefined4 *)(iVar2 + 0x6cf4);
        goto LAB_0017ad7c;
      }
      uVar3 = 0x126;
    }
    break;
  case 1:
    if (iVar5 == 0) {
      uVar3 = 0x153;
    }
    else {
      uVar3 = 0x155;
      if (iVar5 != 1) {
        uVar4 = *(undefined4 *)(iVar2 + 0x6cf4);
        goto LAB_0017ad7c;
      }
      uVar3 = 0x154;
    }
    break;
  case 2:
    if (iVar5 == 0) {
      uVar3 = 0x145;
    }
    else {
      uVar3 = 0x147;
      if (iVar5 != 1) {
        uVar4 = *(undefined4 *)(iVar2 + 0x6cf4);
        goto LAB_0017ad7c;
      }
      uVar3 = 0x146;
    }
    break;
  case 3:
    if (iVar5 == 0) {
      uVar3 = 0x165;
    }
    else {
      uVar3 = 0x163;
      if (iVar5 != 1) {
        uVar4 = *(undefined4 *)(iVar2 + 0x6cf4);
        goto LAB_0017ad7c;
      }
      uVar3 = 0x164;
    }
    break;
  case 4:
    if (iVar5 == 0) {
      uVar3 = 0x172;
    }
    else {
      uVar3 = 0x173;
      if (iVar5 != 1) {
        uVar4 = *(undefined4 *)(iVar2 + 0x6cf4);
        goto LAB_0017ad7c;
      }
      uVar3 = 0x171;
    }
    break;
  default:
    if (iVar5 == 0) {
      uVar3 = 0x182;
    }
    else {
      uVar3 = 0x181;
      if (iVar5 != 1) {
        uVar4 = *(undefined4 *)(iVar2 + 0x6cf4);
        goto LAB_0017ad7c;
      }
      uVar3 = 0x183;
    }
    break;
  case 6:
    if (iVar5 == 0) {
      uVar3 = 0x135;
    }
    else {
      uVar3 = 0x137;
      if (iVar5 != 1) {
        uVar4 = *(undefined4 *)(iVar2 + 0x6cf4);
        goto LAB_0017ad7c;
      }
      uVar3 = 0x136;
    }
    break;
  case 7:
    if (iVar5 == 0) {
      uVar3 = 0x115;
    }
    else {
      uVar3 = 0x117;
      if (iVar5 != 1) {
        uVar4 = *(undefined4 *)(iVar2 + 0x6cf4);
        goto LAB_0017ad7c;
      }
      uVar3 = 0x116;
    }
  }
  uVar4 = *(undefined4 *)(iVar2 + 0x6cf4);
LAB_0017ad7c:
  FUN_0014cd18(uVar4,uVar3,0,5);
  return;
}

