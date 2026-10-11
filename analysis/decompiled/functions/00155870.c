/* Ghidra pseudocode. PS2 address: 00155870. Not validated source. */

void FUN_00155870(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00156b78();
  FUN_001590f8(param_1,**(undefined4 **)((int)param_1 + iVar1 * 0x50 + 0x1520),
               *(undefined4 *)(*(int *)((int)param_1 + iVar1 * 0x50 + 0x1524) + 0x14),param_3);
  return;
}

