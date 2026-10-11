/* Ghidra pseudocode. PS2 address: 00155558. Not validated source. */

void FUN_00155558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00156b78();
  FUN_00159028(param_1,**(undefined4 **)((int)param_1 + iVar1 * 0x50 + 0x1520),
               *(undefined4 *)(*(int *)((int)param_1 + iVar1 * 0x50 + 0x1524) + 0x14),param_3);
  return;
}

