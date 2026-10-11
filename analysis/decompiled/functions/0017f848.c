/* Ghidra pseudocode. PS2 address: 0017f848. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0017fc14) */
/* WARNING: Removing unreachable block (ram,0x0017fb60) */
/* WARNING: Removing unreachable block (ram,0x0017fe6c) */

undefined4 FUN_0017f848(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  
  puVar12 = &uStack_c0;
  iVar15 = 0;
  uStack_c0 = DAT_002b2ca8;
  uStack_b8 = DAT_002b2cb0;
  uStack_b0 = DAT_002b2cb8;
  uStack_a8 = DAT_002b2cc0;
  uStack_a0 = DAT_002b2cc8;
  uStack_98 = DAT_002b2cd0;
  uStack_90 = DAT_002b2cd8;
  uStack_88 = DAT_002b2ce0;
  uVar3 = FUN_001703b8(param_1,0xffffffffffffffff);
  iVar13 = (int)param_1;
  if (*(int *)(iVar13 + 0xbb0) != 0) {
    uVar3 = uVar3 & 0xffffffffffe1fff0;
  }
  if ((uVar3 & 0x120) == 0) {
    iVar14 = *(int *)(iVar13 + 0xc94);
  }
  else {
    if (*(int *)(iVar13 + 0xbb0) == 0) {
      FUN_001faea0(DAT_002c56e8);
      FUN_00168030(*(undefined4 *)(iVar13 + 0xb3c));
      return 3;
    }
    iVar14 = *(int *)(iVar13 + 0xc94);
  }
  if (iVar14 != 0) {
    return 0;
  }
  if ((uVar3 & 0x880) == 0) {
    if (((uVar3 & 0x120) != 0) && (uVar6 = *(uint *)(iVar13 + 0xbb0), uVar6 != 0))
    goto LAB_0017f974;
  }
  else {
    uVar6 = *(uint *)(iVar13 + 0xbb0);
LAB_0017f974:
    *(uint *)(iVar13 + 0xbb0) = uVar6 ^ 1;
    if ((uVar6 ^ 1) == 0) {
      FUN_0016eb08(param_1,0x156);
      iVar14 = 9;
      puVar4 = &DAT_00284dc8;
      uVar1 = DAT_00284dc8;
      while( true ) {
        puVar4 = puVar4 + 1;
        iVar14 = iVar14 + -1;
        FUN_0016eae0(param_1,uVar1);
        if (iVar14 < 0) break;
        uVar1 = *puVar4;
      }
      FUN_0017f0f0(param_1);
      FUN_0017f748(param_1);
      if (*(int *)(iVar13 + 0xba4) < 5) {
        iVar14 = *(int *)(iVar13 + 0xba4);
      }
      else {
        FUN_0016eae0(param_1,0x31e);
        iVar14 = *(int *)(iVar13 + 0xba4);
      }
      if (iVar14 < 0x2d) {
        FUN_0016eae0(param_1,800);
      }
    }
    else {
      iVar14 = 9;
      FUN_00201138(DAT_002c56e8);
      puVar4 = &DAT_00284dc8;
      FUN_0017ee28(param_1,(&DAT_00284dc8)[*(int *)(iVar13 + 0xba4) - *(int *)(iVar13 + 0xbac)],
                   0x156);
      FUN_0016eae0(param_1,0x156);
      puVar11 = &uStack_b0;
      puVar10 = &DAT_00284df0;
      uVar1 = DAT_00284dc8;
      while( true ) {
        puVar4 = puVar4 + 1;
        iVar14 = iVar14 + -1;
        FUN_0016eb08(param_1,uVar1);
        uVar1 = *puVar10;
        puVar10 = puVar10 + 1;
        FUN_0016eb08(param_1,uVar1);
        if (iVar14 < 0) break;
        uVar1 = *puVar4;
      }
      iVar14 = 3;
      uVar1 = (undefined4)uStack_c0;
      while( true ) {
        puVar12 = (undefined8 *)((int)puVar12 + 4);
        iVar14 = iVar14 + -1;
        FUN_0016eb08(param_1,uVar1);
        if (iVar14 < 0) break;
        uVar1 = *(undefined4 *)puVar12;
      }
      iVar14 = 10;
      uVar1 = (undefined4)uStack_b0;
      while( true ) {
        puVar11 = (undefined8 *)((int)puVar11 + 4);
        iVar14 = iVar14 + -1;
        FUN_0016eb08(param_1,uVar1);
        if (iVar14 < 0) break;
        uVar1 = *(undefined4 *)puVar11;
      }
      uVar6 = *(uint *)(iVar13 + 0xba4);
      *(undefined4 *)(iVar13 + 0xc8c) = 0;
      uVar5 = (int)uVar6 < 0x1f ^ 1;
      *(undefined4 *)(iVar13 + 0xc88) = 0;
      iVar14 = uVar5 * 4;
      puVar9 = (uint *)(*(int *)(iVar13 + 0xc80) + 0xc + iVar14);
      uVar2 = *puVar9;
      if (uVar5 != 0) {
        uVar6 = uVar6 - 0x1e;
      }
      if (((int)uVar2 >> (uVar6 & 0x1f) & 1U) != 0) {
        uVar6 = 1 << (uVar6 & 0x1f);
        puVar8 = (uint *)(*(int *)(iVar13 + 0xc80) + 4 + iVar14);
        *puVar9 = uVar2 & ~uVar6;
        *puVar8 = *puVar8 | uVar6;
      }
    }
  }
  iVar14 = *(int *)(iVar13 + 0xba4);
  if ((uVar3 & 0x80004) != 0) {
    iVar7 = iVar14 + 1;
    if (iVar7 < 0x32) {
      *(int *)(iVar13 + 0xba4) = iVar7;
      if (iVar7 % 5 == 0) {
        if (*(int *)(iVar13 + 0xba8) < 1) {
          *(int *)(iVar13 + 0xba8) = *(int *)(iVar13 + 0xba8) + 1;
          if (iVar7 < 0x2d) {
            FUN_0016eae0(param_1,800);
            if (*(int *)(iVar13 + 0xba4) < 10) {
              FUN_0016eae0(param_1,0x31e);
              iVar15 = 1;
              goto LAB_0017fbe8;
            }
          }
          else {
            *(undefined4 *)(iVar13 + 0xc8c) = 0;
            FUN_0016eb08(param_1,800);
            FUN_0016eb08(param_1,0x321);
          }
          iVar15 = 1;
        }
        else {
          iVar15 = 1;
        }
      }
      else {
        iVar15 = 1;
      }
    }
    else {
      FUN_001fafa8(DAT_002c56e8);
    }
  }
LAB_0017fbe8:
  if ((uVar3 & 0x100008) != 0) {
    iVar7 = *(int *)(iVar13 + 0xba4) + -1;
    if (*(int *)(iVar13 + 0xba4) < 1) {
      FUN_001fafa8(DAT_002c56e8);
    }
    else {
      *(int *)(iVar13 + 0xba4) = iVar7;
      if (iVar7 % 5 == 4) {
        if (0 < *(int *)(iVar13 + 0xba8)) {
          *(int *)(iVar13 + 0xba8) = *(int *)(iVar13 + 0xba8) + -1;
          if (4 < iVar7) {
            FUN_0016eae0(param_1,0x31e);
            if (*(int *)(iVar13 + 0xba4) < 0x28) {
              iVar15 = iVar15 + 1;
            }
            else {
              FUN_0016eae0(param_1,800);
              iVar15 = iVar15 + 1;
            }
            goto LAB_0017fca4;
          }
          *(undefined4 *)(iVar13 + 0xc88) = 0;
          FUN_0016eb08(param_1,0x31e);
          FUN_0016eb08(param_1,799);
        }
        iVar15 = iVar15 + 1;
      }
      else {
        iVar15 = iVar15 + 1;
      }
    }
  }
LAB_0017fca4:
  if ((uVar3 & 0x20001) != 0) {
    if (*(int *)(iVar13 + 0xba4) < 5) {
      FUN_001fafa8(DAT_002c56e8);
    }
    else {
      *(int *)(iVar13 + 0xba4) = *(int *)(iVar13 + 0xba4) + -5;
      if (0 < *(int *)(iVar13 + 0xba8)) {
        *(int *)(iVar13 + 0xba8) = *(int *)(iVar13 + 0xba8) + -1;
      }
      iVar15 = iVar15 + 1;
      if (*(int *)(iVar13 + 0xba4) < 5) {
        *(undefined4 *)(iVar13 + 0xc88) = 0;
        FUN_0016eb08(param_1,0x31e);
        FUN_0016eb08(param_1,799);
      }
      else {
        *(undefined4 *)(iVar13 + 0xc88) = 0x1e;
        FUN_0016eb08(param_1,0x31e);
        FUN_0016eae0(param_1,799);
        if (0x27 < *(int *)(iVar13 + 0xba4)) {
          FUN_0016eae0(param_1,800);
        }
      }
    }
  }
  if ((uVar3 & 0x40002) == 0) {
    iVar7 = *(int *)(iVar13 + 0xba4);
    goto LAB_0017fe14;
  }
  iVar7 = *(int *)(iVar13 + 0xba4) + 5;
  if (iVar7 < 0x32) {
    *(int *)(iVar13 + 0xba4) = iVar7;
    if (*(int *)(iVar13 + 0xba8) < 1) {
      *(int *)(iVar13 + 0xba8) = *(int *)(iVar13 + 0xba8) + 1;
    }
    iVar15 = iVar15 + 1;
    if (0x2c < *(int *)(iVar13 + 0xba4)) {
      *(undefined4 *)(iVar13 + 0xc8c) = 0;
      FUN_0016eb08(param_1,800);
      FUN_0016eb08(param_1,0x321);
      iVar7 = *(int *)(iVar13 + 0xba4);
      goto LAB_0017fe14;
    }
    *(undefined4 *)(iVar13 + 0xc8c) = 0x1e;
    FUN_0016eb08(param_1,800);
    FUN_0016eae0(param_1,0x321);
    if (*(int *)(iVar13 + 0xba4) < 10) {
      FUN_0016eae0(param_1,0x31e);
      iVar7 = *(int *)(iVar13 + 0xba4);
      goto LAB_0017fe14;
    }
  }
  else {
    FUN_001fafa8(DAT_002c56e8);
  }
  iVar7 = *(int *)(iVar13 + 0xba4);
LAB_0017fe14:
  if (iVar14 != iVar7) {
    FUN_0016e100(param_1,(&DAT_00284dc8)[iVar14 - *(int *)(iVar13 + 0xbac)]);
    FUN_0016e100(param_1,(&DAT_00284df0)[iVar14 - *(int *)(iVar13 + 0xbac)]);
  }
  *(int *)(iVar13 + 0xbac) = (*(int *)(iVar13 + 0xba4) / 5) * 5 + *(int *)(iVar13 + 0xba8) * -5;
  if (iVar15 != 0) {
    iVar13 = 10;
    FUN_001faea0(DAT_002c56e8);
    FUN_0017ef40(param_1);
    FUN_0017f0f0(param_1);
    puVar12 = &uStack_b0;
    uVar1 = (undefined4)uStack_b0;
    while( true ) {
      puVar12 = (undefined8 *)((int)puVar12 + 4);
      iVar13 = iVar13 + -1;
      FUN_0016eb08(param_1,uVar1);
      if (iVar13 < 0) break;
      uVar1 = *(undefined4 *)puVar12;
    }
    FUN_0017f748(param_1);
  }
  return 0;
}

