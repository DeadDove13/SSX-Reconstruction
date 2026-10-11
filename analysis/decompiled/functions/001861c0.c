/* Ghidra pseudocode. PS2 address: 001861c0. Not validated source. */

void FUN_001861c0(int param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = 0xc;
  *(undefined4 *)(param_1 + 0x10) = 0xdeadbefc;
  FUN_001973f0(param_2,param_1 + 0xc,0xc);
  return;
}

