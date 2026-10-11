/* Ghidra pseudocode. PS2 address: 001f1bb8. Not validated source. */

void FUN_001f1bb8(void)

{
  undefined4 auStack_20 [4];
  
  if ((*(int *)(DAT_002859e4 + 0x38) == 0) || (*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x4c) == 0))
  {
    auStack_20[0] = 2;
    FUN_001f0010(auStack_20);
  }
  return;
}

