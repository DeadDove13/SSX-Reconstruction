/* Ghidra pseudocode. PS2 address: 001f1708. Not validated source. */

void FUN_001f1708(undefined8 param_1)

{
  if ((*(int *)(DAT_002859e4 + 0x38) != 0) && (*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x4c) != 0))
  {
    return;
  }
  FUN_001efb20();
  FUN_00200e98(param_1);
  return;
}

