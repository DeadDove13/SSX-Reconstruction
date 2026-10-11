/* Ghidra pseudocode. PS2 address: 00168128. Not validated source. */

void FUN_00168128(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x351) = 0;
  *(undefined1 *)(param_1 + 0x350) = 0;
  if (*(int *)(param_1 + 0x48c) == 0) {
    return;
  }
  switch(*(undefined4 *)(*(int *)(param_1 + 0x48c) + 0xb38)) {
  case 0:
    *(undefined4 *)(param_1 + 0x354) = 0;
    goto LAB_00168194;
  default:
    uVar1 = 5;
    break;
  case 2:
    uVar1 = 1;
    break;
  case 3:
    uVar1 = 2;
    break;
  case 4:
    uVar1 = 3;
    break;
  case 7:
    uVar1 = 4;
  }
  *(undefined4 *)(param_1 + 0x354) = uVar1;
LAB_00168194:
  FUN_00207088(DAT_002c56e8,*(undefined4 *)(param_1 + 0x354));
  return;
}

