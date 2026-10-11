/* Ghidra pseudocode. PS2 address: 00155928. Not validated source. */

void FUN_00155928(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = FUN_00156b78();
  puVar1 = *(undefined4 **)((int)param_1 + iVar2 * 0x50 + 0x1520);
  FUN_00159138(param_1,*puVar1,
               *(undefined4 *)(*(int *)((int)param_1 + iVar2 * 0x50 + 0x1524) + 0x14),puVar1[4]);
  return;
}

