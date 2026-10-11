/* Ghidra pseudocode. PS2 address: 001369e0. Not validated source. */

undefined8 FUN_001369e0(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 9;
  puVar1 = (undefined4 *)((int)param_1 + 0x100);
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 4;
  } while (iVar2 != -1);
  *(undefined4 *)((int)param_1 + 0x1a0) = 0;
  FUN_00136ba8(param_1);
  FUN_00136c30(param_1);
  return param_1;
}

