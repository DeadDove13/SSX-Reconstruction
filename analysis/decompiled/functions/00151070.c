/* Ghidra pseudocode. PS2 address: 00151070. Not validated source. */

uint FUN_00151070(int param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  
  switch(param_2) {
  case 1:
    lVar2 = FUN_00148998(param_1 + 0x20,*(undefined4 *)(param_1 + 8));
    if (lVar2 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = *(int *)((int)lVar2 + 0x214) >> 3 & 1;
    }
    break;
  case 2:
    lVar2 = FUN_00148998(param_1 + 0x20,*(undefined4 *)(param_1 + 8));
    if (lVar2 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = *(int *)((int)lVar2 + 0x214) >> 4 & 1;
    }
    break;
  case 3:
    lVar2 = FUN_00148998(param_1 + 0x20,*(undefined4 *)(param_1 + 8));
    if (lVar2 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = *(int *)((int)lVar2 + 0x214) >> 5 & 1;
    }
    break;
  case 4:
    lVar2 = FUN_00148998(param_1 + 0x20,*(undefined4 *)(param_1 + 8));
    if (lVar2 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = *(int *)((int)lVar2 + 0x214) >> 6 & 1;
    }
    break;
  default:
    uVar1 = 0;
    break;
  case 7:
    lVar2 = FUN_00148998(param_1 + 0x20,*(undefined4 *)(param_1 + 8));
    if (lVar2 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = *(int *)((int)lVar2 + 0x214) >> 1 & 1;
    }
  }
  return uVar1;
}

