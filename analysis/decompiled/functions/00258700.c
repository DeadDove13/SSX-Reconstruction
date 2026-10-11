/* Ghidra pseudocode. PS2 address: 00258700. Not validated source. */

undefined4 FUN_00258700(uint param_1)

{
  undefined4 uVar1;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  
  iStack_1c = -((int)param_1 >> 0x1f);
  uStack_20 = 3;
  if (param_1 == 0) {
    uStack_20 = 2;
  }
  else {
    iStack_18 = 0x1e;
    uStack_14 = param_1;
    if ((iStack_1c != 0) && (uStack_14 = -param_1, param_1 == 0x80000000)) {
      return 0xcf000000;
    }
    if (uStack_14 < 0x40000000) {
      iStack_18 = 0x1e;
      do {
        uStack_14 = uStack_14 << 1;
        iStack_18 = iStack_18 + -1;
      } while (uStack_14 < 0x40000000);
    }
  }
  uVar1 = FUN_00257da8(&uStack_20);
  return uVar1;
}

