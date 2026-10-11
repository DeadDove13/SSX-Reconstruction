/* Ghidra pseudocode. PS2 address: 0019a870. Not validated source. */

void FUN_0019a870(short *param_1)

{
  short sVar1;
  
  sVar1 = *param_1;
  while (sVar1 != 0) {
    param_1 = param_1 + 1;
    sVar1 = *param_1;
  }
  FUN_0019a7f8();
  return;
}

