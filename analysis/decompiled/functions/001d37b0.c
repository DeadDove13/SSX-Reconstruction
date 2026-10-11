/* Ghidra pseudocode. PS2 address: 001d37b0. Not validated source. */

void FUN_001d37b0(int param_1,int param_2,int param_3)

{
  if ((*(int *)(param_1 + 0xd06c) != param_2) || (*(int *)(param_1 + 0xd070) != param_3)) {
    *(int *)(param_1 + 0xd06c) = param_2;
    *(int *)(param_1 + 0xd070) = param_3;
    *(undefined4 *)(param_1 + 0xd074) = 0;
  }
  return;
}

