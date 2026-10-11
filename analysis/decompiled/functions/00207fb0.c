/* Ghidra pseudocode. PS2 address: 00207fb0. Not validated source. */

void FUN_00207fb0(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x320a0;
  *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x3201c) * 4) = param_2;
  if ((0x7e < *(int *)(iVar2 + *(int *)(param_1 + 0x3201c) * 4)) ||
     (uVar1 = 0, -1 < *(int *)(iVar2 + *(int *)(param_1 + 0x3201c) * 4))) {
    if (*(int *)(iVar2 + *(int *)(param_1 + 0x3201c) * 4) < 0x7f) {
      uVar1 = *(undefined1 *)(iVar2 + *(int *)(param_1 + 0x3201c) * 4);
    }
    else {
      uVar1 = 0x7f;
    }
  }
  *(undefined1 *)(*(int *)(param_1 + 0x3201c) * 0x18 + param_1 + 0x32020) = uVar1;
  return;
}

