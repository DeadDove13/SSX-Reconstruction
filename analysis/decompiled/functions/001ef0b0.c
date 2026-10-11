/* Ghidra pseudocode. PS2 address: 001ef0b0. Not validated source. */

void FUN_001ef0b0(int param_1,int param_2)

{
  for (; param_2 < *(int *)(*(int *)(param_1 + 0x6584) + 8); param_2 = param_2 + 1) {
    FUN_001ee398(*(undefined4 *)(param_1 + 0x6584),param_2);
  }
  return;
}

