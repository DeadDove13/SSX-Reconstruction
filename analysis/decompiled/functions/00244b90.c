/* Ghidra pseudocode. PS2 address: 00244b90. Not validated source. */

void FUN_00244b90(uint param_1)

{
  _ctc2(param_1 & 0xffff);
  _vcallmsr();
  return;
}

