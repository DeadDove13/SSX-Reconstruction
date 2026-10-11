/* Ghidra pseudocode. PS2 address: 001e53e0. Not validated source. */

void FUN_001e53e0(undefined8 param_1)

{
  switch(*(undefined4 *)((int)param_1 + 0x180)) {
  case 0:
    FUN_001d98f0(param_1);
    if (*(int *)((int)param_1 + 0x44) == 1) {
      FUN_001e5608(param_1,2);
      return;
    }
    break;
  default:
    break;
  case 2:
    FUN_001e5ad8(param_1);
    return;
  case 4:
    FUN_001e5cb8(param_1);
    return;
  }
  return;
}

