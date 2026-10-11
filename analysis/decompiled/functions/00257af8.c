/* Ghidra pseudocode. PS2 address: 00257af8. Not validated source. */

undefined8 FUN_00257af8(ulong param_1)

{
  undefined8 uVar1;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  ulong uStack_20;
  
  iStack_2c = -((int)param_1 >> 0x1f);
  uStack_30 = 3;
  if (param_1 == 0) {
    uStack_30 = 2;
  }
  else {
    uStack_20 = param_1;
    if ((iStack_2c != 0) && (uStack_20 = (ulong)-(int)param_1, param_1 == 0xffffffff80000000)) {
      return 0xc1e0000000000000;
    }
    iStack_28 = 0x3c;
    for (; uStack_20 < 0x1000000000000000; uStack_20 = uStack_20 << 1) {
      iStack_28 = iStack_28 + -1;
    }
  }
  uVar1 = FUN_002570b0(&uStack_30);
  return uVar1;
}

