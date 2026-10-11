/* Ghidra pseudocode. PS2 address: 00198e00. Not validated source. */

undefined4 FUN_00198e00(undefined8 param_1,undefined4 *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0x5d7c) == 0xf) {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(iVar4 + 0x5d80) = 0;
    *(int *)(iVar4 + 0x5d6c) = *(int *)(iVar4 + 0x5d68) + 8;
    do {
      FUN_00198d58(param_1);
      if (0x3ff7 < *(int *)(iVar4 + 0x5d80)) {
        iVar3 = *(int *)(iVar4 + 0x5d80);
        goto LAB_00198f94;
      }
      switch(*(int *)(iVar4 + 0x5d7c)) {
      case 0:
        FUN_00198fd0(param_1);
        iVar3 = *(int *)(iVar4 + 0x5d80);
        break;
      case 1:
        FUN_001990a0(param_1);
        iVar3 = *(int *)(iVar4 + 0x5d80);
        break;
      case 2:
        FUN_001990c0(param_1);
        iVar3 = *(int *)(iVar4 + 0x5d80);
        break;
      case 3:
        FUN_001990f8(param_1);
        iVar3 = *(int *)(iVar4 + 0x5d80);
        break;
      case 4:
        FUN_00199148(param_1);
        iVar3 = *(int *)(iVar4 + 0x5d80);
        break;
      case 5:
        FUN_00199188(param_1);
        iVar3 = *(int *)(iVar4 + 0x5d80);
        break;
      case 6:
        FUN_00199280(param_1);
        iVar3 = *(int *)(iVar4 + 0x5d80);
        break;
      case 7:
        FUN_00199298(param_1);
        iVar3 = *(int *)(iVar4 + 0x5d80);
        break;
      case 8:
        FUN_00199380(param_1);
        iVar3 = *(int *)(iVar4 + 0x5d80);
        break;
      case 9:
        FUN_001993b0(param_1);
        iVar3 = *(int *)(iVar4 + 0x5d80);
        break;
      case 10:
        FUN_001994c0(param_1);
        iVar3 = *(int *)(iVar4 + 0x5d80);
        break;
      case 0xb:
        FUN_001994d8(param_1);
        iVar3 = *(int *)(iVar4 + 0x5d80);
        break;
      case 0xc:
        FUN_00199560(param_1);
        iVar3 = *(int *)(iVar4 + 0x5d80);
        break;
      case 0xd:
        FUN_00199600(param_1);
        iVar3 = *(int *)(iVar4 + 0x5d80);
        break;
      case 0xe:
        *(int *)(iVar4 + 0x5d7c) = *(int *)(iVar4 + 0x5d7c) + 1;
      default:
        iVar3 = *(int *)(iVar4 + 0x5d80);
      }
    } while ((iVar3 < 0x3ff8) && (*(int *)(iVar4 + 0x5d7c) != 0xf));
    iVar3 = *(int *)(iVar4 + 0x5d80);
LAB_00198f94:
    uVar2 = 1;
    uVar1 = *(undefined4 *)(iVar4 + 0x5d68);
    *param_3 = iVar3 + 8;
    *param_2 = uVar1;
    *(undefined4 *)(*(int *)(iVar4 + 0x5d68) + 4) = *(undefined4 *)(iVar4 + 0x5d80);
  }
  return uVar2;
}

