/* Ghidra pseudocode. PS2 address: 001f3078. Not validated source. */

void FUN_001f3078(void)

{
  uint uVar1;
  uint auStack_20 [4];
  
  if (DAT_0027ba88 != 2) {
    if (DAT_0027ba88 < 3) {
      if (DAT_0027ba88 != 0) {
        return;
      }
    }
    else if (DAT_0027ba88 != 4) {
      return;
    }
  }
  auStack_20[0] = 0;
  uVar1 = FUN_001f2d78(DAT_0027ba84);
  auStack_20[0] = auStack_20[0] | uVar1;
  FUN_001f2b18(auStack_20);
  return;
}

