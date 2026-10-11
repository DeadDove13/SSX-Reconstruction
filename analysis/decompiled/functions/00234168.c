/* Ghidra pseudocode. PS2 address: 00234168. Not validated source. */

long FUN_00234168(int param_1)

{
  long lVar1;
  
  lVar1 = (long)*(short *)(DAT_0029a8f0 + (param_1 + (uint)DAT_0029a828._2_1_) * 0x6c + 0x18);
  if (lVar1 == -1) {
    lVar1 = (long)(int)(param_1 + (uint)DAT_0029a828._2_1_);
  }
  return lVar1;
}

