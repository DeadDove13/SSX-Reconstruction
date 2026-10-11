/* Ghidra pseudocode. PS2 address: 0022ec28. Not validated source. */

int FUN_0022ec28(long param_1)

{
  uint uVar1;
  
  if (param_1 < 0x10001) {
    if (param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 0x10000;
  }
  uVar1 = FUN_0022ab00();
  return (int)(((uVar1 & 0x7fff) - 0x4000) * (int)param_1) >> 0xe;
}

