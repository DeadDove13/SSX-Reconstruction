/* Ghidra pseudocode. PS2 address: 0012c0b0. Not validated source. */

void FUN_0012c0b0(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  lVar3 = 0;
  lVar2 = 1;
  iVar5 = (int)param_1;
  *(undefined4 *)(iVar5 + 0x48) = param_2;
  lVar1 = 2;
  if (*(int *)(iVar5 + 0x34) == 0) {
    lVar3 = 1;
    if (*(int *)(iVar5 + 0x38) == 0) {
      lVar3 = 2;
      lVar2 = 2;
    }
  }
  else if (*(int *)(iVar5 + 0x38) == 0) {
    lVar2 = 2;
    if (*(int *)(iVar5 + 0x3c) == 0) {
      lVar2 = 0;
      lVar1 = 0;
    }
  }
  else if (*(int *)(iVar5 + 0x3c) == 0) {
    lVar1 = lVar2;
  }
  lVar4 = lVar1;
  switch(*(undefined4 *)(iVar5 + 0x48)) {
  case 0:
    lVar1 = lVar2;
    lVar4 = lVar3;
    break;
  case 1:
    lVar1 = lVar2;
    lVar4 = lVar2;
    break;
  case 2:
    lVar4 = lVar2;
    break;
  case 3:
    lVar4 = lVar2;
    lVar3 = lVar2;
    break;
  case 4:
    lVar3 = lVar2;
    break;
  default:
    lVar3 = lVar1;
  }
  if (lVar1 == 1) {
    FUN_0012c390(param_1,0);
  }
  else if (lVar1 == 2) {
    FUN_0012c4a8(param_1,0);
  }
  else {
    FUN_0012c290(param_1,0);
  }
  if (lVar4 == 1) {
    FUN_0012c390(param_1,1);
  }
  else if (lVar4 == 2) {
    FUN_0012c4a8(param_1,1);
  }
  else {
    FUN_0012c290(param_1,1);
  }
  if (lVar3 == 1) {
    FUN_0012c390(param_1,2);
    return;
  }
  if (lVar3 == 2) {
    FUN_0012c4a8(param_1,2);
    return;
  }
  FUN_0012c290(param_1,2);
  return;
}

