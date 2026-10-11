/* Ghidra pseudocode. PS2 address: 0016dea0. Not validated source. */

void FUN_0016dea0(int param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0xb24)) {
    FUN_001f87f8(DAT_002c56e8);
    FUN_00170bb8();
    FUN_00170f50(0x2b0468);
    FUN_00170c30();
    FUN_001f86c8(DAT_002c56e8);
    *(undefined4 *)(param_1 + 0xb24) = 0;
  }
  return;
}

