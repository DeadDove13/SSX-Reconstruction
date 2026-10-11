/* Ghidra pseudocode. PS2 address: 00215970. Not validated source. */

void FUN_00215970(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  undefined4 uVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  int *piVar19;
  undefined4 *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  byte *pbVar25;
  byte *pbVar26;
  ulong in_hi1;
  
  uVar23 = 1;
  uVar15 = (undefined4)param_2;
  iVar11 = (int)param_1;
  FUN_00214530(param_1,param_2,*(undefined4 *)(iVar11 + 0x2dcc),8);
  if (*(int *)(iVar11 + 0x2dc0) != 0) {
    puVar20 = (undefined4 *)(iVar11 + 0xd04);
    uVar2 = *puVar20;
    while( true ) {
      uVar23 = uVar23 + 1;
      puVar20 = puVar20 + 1;
      FUN_00214988(param_1,uVar15,uVar2);
      if (*(uint *)(iVar11 + 0x2dc0) < uVar23) break;
      uVar2 = *puVar20;
    }
  }
  iVar8 = iVar11 + 0x2564;
  iVar12 = iVar11 + 0x2964;
  uVar23 = 0;
  do {
    puVar13 = (undefined1 *)(iVar11 + uVar23);
    uVar23 = uVar23 + 1;
    *puVar13 = 0;
  } while (uVar23 < 0x100);
  uVar24 = 0xff;
  uVar23 = 0;
  if (*(int *)(iVar11 + 0x2dc4) != 0) {
    iVar9 = 0;
    do {
      uVar23 = uVar23 + 1;
      iVar10 = -1;
      do {
        uVar24 = uVar24 + 1 & 0xff;
        if (*(char *)(iVar11 + uVar24) == '\0') {
          iVar10 = iVar10 + 1;
        }
      } while (*(uint *)(iVar11 + 0x2dec + iVar9) != uVar24);
      *(char *)(iVar11 + uVar24) = '\x01';
      FUN_00214988(param_1,uVar15,iVar10);
      iVar9 = uVar23 * 4;
    } while (uVar23 < *(uint *)(iVar11 + 0x2dc4));
  }
  if (*(int *)(iVar11 + 0x2dd4) == 0) {
    *(undefined4 *)(iVar11 + 0x2dcc) = 32000;
    pbVar26 = *(byte **)(iVar11 + 0x2db0);
  }
  else {
    pbVar26 = *(byte **)(iVar11 + 0x2db0);
  }
  uVar23 = 0x100;
  do {
    pbVar4 = *(byte **)(iVar11 + 0x2db4);
    if (pbVar4 <= pbVar26) {
      iVar11 = *(int *)(iVar11 + 0x2dcc) * 4;
      FUN_00214530(param_1,uVar15,*(undefined4 *)(iVar12 + iVar11),*(undefined4 *)(iVar8 + iVar11));
      FUN_00214988(param_1,uVar15,0);
      FUN_00214530(param_1,uVar15,2,2);
      FUN_00214530(param_1,uVar15,0,7);
      return;
    }
    uVar24 = (uint)*pbVar26;
    pbVar25 = pbVar26 + 1;
    if (uVar24 == uVar23) {
      uVar21 = 0;
      uVar3 = *(uint *)(iVar11 + 0x2dd4);
      pbVar14 = pbVar26 + 0x7531;
      if (pbVar4 < pbVar26 + 0x7531) {
        pbVar14 = pbVar4;
      }
      if (pbVar25 < pbVar14) {
        bVar1 = *pbVar25;
        while( true ) {
          uVar24 = (uint)bVar1;
          uVar21 = uVar21 + 1;
          pbVar25 = pbVar25 + 1;
          if ((uVar24 != uVar23) || (pbVar14 <= pbVar25)) break;
          bVar1 = *pbVar25;
        }
      }
      uVar16 = 32000;
      uVar5 = (ulong)(int)(uVar21 * *(int *)(iVar8 + (uint)*pbVar26 * 4));
      uVar17 = uVar16;
      if (uVar3 != 0) {
        iVar9 = *(int *)(iVar11 + 0x2dcc) * 4;
        if ((*(int *)(iVar11 + 0x100 + iVar9) != 0) && (uVar17 = 0x14, uVar21 < 0xfc)) {
          uVar17 = (ulong)(*(int *)(iVar8 + iVar9) + *(int *)(iVar11 + uVar21 * 4 + 0xd44) * 2 + 3);
        }
        if (1 < uVar3) {
          uVar16 = 0;
          iVar9 = uVar3 - 1;
          uVar22 = uVar21;
          if (iVar9 != 0) {
            iVar10 = *(int *)(iVar11 + 0x2dcc) * 4;
            piVar19 = (int *)(iVar9 * 4 + iVar10 + iVar11 + 0x100);
            piVar18 = (int *)(iVar9 * 4 + iVar10 + iVar8);
            do {
              if (*piVar19 != 0) {
                if (iVar9 == 0) {
                  trap(7);
                }
                lVar6 = (uVar16 | in_hi1) + (long)(((int)uVar22 / iVar9) * *piVar18);
                uVar16 = (ulong)(int)lVar6;
                in_hi1 = (ulong)(int)((ulong)lVar6 >> 0x20);
                uVar22 = uVar22 - ((int)uVar22 / iVar9) * iVar9;
              }
              piVar18 = piVar18 + -1;
              iVar9 = iVar9 + -1;
              piVar19 = piVar19 + -1;
            } while (iVar9 != 0);
          }
          if (uVar22 != 0) {
            uVar16 = 32000;
          }
        }
      }
      pbVar26 = pbVar25;
      if ((uVar17 < uVar5) || (uVar16 < uVar5)) {
        if (uVar16 <= uVar17) {
          if (uVar3 - 1 != 0) {
            iVar9 = *(int *)(iVar11 + 0x2dcc);
            iVar10 = uVar3 - 1;
            while( true ) {
              if (*(int *)(iVar11 + 0x100 + (iVar9 + iVar10) * 4) != 0) {
                iVar9 = (int)uVar21 / iVar10;
                if (iVar10 == 0) {
                  trap(7);
                }
                uVar21 = uVar21 - iVar9 * iVar10;
                while (iVar9 = iVar9 + -1, iVar9 != -1) {
                  FUN_00214bb0(param_1,uVar15,*(int *)(iVar11 + 0x2dcc) + iVar10);
                }
              }
              if (iVar10 + -1 == 0) break;
              iVar9 = *(int *)(iVar11 + 0x2dcc);
              iVar10 = iVar10 + -1;
            }
          }
          goto LAB_00215d40;
        }
        iVar9 = *(int *)(iVar11 + 0x2dcc) * 4;
        FUN_00214530(param_1,uVar15,*(undefined4 *)(iVar12 + iVar9),*(undefined4 *)(iVar8 + iVar9));
        FUN_00214988(param_1,uVar15,uVar21);
        iVar9 = *(int *)(iVar11 + 0x2dd8);
      }
      else {
        iVar9 = uVar21 - 1;
        if (iVar9 == -1) {
          iVar9 = *(int *)(iVar11 + 0x2dd8);
        }
        else {
          do {
            FUN_00214bb0(param_1,uVar15,uVar23);
            iVar9 = iVar9 + -1;
          } while (iVar9 != -1);
          iVar9 = *(int *)(iVar11 + 0x2dd8);
        }
      }
    }
    else {
LAB_00215d40:
      iVar9 = *(int *)(iVar11 + 0x2dd8);
      pbVar26 = pbVar25;
    }
    bVar7 = false;
    if (((iVar9 != 0) && (iVar9 = uVar24 - uVar23, iVar9 <= *(int *)(iVar11 + 0x2de0))) &&
       (*(int *)(iVar11 + 0x2ddc) <= iVar9)) {
      iVar9 = (iVar9 + -1) * 2 + *(int *)(iVar11 + 0x2dd0);
      if (uVar24 < uVar23) {
        iVar9 = ((uVar23 - uVar24) + -1) * 2 + *(int *)(iVar11 + 0x2dd0) + 1;
      }
      if (*(uint *)(iVar8 + iVar9 * 4) < *(uint *)(iVar8 + uVar24 * 4)) {
        bVar7 = true;
        FUN_00214530(param_1,uVar15,*(undefined4 *)(iVar12 + iVar9 * 4));
      }
    }
    uVar23 = uVar24;
    if (!bVar7) {
      FUN_00214bb0(param_1,uVar15,uVar24);
    }
  } while( true );
}

