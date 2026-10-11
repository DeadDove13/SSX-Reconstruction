/* Ghidra pseudocode. PS2 address: 00131ac0. Not validated source. */

void FUN_00131ac0(int param_1,ulong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((0x11 < param_2) ||
     (iVar1 = (int)param_2 * 4, puVar2 = (undefined4 *)(param_1 + 8 + iVar1),
     *(int *)(param_1 + 8 + iVar1) == 0)) {
    puVar2 = (undefined4 *)(param_1 + 8 + (int)param_2 * 4);
  }
  FUN_0012f448(*puVar2);
  return;
}

