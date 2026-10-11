/* Ghidra pseudocode. PS2 address: 00266698. Not validated source. */

void FUN_00266698(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_002d5a2c;
  if (param_1 < 0) {
    iVar2 = DAT_002d5a24;
  }
  puVar1 = (undefined4 *)((int)param_1 * 8 + iVar2);
  puVar1[1] = param_3;
  *puVar1 = param_2;
  return;
}

