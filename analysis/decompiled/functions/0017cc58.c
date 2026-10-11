/* Ghidra pseudocode. PS2 address: 0017cc58. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0017cc58(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  undefined4 uVar12;
  int iStack_70;
  undefined4 uStack_6c;
  
  iVar11 = (int)param_1;
  if (*(int *)(iVar11 + 0xbc4) != 0) {
    return 0;
  }
  if (*(int *)(iVar11 + 0xbbc) != 0) {
    return 0;
  }
  uVar12 = *(undefined4 *)(*(int *)(iVar11 + 0xb3c) + 0x46c);
  uVar5 = FUN_001703b8(param_1,uVar12);
  uVar7 = DAT_002c290c;
  iVar2 = *(int *)(iVar11 + 0xb90);
  if (iVar2 != 0) {
    if (*(int *)(iVar11 + 0xbb0) == 0) {
      puVar3 = (undefined8 *)&DAT_002c8050;
      *(undefined4 *)(iVar2 + 0x2c4) = DAT_002c2908;
      *(undefined4 *)(iVar2 + 0x2e0) = uVar7;
      *(undefined4 *)(iVar2 + 0x2e4) = 0;
      *(undefined4 *)(iVar2 + 0x2f0) = 0;
      *(undefined4 *)(iVar2 + 0x2f4) = 0;
LAB_0017ce54:
      uVar10 = *puVar3;
      uVar7 = *(undefined4 *)(puVar3 + 1);
      uVar8 = *(undefined4 *)((int)puVar3 + 0xc);
      *(int *)(iVar2 + 0x2b0) = (int)uVar10;
      *(int *)(iVar2 + 0x2b4) = (int)((ulong)uVar10 >> 0x20);
      *(undefined4 *)(iVar2 + 0x2b8) = uVar7;
      *(undefined4 *)(iVar2 + 700) = uVar8;
      iVar2 = *(int *)(iVar11 + 0xb90);
      puVar3 = (undefined8 *)&DAT_002c8030;
    }
    else {
      iVar2 = FUN_00182670(0x285290,uVar12);
      uVar1 = *(uint *)(iVar2 + 0xc);
      lVar6 = FUN_0016f348(param_1,uVar12);
      uVar7 = DAT_002c2904;
      iVar4 = DAT_002859d4;
      if (lVar6 != 0x174) {
        if (lVar6 != 0x175) {
          iVar2 = *(int *)(iVar11 + 0xb90);
          *(undefined4 *)(iVar2 + 0x2c4) = DAT_002c2900;
          *(undefined4 *)(iVar2 + 0x2e0) = uVar7;
          *(undefined4 *)(iVar2 + 0x2e4) = 0;
          *(undefined4 *)(iVar2 + 0x2f0) = 0;
          uVar8 = DAT_002c805c;
          uVar7 = DAT_002c8058;
          uVar10 = _DAT_002c8050;
          *(int *)(iVar2 + 0x2b0) = (int)_DAT_002c8050;
          *(int *)(iVar2 + 0x2b4) = (int)((ulong)uVar10 >> 0x20);
          *(undefined4 *)(iVar2 + 0x2b8) = uVar7;
          *(undefined4 *)(iVar2 + 700) = uVar8;
          uVar8 = DAT_002c803c;
          uVar7 = DAT_002c8038;
          uVar10 = _DAT_002c8030;
          iVar2 = *(int *)(iVar11 + 0xb90);
          *(int *)(iVar2 + 0x2d0) = (int)_DAT_002c8030;
          *(int *)(iVar2 + 0x2d4) = (int)((ulong)uVar10 >> 0x20);
          *(undefined4 *)(iVar2 + 0x2d8) = uVar7;
          *(undefined4 *)(iVar2 + 0x2dc) = uVar8;
          goto LAB_0017ce70;
        }
        iVar9 = 1;
        if ((uVar1 & 0x2000) == 0) {
          iVar9 = -1;
          if ((uVar1 & 0x1000) != 0) {
            iVar2 = *(int *)(iVar11 + 0xb90);
            goto LAB_0017cd10;
          }
          iVar2 = *(int *)(iVar11 + 0xb90);
          *(undefined4 *)(iVar2 + 0x2e4) = 0;
        }
        else {
          iVar2 = *(int *)(iVar11 + 0xb90);
LAB_0017cd10:
          if (*(int *)(iVar2 + 0x2e4) != iVar9) {
            *(undefined4 *)(iVar2 + 0x2ec) = *(undefined4 *)(iVar2 + 0x2c4);
            *(int *)(iVar2 + 0x2e8) = iVar4;
            *(int *)(iVar2 + 0x2e4) = iVar9;
          }
        }
        uVar7 = DAT_002c28f8;
        *(undefined4 *)(iVar2 + 0x2f0) = 0;
        puVar3 = (undefined8 *)&DAT_002c8040;
        *(undefined4 *)(iVar2 + 0x2e0) = uVar7;
        goto LAB_0017ce54;
      }
      iVar2 = 1;
      if ((uVar1 & 0x2000) == 0) {
        iVar2 = -1;
        if ((uVar1 & 0x1000) != 0) {
          iVar4 = *(int *)(iVar11 + 0xb90);
          goto LAB_0017cd80;
        }
        iVar4 = *(int *)(iVar11 + 0xb90);
        if (*(int *)(iVar4 + 0x2f4) == 0) {
          *(undefined4 *)(iVar4 + 0x2f0) = 0;
        }
      }
      else {
        iVar4 = *(int *)(iVar11 + 0xb90);
LAB_0017cd80:
        *(undefined4 *)(iVar4 + 0x2f4) = 0;
        iVar9 = DAT_002859d4;
        if (*(int *)(iVar4 + 0x2f0) != iVar2) {
          *(undefined4 *)(iVar4 + 0x2fc) = *(undefined4 *)(iVar4 + 0x2e0);
          *(int *)(iVar4 + 0x2f8) = iVar9;
          *(int *)(iVar4 + 0x2f0) = iVar2;
        }
      }
      uVar7 = DAT_002c28fc;
      *(undefined4 *)(iVar4 + 0x2e4) = 0;
      *(undefined4 *)(iVar4 + 0x2c4) = uVar7;
      uVar8 = DAT_002c805c;
      uVar7 = DAT_002c8058;
      uVar10 = _DAT_002c8050;
      *(int *)(iVar4 + 0x2b0) = (int)_DAT_002c8050;
      *(int *)(iVar4 + 0x2b4) = (int)((ulong)uVar10 >> 0x20);
      *(undefined4 *)(iVar4 + 0x2b8) = uVar7;
      *(undefined4 *)(iVar4 + 700) = uVar8;
      iVar2 = *(int *)(iVar11 + 0xb90);
      puVar3 = (undefined8 *)&DAT_002c8020;
    }
    uVar10 = *puVar3;
    uVar7 = *(undefined4 *)(puVar3 + 1);
    uVar8 = *(undefined4 *)((int)puVar3 + 0xc);
    *(int *)(iVar2 + 0x2d0) = (int)uVar10;
    *(int *)(iVar2 + 0x2d4) = (int)((ulong)uVar10 >> 0x20);
    *(undefined4 *)(iVar2 + 0x2d8) = uVar7;
    *(undefined4 *)(iVar2 + 0x2dc) = uVar8;
  }
LAB_0017ce70:
  if (uVar5 == 0) {
    return 0;
  }
  if (*(int *)(iVar11 + 0xbb0) == 0) {
    if ((uVar5 & 0x880) != 0) {
      FUN_00170480(param_1,*(undefined4 *)(*(int *)(iVar11 + 0xb3c) + 0x46c));
      goto LAB_0017cef0;
    }
    if ((uVar5 & 0x120) != 0) {
      FUN_001faea0(DAT_002c56e8,uVar12);
      FUN_00168030(*(undefined4 *)(iVar11 + 0xb3c));
      return 3;
    }
    if ((uVar5 & 0x10) == 0) goto LAB_0017cef0;
    FUN_001faea0(DAT_002c56e8,uVar12);
    FUN_00168030(*(undefined4 *)(iVar11 + 0xb3c));
    uVar12 = 7;
    uVar10 = 0xffffffffffffffff;
LAB_0017cfd4:
    FUN_001707a8(param_1,uVar12,uVar10);
    iVar11 = *(int *)(iVar11 + 0xb3c);
LAB_0017cfe0:
    *(undefined4 *)(iVar11 + 0x4f4) = 1;
    return 4;
  }
LAB_0017cef0:
  lVar6 = FUN_0016f348(param_1,uVar12);
  if (lVar6 == 0x173) {
    if ((uVar5 & 0x880) == 0) {
      return 0;
    }
    FUN_001faea0(DAT_002c56e8);
    FUN_00168030(*(undefined4 *)(iVar11 + 0xb3c));
    FUN_0017be40(*(undefined4 *)(iVar11 + 0xb90));
    FUN_00168348(*(undefined4 *)(iVar11 + 0xb3c),&iStack_70,(uint)&iStack_70 | 4);
    FUN_001707a8(param_1,iStack_70,uStack_6c);
    if (iStack_70 == 3) {
      FUN_00154260(0x27a598);
      FUN_00152fc8(0x27a598);
      iVar11 = *(int *)(iVar11 + 0xb3c);
    }
    else {
      iVar11 = *(int *)(iVar11 + 0xb3c);
    }
    goto LAB_0017cfe0;
  }
  if (lVar6 < 0x174) {
    if (lVar6 != 0x172) {
      return 0;
    }
    if ((uVar5 & 0x880) == 0) {
      return 0;
    }
    FUN_00170480(param_1,*(undefined4 *)(*(int *)(iVar11 + 0xb3c) + 0x46c));
    uVar12 = 6;
    uVar10 = 0;
    goto LAB_0017cfd4;
  }
  if (lVar6 != 0x174) {
    if (lVar6 != 0x175) {
      return 0;
    }
    if ((uVar5 & 0x880) != 0) {
      lVar6 = (**(code **)(*(int *)(iVar11 + 4) + 0x2c))
                        (iVar11 + *(short *)(*(int *)(iVar11 + 4) + 0x28));
      if (lVar6 == 0) {
        FUN_00170480(param_1,*(undefined4 *)(*(int *)(iVar11 + 0xb3c) + 0x46c));
        FUN_001faea0(DAT_002c56e8);
        iVar2 = *(int *)(iVar11 + 0xbb0);
        if (iVar2 == 0) {
          *(undefined4 *)(iVar11 + 0xba4) = *(undefined4 *)(*(int *)(iVar11 + 0xb90) + 0x33c);
          iVar2 = *(int *)(iVar11 + 0xbb0);
        }
        *(uint *)(iVar11 + 0xbb0) = (uint)(iVar2 != 1);
        return 0;
      }
LAB_0017d260:
      FUN_001fafa8(DAT_002c56e8);
      return 0;
    }
    if ((uVar5 & 0x120) == 0) {
      if (*(int *)(iVar11 + 0xbb0) != 1) {
        return 0;
      }
      iVar2 = *(int *)(*(int *)(iVar11 + 0xb90) + 0x33c);
      if ((uVar5 & 0x18000c) != 0) {
        FUN_001fafe0(DAT_002c56e8);
      }
      if ((uVar5 & 0x80004) == 0) {
        if ((uVar5 & 0x100008) != 0) {
          *(undefined4 *)(iVar11 + 0xbb4) = 0;
          iVar2 = iVar2 + -1;
          *(int *)(iVar11 + 3000) = DAT_002859d4 + 0x18;
        }
      }
      else {
        *(undefined4 *)(iVar11 + 3000) = 0;
        iVar2 = iVar2 + 1;
        *(int *)(iVar11 + 0xbb4) = DAT_002859d4 + 0x18;
      }
      if (iVar2 < 4) {
        if (iVar2 < 0) {
          iVar2 = 3;
        }
      }
      else {
        iVar2 = 0;
      }
      iVar4 = *(int *)(iVar11 + 0xb90);
      if (*(int *)(iVar4 + 0x33c) != iVar2) {
        if (iVar4 != 0) {
          *(int *)(iVar4 + 0x33c) = iVar2;
          FUN_0017be40();
          *(undefined4 *)(*(int *)(iVar11 + 0xb90) + 0x340) = 1;
          FUN_0017af68();
          return 0;
        }
        return 0;
      }
      return 0;
    }
    FUN_001faea0(DAT_002c56e8);
    lVar6 = FUN_00154808(0x27a598,*(undefined4 *)(*(int *)(iVar11 + 0xb3c) + 0x46c),
                         *(undefined4 *)(iVar11 + 0xba4));
    if (lVar6 == 0) {
      *(undefined4 *)(iVar11 + 0xba4) = 0;
      while (*(int *)(iVar11 + 0xba4) < 4) {
        lVar6 = FUN_00154808(0x27a598,*(undefined4 *)(*(int *)(iVar11 + 0xb3c) + 0x46c));
        iVar2 = *(int *)(iVar11 + 0xba4);
        if (lVar6 != 0) goto LAB_0017d0bc;
        *(int *)(iVar11 + 0xba4) = iVar2 + 1;
      }
    }
    else {
      iVar2 = *(int *)(iVar11 + 0xba4);
LAB_0017d0bc:
      if (iVar2 < 4) {
        iVar2 = *(int *)(iVar11 + 0xb90);
        goto LAB_0017d0d0;
      }
    }
    *(undefined4 *)(iVar11 + 0xba4) = 0;
    iVar2 = *(int *)(iVar11 + 0xb90);
LAB_0017d0d0:
    *(undefined4 *)(iVar2 + 0x33c) = *(undefined4 *)(iVar11 + 0xba4);
    FUN_0017be40(iVar2);
    *(undefined4 *)(*(int *)(iVar11 + 0xb90) + 0x340) = 1;
    FUN_0017af68();
    *(undefined4 *)(iVar11 + 0xbb0) = 0;
    return 0;
  }
  if ((uVar5 & 0x880) != 0) {
    lVar6 = (**(code **)(*(int *)(iVar11 + 4) + 0x2c))
                      (iVar11 + *(short *)(*(int *)(iVar11 + 4) + 0x28));
    if (lVar6 == 0) {
      FUN_001faea0(DAT_002c56e8);
      FUN_00170480(param_1,*(undefined4 *)(*(int *)(iVar11 + 0xb3c) + 0x46c));
      iVar2 = *(int *)(iVar11 + 0xbb0);
      if (iVar2 == 0) {
        *(undefined4 *)(iVar11 + 0xba8) = *(undefined4 *)(*(int *)(iVar11 + 0xb90) + 0x338);
        iVar2 = *(int *)(iVar11 + 0xbb0);
      }
      iVar9 = DAT_002859d4;
      iVar4 = *(int *)(iVar11 + 0xb90);
      uVar12 = *(undefined4 *)(iVar4 + 0x2e0);
      *(uint *)(iVar11 + 0xbb0) = (uint)(iVar2 != 1);
      *(undefined4 *)(iVar4 + 0x2f0) = 1;
      *(int *)(iVar4 + 0x2f8) = iVar9;
      *(undefined4 *)(iVar4 + 0x2fc) = uVar12;
      *(undefined4 *)(iVar4 + 0x2f4) = 1;
      return 0;
    }
    goto LAB_0017d260;
  }
  if ((uVar5 & 0x120) == 0) {
    if (*(int *)(iVar11 + 0xbb0) != 1) {
      return 0;
    }
    iVar2 = *(int *)(*(int *)(iVar11 + 0xb90) + 0x338);
    if ((uVar5 & 0x18000c) != 0) {
      FUN_001fafe0(DAT_002c56e8);
    }
    if ((uVar5 & 0x80004) == 0) {
      if ((uVar5 & 0x100008) != 0) {
        *(undefined4 *)(iVar11 + 0xbb4) = 0;
        iVar2 = iVar2 + -1;
        *(int *)(iVar11 + 3000) = DAT_002859d4 + 0x18;
      }
    }
    else {
      *(undefined4 *)(iVar11 + 3000) = 0;
      iVar2 = iVar2 + 1;
      *(int *)(iVar11 + 0xbb4) = DAT_002859d4 + 0x18;
    }
    if (iVar2 < 0xb) {
      if (iVar2 < 0) {
        iVar2 = 10;
      }
    }
    else {
      iVar2 = 0;
    }
    iVar4 = *(int *)(iVar11 + 0xb90);
    if (iVar4 == 0) {
      return 0;
    }
    if (*(int *)(iVar4 + 0x338) != iVar2) {
      *(int *)(iVar4 + 0x338) = iVar2;
      FUN_0017af68();
    }
    FUN_0017be40(*(undefined4 *)(iVar11 + 0xb90));
    iVar4 = FUN_00154c60(0x27a598,*(undefined4 *)(*(int *)(iVar11 + 0xb3c) + 0x46c));
    iVar2 = *(int *)(*(int *)(iVar11 + 0xb90) + 0x338);
    *(undefined4 *)(iVar11 + 0xbd8) = 0;
    goto LAB_0017d44c;
  }
  FUN_001faea0(DAT_002c56e8);
  lVar6 = FUN_00154788(0x27a598,*(undefined4 *)(*(int *)(iVar11 + 0xb3c) + 0x46c),
                       *(undefined4 *)(iVar11 + 0xba8));
  if (lVar6 == 0) {
    *(undefined4 *)(iVar11 + 0xba8) = 0;
    while (*(int *)(iVar11 + 0xba8) < 0xb) {
      lVar6 = FUN_00154788(0x27a598,*(undefined4 *)(*(int *)(iVar11 + 0xb3c) + 0x46c));
      iVar2 = *(int *)(iVar11 + 0xba8);
      if (lVar6 != 0) goto LAB_0017d2dc;
      *(int *)(iVar11 + 0xba8) = iVar2 + 1;
    }
LAB_0017d2e8:
    *(undefined4 *)(iVar11 + 0xba8) = 0;
    iVar2 = *(int *)(iVar11 + 0xb90);
  }
  else {
    iVar2 = *(int *)(iVar11 + 0xba8);
LAB_0017d2dc:
    if (10 < iVar2) goto LAB_0017d2e8;
    iVar2 = *(int *)(iVar11 + 0xb90);
  }
  *(undefined4 *)(iVar2 + 0x338) = *(undefined4 *)(iVar11 + 0xba8);
  FUN_0017be40(iVar2);
  FUN_0017af68(*(undefined4 *)(iVar11 + 0xb90));
  iVar4 = FUN_00154c60(0x27a598,*(undefined4 *)(*(int *)(iVar11 + 0xb3c) + 0x46c));
  iVar2 = *(int *)(*(int *)(iVar11 + 0xb90) + 0x338);
  *(undefined4 *)(iVar11 + 0xbd8) = 0;
  *(undefined4 *)(iVar11 + 0xbb0) = 0;
LAB_0017d44c:
  *(undefined4 *)(iVar11 + 0xbd4) = *(undefined4 *)(iVar4 * 0xdc + iVar2 * 0x14 + 0x27c920);
  return 0;
}

