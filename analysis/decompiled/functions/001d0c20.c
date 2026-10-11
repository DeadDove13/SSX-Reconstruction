/* Ghidra pseudocode. PS2 address: 001d0c20. Not validated source. */

void FUN_001d0c20(int param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_4 * 0x58 + *(int *)(param_1 + 0x28) + 0x20);
  if (iVar1 == 2) {
    iVar2 = 2;
  }
  else if (iVar1 < 3) {
    iVar2 = 0;
    if (iVar1 == 0) {
      iVar2 = 4;
    }
  }
  else {
    iVar2 = 0;
    if (iVar1 == 0x13) {
      iVar2 = 1;
    }
  }
  iVar1 = param_4 * 0x58 + *(int *)(param_1 + 0x28);
  FUN_0023bac0(*(undefined4 *)(iVar1 + 0x2c),param_2,
               *(int *)(iVar1 + 0x10) * *(int *)(iVar1 + 0x18) * iVar2);
  if (*(int *)(param_1 + 0x88) == param_4) {
    *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
    iVar1 = *(int *)(param_1 + 0x54);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54);
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar1 != 0) {
    iVar3 = param_4 * 0x58 + iVar2;
    iVar4 = *(int *)(iVar3 + 0x24);
    if (0 < iVar4) {
      *(undefined4 *)(iVar4 * 0x14 + iVar1 + 4) = 0xffffffff;
      *(undefined4 *)(iVar3 + 0x24) = 0xffffffff;
    }
  }
  iVar2 = param_4 * 0x58 + iVar2;
  if (*(int *)(iVar2 + 0x20) == 0x13) {
    iVar1 = *(int *)(iVar2 + 0x38);
    iVar2 = 7;
    do {
      iVar2 = iVar2 + -1;
      FUN_0023bac0(iVar1,param_3,0x20);
      FUN_0023bac0(iVar1 + 0x20,param_3 + 0x40,0x20);
      FUN_0023bac0(iVar1 + 0x40,param_3 + 0x20,0x20);
      iVar4 = param_3 + 0x60;
      param_3 = param_3 + 0x80;
      FUN_0023bac0(iVar1 + 0x60,iVar4,0x20);
      iVar1 = iVar1 + 0x80;
    } while (-1 < iVar2);
    if (*(int *)(param_1 + 0x84) != 0) {
      iVar2 = param_4 * 0x58 + *(int *)(param_1 + 0x28);
      iVar1 = *(int *)(iVar2 + 0x30);
      if (-1 < iVar1) {
        *(undefined4 *)(iVar1 * 0x10 + *(int *)(param_1 + 0x84) + 0xc) = 0xffffffff;
        *(undefined4 *)(iVar2 + 0x30) = 0xffffffff;
      }
    }
  }
  return;
}

