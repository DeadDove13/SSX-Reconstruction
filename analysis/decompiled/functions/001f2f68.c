/* Ghidra pseudocode. PS2 address: 001f2f68. Not validated source. */

void FUN_001f2f68(void)

{
  uint uVar1;
  long lVar2;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  if (DAT_0027ba88 == 4) {
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uVar1 = FUN_001f2d78(DAT_0027ba84);
    uStack_30 = uStack_30 | uVar1;
    lVar2 = FUN_00154078(0x27a598);
    if (-1 < lVar2) {
      if (lVar2 < 2) {
        uStack_2c = uStack_2c | 1;
      }
      else if (lVar2 < 4) {
        uStack_2c = uStack_2c | 2;
      }
    }
    if (lVar2 == 1) {
      uStack_28 = uStack_28 | 2;
    }
    else if (lVar2 < 2) {
      if (lVar2 == 0) {
        uStack_28 = uStack_28 | 1;
      }
    }
    else if (lVar2 == 2) {
      uStack_28 = uStack_28 | 4;
    }
    else if (lVar2 == 3) {
      uStack_28 = uStack_28 | 8;
    }
    FUN_001f2ab0(&uStack_30,(uint)&uStack_30 | 4,(uint)&uStack_30 | 8);
  }
  return;
}

