/* Ghidra pseudocode. PS2 address: 0012ff98. Not validated source. */

int FUN_0012ff98(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (param_2 == iVar2) {
    return iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x44);
  switch(param_2) {
  case 1:
    uVar1 = 1;
    iVar2 = param_1 + 0x18;
    break;
  case 2:
    uVar1 = 2;
    iVar2 = param_1 + 0x1c;
    break;
  case 3:
    uVar1 = 3;
    iVar2 = param_1 + 0x24;
    break;
  case 4:
    uVar1 = 4;
    iVar2 = param_1 + 0x28;
    break;
  case 5:
    uVar1 = 5;
    iVar2 = param_1 + 0x2c;
    break;
  case 6:
    uVar1 = 6;
    iVar2 = param_1 + 0x30;
    break;
  case 7:
    uVar1 = 7;
    iVar2 = param_1 + 0x34;
    break;
  default:
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    goto LAB_0013003c;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(int *)(param_1 + 0x44) = iVar2;
LAB_0013003c:
  return *(int *)(param_1 + 0x44);
}

