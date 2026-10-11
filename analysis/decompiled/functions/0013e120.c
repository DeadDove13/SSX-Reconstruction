/* Ghidra pseudocode. PS2 address: 0013e120. Not validated source. */

void FUN_0013e120(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  switch(*(undefined4 *)(param_1 + 8)) {
  case 1:
    iVar1 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(iVar1 + 0x16c) = 4;
    FUN_0014cd18(*(undefined4 *)(iVar1 + 0x6cf4),0x97,0,5);
  default:
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  case 2:
    iVar1 = *(int *)(param_1 + 0x14);
    uVar2 = 3;
    uVar3 = 0x96;
    break;
  case 3:
    iVar1 = *(int *)(param_1 + 0x14);
    uVar2 = 1;
    uVar3 = 0x94;
    break;
  case 4:
    iVar1 = *(int *)(param_1 + 0x14);
    if (*(int *)(iVar1 + 0x344) == 2) {
      *(uint *)(iVar1 + 0x144) = *(uint *)(iVar1 + 0x144) ^ 1;
    }
    else {
      *(undefined4 *)(iVar1 + 0x144) = 1;
      *(undefined4 *)(*(int *)(iVar1 + 0x6cf4) + 0xc) = 1;
    }
    *(undefined4 *)(iVar1 + 0x16c) = 2;
    FUN_0014cd18(*(undefined4 *)(iVar1 + 0x6cf4),0x95,0,5);
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  }
  *(undefined4 *)(iVar1 + 0x16c) = uVar2;
  FUN_0014cd18(*(undefined4 *)(iVar1 + 0x6cf4),uVar3,0,5);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

