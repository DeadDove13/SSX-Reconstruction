/* Ghidra pseudocode. PS2 address: 001f2dd8. Not validated source. */

void FUN_001f2dd8(void)

{
  uint uVar1;
  long lVar2;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  
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
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uVar1 = FUN_001f2d78(DAT_0027ba84);
  uStack_40 = uStack_40 | uVar1;
  lVar2 = FUN_00154078(0x27a598);
  if (((lVar2 < 0) || (lVar2 < 2)) || (3 < lVar2)) {
    uStack_3c = uStack_3c | 1;
  }
  else {
    uStack_3c = uStack_3c | 2;
  }
  switch(DAT_0027ba84) {
  case 0:
    uStack_38 = uStack_38 | 4;
    break;
  case 1:
    uStack_38 = uStack_38 | 0x10;
    break;
  case 2:
    uStack_38 = uStack_38 | 8;
    break;
  case 3:
    uStack_38 = uStack_38 | 0x800;
    break;
  case 4:
    uStack_38 = uStack_38 | 1;
    break;
  case 5:
    uStack_38 = uStack_38 | 0x20;
    break;
  case 6:
    uStack_38 = uStack_38 | 0x40;
    break;
  case 7:
    uStack_38 = uStack_38 | 0x800;
    break;
  case 8:
    uStack_38 = uStack_38 | 2;
    break;
  case 9:
    uStack_38 = uStack_38 | 0x800;
    break;
  case 10:
    uStack_38 = uStack_38 | 0x200;
  }
  uStack_38 = uStack_38 | 0xc00;
  FUN_001f2b68(&uStack_40,(uint)&uStack_40 | 4,(uint)&uStack_40 | 8);
  return;
}

