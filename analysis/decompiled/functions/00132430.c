/* Ghidra pseudocode. PS2 address: 00132430. Not validated source. */

undefined8 FUN_00132430(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = FUN_00131cf0(param_1 + 0x10);
  iVar2 = (int)uVar1;
  if (*(int *)(param_1 + 0x24) == 0) {
    *(int *)(param_1 + 0x24) = iVar2;
    *(int *)(param_1 + 0x20) = iVar2;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
  }
  else {
    *(int *)(*(int *)(param_1 + 0x24) + 0x18) = iVar2;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = iVar2;
  }
  return uVar1;
}

