/* Ghidra pseudocode. PS2 address: 0022c258. Not validated source. */

void FUN_0022c258(ulong param_1,uint *param_2,uint *param_3)

{
  if ((param_1 & 8) != 0) {
    *param_2 = 0;
    *param_3 = (uint)DAT_0029a828._2_1_;
    return;
  }
  if ((param_1 & 4) != 0) {
    *param_2 = (uint)DAT_0029a828._2_1_;
    *param_3 = (int)DAT_0029a890;
  }
  return;
}

