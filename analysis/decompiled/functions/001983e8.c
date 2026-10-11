/* Ghidra pseudocode. PS2 address: 001983e8. Not validated source. */

void FUN_001983e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_001962b0(*(undefined4 *)(DAT_002859e4 + 0x38),*(undefined4 *)((int)param_2 + 0x38),
                       *(undefined4 *)((int)param_1 + 4));
  *(int **)((int)param_1 + 8) = (int *)lVar1;
  if (lVar1 == 0) {
    FUN_00197fb0(param_2);
    FUN_001982b8(param_1);
    return;
  }
  *(int *)lVar1 = (int)param_2;
  return;
}

