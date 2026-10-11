/* Ghidra pseudocode. PS2 address: 00231850. Not validated source. */

void FUN_00231850(undefined4 *param_1,long param_2,undefined4 *param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  
  iVar8 = (int)param_4;
  if (param_2 != 0) {
    iVar10 = 0;
    iVar12 = 0;
    uVar6 = param_1[1];
    do {
      bVar1 = (&DAT_002a2e58)[(uVar6 & 0xff) + iVar10 * 0x100];
      iVar11 = (uint)bVar1 * 0xc;
      iVar10 = *(int *)(&DAT_002a3058 + iVar11);
      uVar7 = param_1[2] - *(uint *)(&DAT_002a305c + iVar11);
      uVar6 = uVar6 >> (*(uint *)(&DAT_002a305c + iVar11) & 0x1f);
      param_1[1] = uVar6;
      param_1[2] = uVar7;
      if ((int)uVar7 < 8) {
        bVar2 = *(byte *)*param_1;
        param_1[2] = uVar7 + 8;
        *param_1 = (byte *)*param_1 + 1;
        param_1[1] = uVar6 | (uint)bVar2 << (uVar7 & 0x1f);
      }
      if (bVar1 < 4) {
        if (bVar1 < 2) {
          iVar11 = 7;
          while( true ) {
            iVar3 = param_1[2];
            uVar7 = (uint)param_1[1] >> 1;
            uVar9 = param_1[1] & DAT_002a2d34;
            param_1[1] = uVar7;
            uVar6 = iVar3 - 1;
            param_1[2] = uVar6;
            if ((int)uVar6 < 8) {
              bVar1 = *(byte *)*param_1;
              param_1[2] = iVar3 + 7;
              *param_1 = (byte *)*param_1 + 1;
              param_1[1] = uVar7 | (uint)bVar1 << (uVar6 & 0x1f);
            }
            if (uVar9 != 1) break;
            iVar11 = iVar11 + 1;
          }
          iVar3 = param_1[2];
          uVar7 = (uint)param_1[1] >> 1;
          uVar9 = param_1[1] & DAT_002a2d34;
          uVar6 = iVar3 - 1;
          param_1[1] = uVar7;
          param_1[2] = uVar6;
          if ((int)uVar6 < 8) {
            bVar1 = *(byte *)*param_1;
            param_1[2] = iVar3 + 7;
            *param_1 = (byte *)*param_1 + 1;
            param_1[1] = uVar7 | (uint)bVar1 << (uVar6 & 0x1f);
          }
          if (uVar9 != 1) {
            fVar13 = (float)-iVar11;
            goto LAB_00231ac0;
          }
          param_3[iVar12] = (float)iVar11;
          iVar12 = iVar12 + iVar8;
        }
        else {
          iVar11 = param_1[2];
          uVar7 = (uint)param_1[1] >> 6;
          uVar9 = param_1[1] & DAT_002a2d48;
          uVar6 = iVar11 - 6;
          param_1[1] = uVar7;
          param_1[2] = uVar6;
          if ((int)uVar6 < 8) {
            bVar1 = *(byte *)*param_1;
            param_1[2] = iVar11 + 2;
            *param_1 = (byte *)*param_1 + 1;
            param_1[1] = uVar7 | (uint)bVar1 << (uVar6 & 0x1f);
          }
          iVar11 = uVar9 + 7;
          if (0x6c < iVar8 * iVar11 + iVar12) {
            if (param_4 == 0) {
              trap(7);
            }
            iVar11 = (0x6c - iVar12) / iVar8;
          }
          if (0 < iVar11) {
            puVar4 = param_3 + iVar12;
            do {
              *puVar4 = 0;
              iVar12 = iVar12 + iVar8;
              puVar4 = puVar4 + iVar8;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
        }
      }
      else {
        fVar13 = *(float *)(&DAT_002a3060 + iVar11);
LAB_00231ac0:
        param_3[iVar12] = fVar13;
        iVar12 = iVar12 + iVar8;
      }
      if (0x6b < iVar12) {
        return;
      }
      uVar6 = param_1[1];
    } while( true );
  }
  iVar10 = 0;
  do {
    uVar6 = param_1[1];
    uVar7 = uVar6 & 3;
    if (uVar7 == 1) {
      iVar12 = param_1[2];
      *param_3 = 0xc0000000;
LAB_00231b6c:
      uVar6 = uVar6 >> 2;
      uVar7 = iVar12 - 2;
      param_1[1] = uVar6;
      param_1[2] = uVar7;
      if ((int)uVar7 < 8) {
        pbVar5 = (byte *)*param_1;
        iVar12 = iVar12 + 6;
LAB_00231b88:
        bVar1 = *pbVar5;
        param_1[2] = iVar12;
        *param_1 = pbVar5 + 1;
        param_1[1] = uVar6 | (uint)bVar1 << (uVar7 & 0x1f);
      }
    }
    else {
      if (uVar7 == 0) {
        iVar12 = param_1[2];
      }
      else {
        if (uVar7 != 2) {
          if (uVar7 == 3) {
            iVar12 = param_1[2];
            *param_3 = 0x40000000;
            goto LAB_00231b6c;
          }
          goto LAB_00231ba8;
        }
        iVar12 = param_1[2];
      }
      uVar6 = uVar6 >> 1;
      *param_3 = 0;
      uVar7 = iVar12 - 1;
      param_1[1] = uVar6;
      param_1[2] = uVar7;
      if ((int)uVar7 < 8) {
        pbVar5 = (byte *)*param_1;
        iVar12 = iVar12 + 7;
        goto LAB_00231b88;
      }
    }
LAB_00231ba8:
    iVar10 = iVar10 + iVar8;
    param_3 = param_3 + iVar8;
    if (0x6b < iVar10) {
      return;
    }
  } while( true );
}

