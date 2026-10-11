/* Ghidra pseudocode. PS2 address: 002042b8. Not validated source. */

undefined4 FUN_002042b8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((*(int *)(DAT_002859e4 + 0x38) != 0) &&
     (iVar1 = *(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x18), uVar2 = 1, iVar1 == 0 || 9 < iVar1)) {
    uVar2 = 0;
  }
  return uVar2;
}

