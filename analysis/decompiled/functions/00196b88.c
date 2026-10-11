/* Ghidra pseudocode. PS2 address: 00196b88. Not validated source. */

undefined8 FUN_00196b88(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  switch(*(undefined4 *)(*(int *)(DAT_002859e4 + 0x38) + 0x18)) {
  case 0:
    iVar1 = *(int *)(DAT_002859e4 + 0x38);
    if (*(int *)(iVar1 + 0x48) != 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x44) != 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x38) != 0) {
      return 0;
    }
    FUN_00196e20(param_1);
    uVar2 = 1;
    break;
  case 1:
  case 2:
  case 4:
    uVar2 = FUN_00196f10(param_1);
  }
  return uVar2;
}

