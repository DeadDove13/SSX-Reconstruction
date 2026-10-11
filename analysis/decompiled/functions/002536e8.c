/* Ghidra pseudocode. PS2 address: 002536e8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00253758) */

uint FUN_002536e8(int param_1,undefined8 *param_2,int param_3,int param_4,long param_5,int param_6)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  int iVar17;
  uint auStack_310 [20];
  undefined8 auStack_2c0 [20];
  undefined8 auStack_220 [20];
  undefined1 auStack_180 [160];
  int iStack_e0;
  undefined8 *puStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  undefined1 *puStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  
  iStack_d0 = (param_3 + -3) / 0x18;
  iStack_d8 = (int)param_5;
  param_4 = param_4 + -1;
  iVar17 = 0;
  iStack_e0 = param_1;
  iVar15 = *(int *)(&DAT_002bfcc8 + iStack_d8 * 4);
  puStack_dc = param_2;
  iStack_cc = iVar15;
  iStack_d4 = param_6;
  if (iStack_d0 < 0) {
    iStack_d0 = 0;
  }
  iVar14 = iStack_d0 - param_4;
  iStack_c8 = param_3 - (iStack_d0 * 0x18 + 0x18);
  if (param_4 + iVar15 < 0) {
    puStack_bc = auStack_180;
    uStack_b0 = (uint)(iVar15 < 0);
    uStack_b4 = (uint)(iStack_d8 < 3);
  }
  else {
    puStack_bc = auStack_180;
    uStack_b4 = (uint)(param_5 < 3);
    uStack_b0 = (uint)(iVar15 < 0);
    do {
      if (iVar14 < 0) {
        auStack_2c0[iVar17] = 0;
      }
      else {
        uVar6 = FUN_00257af8(*(undefined4 *)(iVar14 * 4 + iStack_d4));
        auStack_2c0[iVar17] = uVar6;
      }
      iVar17 = iVar17 + 1;
      iVar14 = iVar14 + 1;
    } while (iVar17 <= param_4 + iVar15);
  }
  iVar15 = iStack_cc;
  if (uStack_b0 == 0) {
    iVar17 = 0;
    do {
      iVar15 = 0;
      uVar6 = 0;
      if (-1 < param_4) {
        do {
          iVar14 = (param_4 + iVar17) - iVar15;
          iVar10 = iVar15 * 8;
          iVar15 = iVar15 + 1;
          uVar7 = FUN_00257580(*(undefined8 *)(iVar10 + iStack_e0),auStack_2c0[iVar14]);
          uVar6 = FUN_002574c0(uVar6,uVar7);
        } while (iVar15 <= param_4);
      }
      iVar14 = iVar17 + 1;
      *(undefined8 *)(puStack_bc + iVar17 * 8) = uVar6;
      iVar17 = iVar14;
      iVar15 = iStack_cc;
    } while (iVar14 <= iStack_cc);
  }
LAB_002538c8:
  uVar6 = *(undefined8 *)(puStack_bc + iVar15 * 8);
  if (0 < iVar15) {
    puVar16 = (undefined8 *)(puStack_bc + iVar15 * 8 + -8);
    puVar11 = auStack_310;
    iVar17 = iVar15;
    do {
      iVar17 = iVar17 + -1;
      uVar7 = FUN_00257580(uVar6,0x3e70000000000000);
      uVar7 = FUN_00257bb0(uVar7);
      uVar7 = FUN_00257af8(uVar7);
      uVar8 = FUN_00257580(uVar7,0x4170000000000000);
      uVar6 = FUN_00257518(uVar6,uVar8);
      uVar3 = FUN_00257bb0(uVar6);
      uVar6 = *puVar16;
      *puVar11 = uVar3;
      puVar16 = puVar16 + -1;
      uVar6 = FUN_002574c0(uVar6,uVar7);
      puVar11 = puVar11 + 1;
    } while (0 < iVar17);
  }
  uVar6 = FUN_00255520(uVar6,iStack_c8);
  uVar7 = FUN_00257580(uVar6,0x3fc0000000000000);
  uVar7 = FUN_002552e8(uVar7);
  uVar7 = FUN_00257580(uVar7,0x4020000000000000);
  uVar6 = FUN_00257518(uVar6,uVar7);
  uVar4 = FUN_00257bb0(uVar6);
  uVar7 = FUN_00257af8(uVar4);
  uVar6 = FUN_00257518(uVar6,uVar7);
  if (iStack_c8 < 1) {
    if (iStack_c8 == 0) {
      iStack_c4 = (int)auStack_310[iVar15 + -1] >> 0x17;
    }
    else {
      iStack_c4 = 2;
      lVar9 = FUN_00257aa8(uVar6,0x3fe0000000000000);
      if (lVar9 < 0) {
        iStack_c4 = 0;
      }
    }
  }
  else {
    uVar5 = auStack_310[iVar15 + -1];
    iVar17 = (int)uVar5 >> (0x18U - iStack_c8 & 0x1f);
    uVar4 = uVar4 + iVar17;
    uVar5 = uVar5 - (iVar17 << (0x18U - iStack_c8 & 0x1f));
    iStack_c4 = (int)uVar5 >> (0x17U - iStack_c8 & 0x1f);
    auStack_310[iVar15 + -1] = uVar5;
  }
  if (0 < iStack_c4) {
    uVar4 = uVar4 + 1;
    bVar2 = false;
    puVar11 = auStack_310;
    iVar17 = iVar15;
    if (0 < iVar15) {
      do {
        iVar14 = *puVar11;
        if (bVar2) {
          iVar10 = 0xffffff - iVar14;
LAB_00253aac:
          *puVar11 = iVar10;
        }
        else {
          iVar10 = 0x1000000 - iVar14;
          if (iVar14 != 0) {
            bVar2 = true;
            goto LAB_00253aac;
          }
        }
        iVar17 = iVar17 + -1;
        puVar11 = puVar11 + 1;
      } while (iVar17 != 0);
    }
    if (0 < iStack_c8) {
      if (iStack_c8 == 1) {
        uVar5 = 0x7f0000;
      }
      else {
        if (iStack_c8 != 2) goto LAB_00253b14;
        uVar5 = 0x3f0000;
      }
      auStack_310[iVar15 + -1] = auStack_310[iVar15 + -1] & (uVar5 | 0xffff);
    }
LAB_00253b14:
    if ((iStack_c4 == 2) && (uVar6 = FUN_00257518(0x3ff0000000000000,uVar6), bVar2)) {
      uVar7 = FUN_00255520(0x3ff0000000000000,iStack_c8);
      uVar6 = FUN_00257518(uVar6,uVar7);
    }
  }
  lVar9 = FUN_00257aa8(uVar6,0);
  if (lVar9 == 0) {
    iVar17 = iVar15 + -1;
    uVar5 = 0;
    if (iStack_cc <= iVar17) {
      puVar11 = auStack_310 + iVar17;
      do {
        uVar1 = *puVar11;
        iVar17 = iVar17 + -1;
        puVar11 = puVar11 + -1;
        uVar5 = uVar5 | uVar1;
      } while (iStack_cc <= iVar17);
    }
    if (uVar5 != 0) goto LAB_00253cdc;
    iStack_c0 = 1;
    if (auStack_310[iStack_cc + -1] == 0) {
      do {
        iStack_c0 = iStack_c0 + 1;
      } while (auStack_310[iStack_cc - iStack_c0] == 0);
      iStack_c0 = iVar15 + iStack_c0;
    }
    else {
      iStack_c0 = iVar15 + 1;
    }
    iVar17 = iVar15 + 1;
    iVar15 = iStack_c0;
    if (iVar17 <= iStack_c0) {
      do {
        iVar15 = 0;
        uVar7 = 0;
        uVar6 = FUN_00257af8(*(undefined4 *)((iStack_d0 + iVar17) * 4 + iStack_d4));
        auStack_2c0[param_4 + iVar17] = uVar6;
        if (-1 < param_4) {
          do {
            iVar14 = (param_4 + iVar17) - iVar15;
            iVar10 = iVar15 * 8;
            iVar15 = iVar15 + 1;
            uVar6 = FUN_00257580(*(undefined8 *)(iVar10 + iStack_e0),auStack_2c0[iVar14]);
            uVar7 = FUN_002574c0(uVar7,uVar6);
          } while (iVar15 <= param_4);
        }
        iVar14 = iVar17 + 1;
        *(undefined8 *)(puStack_bc + iVar17 * 8) = uVar7;
        iVar15 = iStack_c0;
        iVar17 = iVar14;
      } while (iVar14 <= iStack_c0);
    }
    goto LAB_002538c8;
  }
LAB_00253cdc:
  lVar9 = FUN_00257aa8(uVar6,0);
  if (lVar9 == 0) {
    iVar15 = iVar15 + -1;
    iStack_c8 = iStack_c8 + -0x18;
    uStack_b8 = uVar4 & 7;
    if (auStack_310[iVar15] == 0) {
      do {
        iVar15 = iVar15 + -1;
        iStack_c8 = iStack_c8 + -0x18;
      } while (auStack_310[iVar15] == 0);
    }
  }
  else {
    uVar6 = FUN_00255520(uVar6,-iStack_c8);
    lVar9 = FUN_00257aa8(uVar6,0x4170000000000000);
    if (lVar9 < 0) {
      iVar17 = iVar15 << 2;
      uStack_b8 = uVar4 & 7;
    }
    else {
      uStack_b8 = uVar4 & 7;
      iStack_c8 = iStack_c8 + 0x18;
      uVar7 = FUN_00257580(uVar6,0x3e70000000000000);
      uVar7 = FUN_00257bb0(uVar7);
      uVar7 = FUN_00257af8(uVar7);
      puVar11 = auStack_310 + iVar15;
      iVar15 = iVar15 + 1;
      uVar8 = FUN_00257580(uVar7,0x4170000000000000);
      uVar6 = FUN_00257518(uVar6,uVar8);
      uVar4 = FUN_00257bb0(uVar6);
      iVar17 = iVar15 * 4;
      *puVar11 = uVar4;
      uVar6 = uVar7;
    }
    uVar3 = FUN_00257bb0(uVar6);
    *(undefined4 *)((int)auStack_310 + iVar17) = uVar3;
  }
  uVar7 = FUN_00255520(0x3ff0000000000000,iStack_c8);
  iVar17 = iVar15;
  uVar6 = auStack_220[0];
  if (-1 < iVar15) {
    puVar16 = (undefined8 *)(puStack_bc + iVar15 * 8);
    puVar11 = auStack_310 + iVar15;
    iVar14 = iVar15;
    do {
      uVar4 = *puVar11;
      iVar14 = iVar14 + -1;
      puVar11 = puVar11 + -1;
      uVar6 = FUN_00257af8(uVar4);
      uVar6 = FUN_00257580(uVar7,uVar6);
      *puVar16 = uVar6;
      uVar7 = FUN_00257580(uVar7,0x3e70000000000000);
      puVar16 = puVar16 + -1;
      uVar6 = auStack_220[0];
    } while (-1 < iVar14);
  }
  do {
    auStack_220[0] = uVar6;
    if (iVar17 < 0) {
      if (uStack_b4 == 0) {
        if (iStack_d8 == 3) {
          uStack_b4 = 0;
          iStack_d8 = 3;
          iVar17 = iVar15;
          while (iVar14 = iVar15, uVar6 = auStack_220[1], 0 < iVar17) {
            uVar8 = auStack_220[iVar17];
            uVar7 = auStack_220[iVar17 + -1];
            uVar6 = FUN_002574c0(uVar7,uVar8);
            uVar7 = FUN_00257518(uVar7,uVar6);
            uVar7 = FUN_002574c0(uVar8,uVar7);
            auStack_220[iVar17] = uVar7;
            auStack_220[iVar17 + -1] = uVar6;
            iVar17 = iVar17 + -1;
          }
          while (1 < iVar14) {
            uVar8 = auStack_220[iVar14];
            uVar7 = auStack_220[iVar14 + -1];
            auStack_220[1] = uVar6;
            uVar6 = FUN_002574c0(uVar7,uVar8);
            uVar7 = FUN_00257518(uVar7,uVar6);
            uVar7 = FUN_002574c0(uVar8,uVar7);
            auStack_220[iVar14] = uVar7;
            auStack_220[iVar14 + -1] = uVar6;
            iVar14 = iVar14 + -1;
            uVar6 = auStack_220[1];
          }
          uVar7 = 0;
          for (; 1 < iVar15; iVar15 = iVar15 + -1) {
            uVar7 = FUN_002574c0(uVar7,auStack_220[iVar15]);
          }
          if (iStack_c4 == 0) {
            puStack_dc[2] = uVar7;
            *puStack_dc = auStack_220[0];
            puStack_dc[1] = uVar6;
          }
          else {
            uVar8 = FUN_00257518(0,auStack_220[0]);
            *puStack_dc = uVar8;
            uVar6 = FUN_00257518(0,uVar6);
            puStack_dc[1] = uVar6;
            uVar6 = FUN_00257518(0,uVar7);
            puStack_dc[2] = uVar6;
          }
        }
      }
      else if (iStack_d8 < 1) {
        if (iStack_d8 == 0) {
          uVar6 = 0;
          iStack_d8 = 0;
          for (; -1 < iVar15; iVar15 = iVar15 + -1) {
            uVar6 = FUN_002574c0(uVar6,auStack_220[iVar15]);
          }
          *puStack_dc = uVar6;
          if (iStack_c4 != 0) {
            uVar6 = FUN_00257518(0,uVar6);
            *puStack_dc = uVar6;
          }
        }
      }
      else {
        uVar7 = 0;
        for (iVar17 = iVar15; -1 < iVar17; iVar17 = iVar17 + -1) {
          uVar7 = FUN_002574c0(uVar7,auStack_220[iVar17]);
        }
        *puStack_dc = uVar7;
        if (iStack_c4 != 0) {
          uVar8 = FUN_00257518(0,uVar7);
          *puStack_dc = uVar8;
        }
        uVar6 = FUN_00257518(uVar6,uVar7);
        iVar17 = 1;
        if (0 < iVar15) {
          iVar14 = 8;
          do {
            iVar17 = iVar17 + 1;
            uVar6 = FUN_002574c0(uVar6,*(undefined8 *)((int)auStack_220 + iVar14));
            iVar14 = iVar17 * 8;
          } while (iVar17 <= iVar15);
        }
        puStack_dc[1] = uVar6;
        if (iStack_c4 != 0) {
          uVar6 = FUN_00257518(0,uVar6);
          puStack_dc[1] = uVar6;
        }
      }
      return uStack_b8;
    }
    uVar6 = 0;
    iVar14 = 0;
    if (uStack_b0 == 0) {
      iVar10 = iVar15 - iVar17;
      if (iVar10 < 0) goto LAB_00253f14;
      do {
        iVar12 = iVar17 + iVar14;
        iVar13 = iVar14 * 8;
        iVar14 = iVar14 + 1;
        uVar7 = FUN_00257580(*(undefined8 *)(&DAT_002bfcd8 + iVar13),
                             *(undefined8 *)(puStack_bc + iVar12 * 8));
        uVar6 = FUN_002574c0(uVar6,uVar7);
        if (iStack_cc < iVar14) goto LAB_00253f14;
        iVar12 = iVar10 * 8;
      } while (iVar14 <= iVar10);
    }
    else {
      iVar10 = iVar15 - iVar17;
LAB_00253f14:
      iVar12 = iVar10 << 3;
    }
    *(undefined8 *)((int)auStack_220 + iVar12) = uVar6;
    iVar17 = iVar17 + -1;
    uVar6 = auStack_220[0];
  } while( true );
}

