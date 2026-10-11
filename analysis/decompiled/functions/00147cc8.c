/* Ghidra pseudocode. PS2 address: 00147cc8. Not validated source. */

void FUN_00147cc8(int param_1)

{
  *(uint *)(param_1 + 0x208) =
       (*(uint *)(*(int *)(*(int *)(param_1 + 0x224) + 8) + 0xc) >> 7 & 0xff) - 1;
  return;
}

