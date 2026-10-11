/* Ghidra pseudocode. PS2 address: 001f30f0. Not validated source. */

void FUN_001f30f0(undefined8 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  
  if (((*(int *)(DAT_002859e4 + 0x38) == 0) || (*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x4c) == 0)
      ) && (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c) != 1)) {
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uVar1 = FUN_001f2d78(DAT_0027ba84);
    uStack_40 = uStack_40 | uVar1;
    if (param_2 == 10) {
      uStack_3c = uStack_3c | 4;
    }
    else if (param_2 == 0xb) {
      uStack_3c = uStack_3c | 9;
    }
    iVar2 = FUN_001f8290(param_1);
    uStack_38 = uStack_38 | 2;
    switch(*(undefined4 *)(iVar2 + 0x9c)) {
    case 0:
      uStack_34 = uStack_34 | 1;
      break;
    case 1:
      uStack_34 = uStack_34 | 2;
      break;
    case 2:
      uStack_34 = uStack_34 | 4;
      break;
    case 3:
      uStack_34 = uStack_34 | 8;
      break;
    case 4:
      uStack_34 = uStack_34 | 0x2000;
      break;
    case 5:
      uStack_34 = uStack_34 | 0x4000;
      break;
    case 7:
      uStack_34 = uStack_34 | 0x10;
    }
    FUN_001f2d00(&uStack_40,(uint)&uStack_40 | 4,*(undefined1 *)(*(int *)(iVar2 + 0x394) + 0x4c),
                 (uint)&uStack_40 | 8,(uint)&uStack_40 | 0xc);
  }
  return;
}

