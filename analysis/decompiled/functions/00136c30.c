/* Ghidra pseudocode. PS2 address: 00136c30. Not validated source. */

undefined4 FUN_00136c30(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_00136a70();
  if (0 < lVar1) {
    FUN_00137ea0(0x3fc00000,param_1,1,lVar1);
  }
  FUN_00137bc0(param_1);
  uVar2 = DAT_002c1ca0;
  *(int *)((int)param_1 + 0x74) = *(int *)((int)param_1 + 0x74) + 1;
  return uVar2;
}

