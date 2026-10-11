/* Ghidra pseudocode. PS2 address: 00111e20. Not validated source. */

void FUN_00111e20(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x6cf4);
  if ((*(int *)(iVar1 + 8) != 0x45) && (*(int *)(param_1 + 0x170) == 0)) {
    *(undefined4 *)(iVar1 + 0x14) = 0x1dc0;
    FUN_0014cd18(iVar1,0x45,0,5);
    *(undefined4 *)(*(int *)(param_1 + 0x6cf4) + 0x14) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x170) = 6;
  }
  return;
}

