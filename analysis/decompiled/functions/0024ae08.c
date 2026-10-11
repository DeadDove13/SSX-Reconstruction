/* Ghidra pseudocode. PS2 address: 0024ae08. Not validated source. */

void FUN_0024ae08(int param_1)

{
  if (DAT_002a53dc == 0) {
    if (DAT_002a546c == 3) {
      FUN_00250408(PTR_DAT_002a52c4,param_1 + -1);
    }
    else {
      FUN_00250520(PTR_DAT_002a52d0,PTR_DAT_002a52dc,param_1 + -1);
    }
  }
  else {
    FUN_0024af98(0x2bf1d8);
  }
  DAT_002a53dc = 0;
  return;
}

