/* Ghidra pseudocode. PS2 address: 0014b9a0. Not validated source. */

int FUN_0014b9a0(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 0x1dc);
  FUN_001eacb0(param_3);
  if (iVar1 == 0x55) {
    iVar1 = *(int *)(param_2 + 0x220);
    uVar2 = 0x5d;
  }
  else if (iVar1 == 0x56) {
    iVar1 = *(int *)(param_2 + 0x220);
    uVar2 = 0x5e;
  }
  else if (iVar1 == 0x57) {
    iVar1 = *(int *)(param_2 + 0x220);
    uVar2 = 0x5f;
  }
  else if (iVar1 == 0x58) {
    iVar1 = *(int *)(param_2 + 0x220);
    uVar2 = 0x60;
  }
  else if (iVar1 == 0x59) {
    iVar1 = *(int *)(param_2 + 0x220);
    uVar2 = 0x61;
  }
  else if (iVar1 == 0x5a) {
    iVar1 = *(int *)(param_2 + 0x220);
    uVar2 = 0x62;
  }
  else if (iVar1 == 0x5b) {
    iVar1 = *(int *)(param_2 + 0x220);
    uVar2 = 99;
  }
  else if (iVar1 == 0x5c) {
    iVar1 = *(int *)(param_2 + 0x220);
    uVar2 = 100;
  }
  else if (iVar1 == 0xb1) {
    iVar1 = *(int *)(param_2 + 0x220);
    uVar2 = 99;
  }
  else if (iVar1 == 0xb0) {
    iVar1 = *(int *)(param_2 + 0x220);
    uVar2 = 100;
  }
  else if (iVar1 == 0xb2) {
    iVar1 = *(int *)(param_2 + 0x220);
    uVar2 = 0x5e;
  }
  else if (iVar1 == 0xb3) {
    iVar1 = *(int *)(param_2 + 0x220);
    uVar2 = 0x5d;
  }
  else if (iVar1 == 0xb5) {
    iVar1 = *(int *)(param_2 + 0x220);
    uVar2 = 99;
  }
  else if (iVar1 == 0xb4) {
    iVar1 = *(int *)(param_2 + 0x220);
    uVar2 = 100;
  }
  else if (iVar1 == 0xb6) {
    iVar1 = *(int *)(param_2 + 0x220);
    uVar2 = 0x5e;
  }
  else if (iVar1 == 0xb7) {
    iVar1 = *(int *)(param_2 + 0x220);
    uVar2 = 0x5d;
  }
  else {
    if ((iVar1 != 0xae) && (iVar1 != 0xaf)) {
      return iVar1;
    }
    iVar1 = *(int *)(param_2 + 0x220);
    uVar2 = 0x52;
  }
  iVar1 = FUN_0014cd18(*(undefined4 *)(iVar1 + 0x6cf4),uVar2,0,5);
  return iVar1;
}

