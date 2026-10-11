/* Ghidra pseudocode. PS2 address: 001ee338. Not validated source. */

void FUN_001ee338(int param_1,int param_2)

{
  FUN_001ec180(*(int *)(param_1 + 0xc) + param_2 * 0x34,0xffffffffffffffff);
  return;
}

