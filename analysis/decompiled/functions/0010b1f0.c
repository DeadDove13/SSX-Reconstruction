/* Ghidra pseudocode. PS2 address: 0010b1f0. Not validated source. */

bool FUN_0010b1f0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00153f58(0x27a598,0,DAT_0027ba84);
  iVar2 = FUN_0010b140(param_1);
  return iVar2 < *(int *)(iVar1 + 0x74);
}

