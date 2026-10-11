/* Ghidra pseudocode. PS2 address: 00258848. Not validated source. */

uint FUN_00258848(undefined4 param_1)

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
LAB_00258878:
    uVar1 = 0;
  }
  else {
    if (iStack_2c != 0) {
      return 0;
    }
    if (uStack_30 != 4) {
      if (iStack_28 < 0) goto LAB_00258878;
      if (iStack_28 < 0x20) {
        if (iStack_28 < 0x1f) {
          return uStack_24 >> (0x1eU - iStack_28 & 0x1f);
        }
        return uStack_24 << (iStack_28 - 0x1eU & 0x1f);
      }
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

