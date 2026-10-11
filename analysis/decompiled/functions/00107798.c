/* Ghidra pseudocode. PS2 address: 00107798. Not validated source. */

void FUN_00107798(undefined8 param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(DAT_002859e4 + 0x2c) == 0) {
    uVar2 = *param_2;
    iVar3 = (int)param_1;
    if ((uVar2 == 10) && (*(int *)(iVar3 + 0xa0) == 0)) {
      FUN_0010a1b8(param_1);
      uVar2 = *param_2;
    }
    if (uVar2 == 0xd) {
      if (*(int *)(iVar3 + 0xa0) < 1) {
        uVar2 = *param_2;
      }
      else {
        FUN_00136e58(iVar3 + 0x8370);
        *(int *)(iVar3 + 0xa0) = *(int *)(iVar3 + 0xa0) + -1;
        uVar2 = *param_2;
      }
    }
    else {
      uVar2 = *param_2;
    }
    if (uVar2 == 0xc) {
      if (*(int *)(iVar3 + 0x348) < 0) {
        FUN_0010aca8(param_1,param_2[1]);
        uVar2 = *(uint *)(iVar3 + 0x2f4);
      }
      else {
        uVar2 = *(uint *)(iVar3 + 0x2f4);
      }
    }
    else {
      uVar2 = *(uint *)(iVar3 + 0x2f4);
    }
    if (((int)(*(uint *)(iVar3 + 0x2f8) & ~uVar2) >> (*param_2 & 0x1f) & 1U) != 0) {
      if (*param_2 == 0xc) {
        FUN_001f19d0(DAT_002c56e8,param_1,*(undefined4 *)(iVar3 + 0x98),
                     *(undefined4 *)(iVar3 + 0x9c));
        *(undefined4 *)(iVar3 + 0x98) = *(undefined4 *)(iVar3 + 0x9c);
      }
      lVar1 = FUN_001880f0(DAT_002859e4,*(undefined4 *)(iVar3 + 0x390));
      if (lVar1 != 0) {
        switch(*param_2) {
        case 1:
          FUN_00207088(DAT_002c56e8,0);
          uVar2 = *param_2;
          break;
        case 2:
          FUN_00207088(DAT_002c56e8,1);
          uVar2 = *param_2;
          break;
        case 3:
          FUN_00207088(DAT_002c56e8,2);
          uVar2 = *param_2;
          break;
        case 4:
          FUN_00207088(DAT_002c56e8,3);
          uVar2 = *param_2;
          break;
        case 5:
          FUN_00207088(DAT_002c56e8,4);
          uVar2 = *param_2;
          break;
        case 6:
          FUN_00207088(DAT_002c56e8,5);
          uVar2 = *param_2;
          break;
        case 7:
          FUN_00207088(DAT_002c56e8,6);
          uVar2 = *param_2;
          break;
        case 8:
          FUN_00207088(DAT_002c56e8,7);
          uVar2 = *param_2;
          break;
        case 9:
          FUN_00207088(DAT_002c56e8,8);
        default:
          uVar2 = *param_2;
        }
        if (uVar2 == 10) {
          FUN_001f30f0(DAT_002c56e8,10);
        }
        else if ((uVar2 == 0xb) && ((DAT_0027ba84 != 4 || (*(int *)(iVar3 + 0xa0) == 3)))) {
          FUN_001f30f0(DAT_002c56e8,0xb);
        }
      }
    }
  }
  else {
    uVar2 = *param_2;
    if (uVar2 == 0x16) {
      FUN_00130e40(*(int *)(DAT_002859e4 + 0x2c),param_2[1]);
      uVar2 = *param_2;
    }
    if (uVar2 == 10) {
      FUN_00130e50(*(undefined4 *)(DAT_002859e4 + 0x2c));
      return;
    }
  }
  return;
}

