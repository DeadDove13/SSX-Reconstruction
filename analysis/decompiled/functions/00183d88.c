/* Ghidra pseudocode. PS2 address: 00183d88. Not validated source. */

void FUN_00183d88(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  int iVar10;
  float fVar11;
  
  FUN_0018ac08(0x2b34c8);
  do {
    if ((DAT_0027bc08 & 0x1b) == 0) {
      FUN_001543f0(0x27a598);
    }
    else {
      FUN_00146d10(0x2795b8);
      lVar6 = FUN_0023a448(0x2b34e0,0x4f8,0);
      if (lVar6 != 0) {
        FUN_0023bbd0(lVar6,0,0x4f8);
      }
      uVar7 = FUN_00165b58(lVar6);
      *(int *)(param_1 + 0x6f0) = (int)uVar7;
      lVar6 = FUN_00165f18(uVar7);
      if (*(int *)(param_1 + 0x6f0) != 0) {
        FUN_00165d08(*(int *)(param_1 + 0x6f0),3);
      }
      *(undefined4 *)(param_1 + 0x6f0) = 0;
      FUN_0018a308();
      FUN_00146b60(0x2795b8,0);
      lVar8 = FUN_0023a448(0x2b34f0,0x14c8,0x10);
      if (lVar8 != 0) {
        FUN_0023bbd0(lVar8,0xffffffffdeadc0de,0x14c8);
      }
      uVar2 = FUN_002171b0(lVar8,DAT_0027ba84);
      *(undefined4 *)(param_1 + 0x6f4) = uVar2;
      if (lVar6 != 0) {
        return;
      }
    }
    lVar6 = FUN_0023a448(0x2c4d98,0x2b0,0);
    if (lVar6 != 0) {
      FUN_0023bbd0(lVar6,0,0x2b0);
    }
    iVar3 = 3;
    do {
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
    *(int *)(param_1 + 0x6ec) = (int)lVar6;
    FUN_00186ec8(lVar6);
    FUN_00189900(*(undefined4 *)(param_1 + 0x6ec));
    if (*(int *)(param_1 + 0x6ec) != 0) {
      FUN_00187a38(*(int *)(param_1 + 0x6ec),3);
    }
    *(undefined4 *)(param_1 + 0x6ec) = 0;
    uVar5 = 0x18;
    iVar10 = 0;
    FUN_0018a308();
    iVar3 = 0;
    if (0 < DAT_0027b810) {
      fVar11 = 0.0;
      puVar9 = &DAT_0027b814;
      do {
        if (-1 < (char)puVar9[0x54]) {
          uVar1 = *(uint *)(puVar9 + 0x24);
          if (uVar1 < 8) {
            iVar10 = iVar10 + 1;
            uVar4 = FUN_002109b0();
            if (((float)(uVar4 & 0x7fffff | 0x3f800000) - 1.0) + fVar11 <= 1.0 / (float)iVar10) {
              uVar5 = uVar1;
            }
          }
        }
        iVar3 = iVar3 + 1;
        puVar9 = puVar9 + 0x68;
      } while (iVar3 < DAT_0027b810);
    }
    if (7 < uVar5) {
      uVar5 = FUN_002109b0();
      uVar5 = uVar5 & 7;
    }
    lVar6 = FUN_0023a448(0x2b3500,0x6c,0x10);
    if (lVar6 != 0) {
      FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0x6c);
    }
    uVar2 = FUN_00217618(lVar6,uVar5);
    *(undefined4 *)(param_1 + 0x6f4) = uVar2;
  } while( true );
}

