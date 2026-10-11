/* Ghidra pseudocode. PS2 address: 00198208. Not validated source. */

undefined4 FUN_00198208(undefined8 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1;
  if (*piVar1 == 1) {
    if (*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x38) == 0) {
      FUN_001982e0(param_1);
      *piVar1 = 2;
      return 1;
    }
  }
  else {
    if (*piVar1 != 3) {
      return 0;
    }
    if (*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x38) == 0) {
      *piVar1 = 0;
      if (piVar1[2] != 0) {
        FUN_00198810();
      }
      FUN_00198460(param_1);
      return 0;
    }
  }
  FUN_001982b8(param_1);
  return 0;
}

