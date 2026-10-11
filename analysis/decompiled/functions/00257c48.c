/* Ghidra pseudocode. PS2 address: 00257c48. Not validated source. */

undefined4 FUN_00257c48(undefined8 param_1)

{
  undefined4 uVar1;
  uint uStack_40;
  int iStack_3c;
  int iStack_38;
  ulong uStack_30;
  undefined8 auStack_20 [2];
  
  auStack_20[0] = param_1;
  FUN_002571e0(auStack_20,&uStack_40);
  if ((uStack_40 == 2) || (uStack_40 < 2)) {
LAB_00257c78:
    uVar1 = 0;
  }
  else {
    if (iStack_3c != 0) {
      return 0;
    }
    if (uStack_40 != 4) {
      if (iStack_38 < 0) goto LAB_00257c78;
      if (iStack_38 < 0x20) {
        if (0x3c < iStack_38) {
          return (int)(uStack_30 << (long)(iStack_38 + -0x3c));
        }
        return (int)(uStack_30 >> (long)(0x3c - iStack_38));
      }
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

