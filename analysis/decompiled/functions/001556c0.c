/* Ghidra pseudocode. PS2 address: 001556c0. Not validated source. */

void FUN_001556c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = FUN_00156b78();
  puVar1 = *(undefined4 **)(iVar2 * 0x50 + (int)param_1 + 0x1520);
  FUN_00159078(param_1,*puVar1,param_3,puVar1[4]);
  return;
}

