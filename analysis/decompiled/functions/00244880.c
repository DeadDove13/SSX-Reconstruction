/* Ghidra pseudocode. PS2 address: 00244880. Not validated source. */

bool FUN_00244880(uint *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  
  if (param_3 == 1) {
    bVar2 = param_1[4] < param_2;
  }
  else {
    uVar1 = param_1[4];
    if (param_4 == 0) {
      param_4 = 0x1000000;
    }
    while (uVar1 < param_2) {
      param_4 = param_4 + -1;
      if (param_4 < 0) {
        FUN_0025a720(0x2beb08);
        if ((*param_1 >> 8 & 1) != 0) {
          *param_1 = *param_1 & 0xfffffeff;
        }
      }
      uVar1 = param_1[4];
    }
    bVar2 = false;
  }
  return bVar2;
}

