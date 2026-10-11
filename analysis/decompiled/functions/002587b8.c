/* Ghidra pseudocode. PS2 address: 002587b8. Not validated source. */

uint FUN_002587b8(undefined4 param_1)

{
  uint uVar1;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  uint uStack_24;
  undefined4 auStack_20 [4];
  
  auStack_20[0] = param_1;
  FUN_00257eb8(auStack_20,&uStack_30);
  if ((uStack_30 == 2) || (uStack_30 < 2)) {
LAB_002587e8:
    uVar1 = 0;
  }
  else {
    if (uStack_30 != 4) {
      if (iStack_28 < 0) goto LAB_002587e8;
      if (iStack_28 < 0x1f) {
        uStack_24 = uStack_24 >> (0x1eU - iStack_28 & 0x1f);
        if (iStack_2c == 0) {
          return uStack_24;
        }
        return -uStack_24;
      }
    }
    uVar1 = 0x7fffffff;
    if (iStack_2c != 0) {
      uVar1 = 0x80000000;
    }
  }
  return uVar1;
}

