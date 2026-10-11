/* Ghidra pseudocode. PS2 address: 0016c390. Not validated source. */

undefined4 FUN_0016c390(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = &DAT_00280ec8;
    do {
      uVar1 = param_2 & 1;
      param_2 = (int)param_2 >> 1;
      if (uVar1 != 0) {
        param_1 = param_1 + -1;
        if (param_1 < 0) {
          return *puVar2;
        }
      }
      puVar2 = puVar2 + 1;
    } while (param_2 != 0);
  }
  return 0xffffffff;
}

