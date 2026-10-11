/* Ghidra pseudocode. PS2 address: 00237608. Not validated source. */

void thunk_FUN_00238508(int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0025bf10(param_1,PTR_DAT_002c59e4,3);
  if (lVar1 == 0) {
    if ((DAT_002c5a58 & 3) == 2) {
      return;
    }
    param_1 = param_1 + 3;
    DAT_002c5a54 = 1;
  }
  else {
    lVar1 = FUN_0025bf10(param_1,PTR_s_host0__002c59f0,6);
    if (lVar1 == 0) {
      if ((DAT_002c5a58 & 2) == 0) {
        return;
      }
      param_1 = param_1 + 6;
      DAT_002c5a54 = 2;
    }
  }
  FUN_0025bbe4(0x2a3388,param_1);
  if (DAT_002a33c7 == '\0') {
    lVar1 = FUN_0025bcf8(0x2a3388);
    if ((0 < lVar1) && ((&DAT_002a3387)[(int)lVar1] != '/')) {
      FUN_0025b7e4(0x2a3388,0x2c59f8);
    }
  }
  return;
}

