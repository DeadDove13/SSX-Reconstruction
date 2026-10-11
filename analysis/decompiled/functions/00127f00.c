/* Ghidra pseudocode. PS2 address: 00127f00. Not validated source. */

undefined8 FUN_00127f00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  FUN_00127340();
  iVar1 = 5;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  *(undefined **)((int)param_1 + 8) = &DAT_002a9a98;
  FUN_001978a0(param_3,(int)param_1 + 0x100,0x90);
  return param_1;
}

