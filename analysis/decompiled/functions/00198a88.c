/* Ghidra pseudocode. PS2 address: 00198a88. Not validated source. */

void FUN_00198a88(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x3928) = 0;
  if ((*(int *)(iVar2 + 0x14) == 0) && (*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x44) == 0)) {
    FUN_00196768(param_1);
    uVar1 = FUN_00193c38(param_1,0,*(undefined4 *)(iVar2 + 0x24),0);
    *(undefined4 *)(iVar2 + 0x14) = uVar1;
  }
  return;
}

