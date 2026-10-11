/* Ghidra pseudocode. PS2 address: 001f1760. Not validated source. */

void FUN_001f1760(void)

{
  undefined8 uVar1;
  uint uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((*(int *)(DAT_002859e4 + 0x38) != 0) && (*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x4c) != 0))
  {
    return;
  }
  if (DAT_0027ba88 == 3) {
    uStack_24 = 2;
    uStack_2c = 2;
    goto LAB_001f180c;
  }
  if (DAT_0027ba88 < 4) {
    if (DAT_0027ba88 == 2) {
      uStack_2c = 2;
      uStack_24 = 1;
      goto LAB_001f180c;
    }
LAB_001f1808:
    uStack_2c = 0;
    uStack_24 = 0;
  }
  else {
    if (DAT_0027ba88 == 4) {
      uStack_24 = 1;
    }
    else {
      uStack_24 = 2;
      if (DAT_0027ba88 != 5) goto LAB_001f1808;
    }
    uStack_2c = 4;
  }
LAB_001f180c:
  uStack_2c = uStack_2c | 1;
  switch(DAT_0027ba84) {
  case 0:
    uStack_28 = 1;
    break;
  case 1:
    uStack_28 = 4;
    break;
  default:
    uStack_28 = 0;
    break;
  case 3:
    uStack_28 = 0x40;
    break;
  case 4:
    uStack_28 = 0x10;
    break;
  case 5:
    uStack_28 = 2;
    break;
  case 6:
    uStack_28 = 0x20;
    break;
  case 8:
    uStack_28 = 8;
    break;
  case 9:
    uStack_28 = 0x80;
  }
  uVar1 = FUN_00154078(0x27a598);
  FUN_001f1460(&uStack_30,uVar1,DAT_0027ba84,DAT_0027ba88);
  if ((uStack_30 & 2) == 0) {
    FUN_001efc68((uint)&uStack_30 | 4,(uint)&uStack_30 | 0xc,&uStack_30);
  }
  else {
    FUN_001efcd0((uint)&uStack_30 | 4,(uint)&uStack_30 | 8,(uint)&uStack_30 | 0xc);
  }
  return;
}

