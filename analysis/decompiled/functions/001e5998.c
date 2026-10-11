/* Ghidra pseudocode. PS2 address: 001e5998. Not validated source. */

void FUN_001e5998(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((*(int *)((int)param_1 + 0x180) == 1) &&
     ((FUN_00182670(0x285290,param_2), *(int *)(DAT_002c5128 + 4) == 0 ||
      (iVar1 = FUN_00182670(0x285290,param_2), iVar1 == DAT_002c5128)))) {
    FUN_001a94a8(*(undefined4 *)((int)param_1 + 0x174));
    FUN_001e5608(param_1,2);
    return;
  }
  return;
}

