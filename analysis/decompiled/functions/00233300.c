/* Ghidra pseudocode. PS2 address: 00233300. Not validated source. */

int FUN_00233300(int *param_1,int param_2,undefined2 *param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  int iVar13;
  uint uVar14;
  short *psVar15;
  uint uVar16;
  uint uVar17;
  short *psVar18;
  uint uVar19;
  short *psVar20;
  ulong uVar21;
  short *psVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  uint uVar26;
  
  iVar11 = 1;
  if (param_1[4] == 0x10000) {
    if ((char)param_1[9] == '\0') {
      bVar1 = *(byte *)((int)param_1 + 0x26);
      iVar24 = *param_1;
      iVar23 = param_2 + ((int)*(char *)((int)param_1 + 0x26) - (int)*(char *)((int)param_1 + 0x25))
      ;
    }
    else {
      cVar9 = *(char *)((int)param_1 + 0x25);
      iVar23 = 0;
      bVar1 = *(byte *)((int)param_1 + 0x26);
      if ((int)*(char *)((int)param_1 + 0x26) - (int)cVar9 < 1) {
        iVar24 = *param_1;
      }
      else {
        iVar24 = *param_1;
        do {
          iVar13 = iVar23 * 2;
          iVar10 = iVar23 + cVar9;
          iVar23 = iVar23 + 1;
          *(undefined2 *)(iVar13 + param_4) = *(undefined2 *)((int)param_1 + iVar10 * 2 + 0x28);
          cVar9 = *(char *)((int)param_1 + 0x25);
          bVar1 = *(byte *)((int)param_1 + 0x26);
        } while (iVar23 < (int)*(char *)((int)param_1 + 0x26) - (int)cVar9);
      }
      param_4 = param_4 + ((int)(char)bVar1 - (int)cVar9) * 2;
      iVar23 = param_2;
    }
    if (iVar24 != 0) {
      iVar11 = (**(code **)(iVar24 + 4))
                         (iVar24,iVar23,param_3,param_4,*(undefined2 *)((int)param_1 + 0xe));
      bVar1 = *(byte *)((int)param_1 + 0x26);
    }
    uVar21 = (ulong)bVar1;
    if ((char)param_1[9] == '\0') {
      *(undefined1 *)(param_1 + 9) = 1;
      lVar25 = 0;
      if (0 < (int)((uint)bVar1 << 0x18)) {
        cVar9 = *(char *)((int)param_1 + 0x25);
        while( true ) {
          iVar24 = (int)lVar25;
          lVar25 = (long)(iVar24 + 1);
          *(undefined2 *)((int)param_1 + iVar24 * 2 + 0x28) =
               *(undefined2 *)(((param_2 + iVar24) - (int)cVar9) * 2 + param_4);
          if (*(char *)((int)param_1 + 0x26) <= lVar25) break;
          cVar9 = *(char *)((int)param_1 + 0x25);
        }
      }
    }
    else {
      lVar25 = 0;
      if (0 < (int)((uint)bVar1 << 0x18)) {
        do {
          iVar24 = (int)lVar25;
          lVar25 = (long)(iVar24 + 1);
          *(undefined2 *)((int)param_1 + iVar24 * 2 + 0x28) =
               *(undefined2 *)(((param_2 + iVar24) - (int)(char)uVar21) * 2 + param_4);
          uVar21 = (ulong)*(char *)((int)param_1 + 0x26);
        } while (lVar25 < (long)uVar21);
      }
    }
    if (iVar11 < 1) {
      param_2 = iVar11;
    }
  }
  else {
    uVar26 = param_1[8];
    uVar14 = param_1[4] * param_2 + uVar26 >> 0x10;
    if ((char)param_1[9] == '\0') {
      lVar25 = 0;
      uVar14 = uVar14 + ((int)*(char *)((int)param_1 + 0x26) - (int)*(char *)((int)param_1 + 0x25));
      if ('\0' < *(char *)((int)param_1 + 0x25)) {
        do {
          *param_3 = 0;
          lVar25 = (long)((int)lVar25 + 1);
          param_3 = param_3 + 1;
        } while (lVar25 < *(char *)((int)param_1 + 0x25));
      }
    }
    else {
      lVar25 = 0;
      bVar1 = *(byte *)((int)param_1 + 0x26);
      if ('\0' < *(char *)((int)param_1 + 0x26)) {
        do {
          iVar11 = (int)lVar25;
          lVar25 = (long)(iVar11 + 1);
          param_3[iVar11] = *(undefined2 *)((int)param_1 + iVar11 * 2 + 0x28);
          bVar1 = *(byte *)((int)param_1 + 0x26);
        } while (lVar25 < *(char *)((int)param_1 + 0x26));
      }
      param_3 = (undefined2 *)((int)param_3 + ((int)((uint)bVar1 << 0x18) >> 0x17));
    }
    if ((int)uVar14 < 1) {
      cVar9 = (char)param_1[9];
    }
    else {
      iVar11 = *param_1;
      if (iVar11 != 0) {
        iVar11 = (**(code **)(iVar11 + 4))
                           (iVar11,uVar14,param_4,param_3,*(undefined2 *)((int)param_1 + 0xe));
        if (iVar11 < 1) {
          return iVar11;
        }
        uVar26 = param_1[8];
      }
      cVar9 = (char)param_1[9];
    }
    if (cVar9 == '\0') {
      *(undefined1 *)(param_1 + 9) = 1;
    }
    else {
      param_3 = param_3 + -((int)*(char *)((int)param_1 + 0x26) -
                           (int)*(char *)((int)param_1 + 0x25));
    }
    iVar11 = 0;
    if (0 < param_2) {
      iVar24 = param_1[4];
      iVar23 = param_1[5];
      iVar10 = param_1[6];
      iVar13 = param_1[7];
      do {
        uVar17 = uVar26 + iVar24;
        psVar12 = param_3 + (uVar26 >> 0x10);
        uVar16 = uVar26 & 0xffff;
        uVar14 = uVar26 + iVar23;
        uVar19 = uVar26 + iVar10;
        psVar18 = param_3 + (uVar17 >> 0x10);
        sVar2 = *psVar18;
        sVar3 = psVar18[1];
        psVar15 = param_3 + (uVar14 >> 0x10);
        psVar20 = param_3 + (uVar19 >> 0x10);
        sVar4 = *psVar15;
        sVar5 = psVar15[1];
        psVar22 = (short *)(iVar11 * 2 + param_4);
        sVar6 = psVar20[1];
        uVar26 = uVar26 + iVar13;
        sVar7 = *psVar20;
        *psVar22 = *psVar12 + (short)(((int)psVar12[1] - (int)*psVar12) * uVar16 >> 0x10);
        sVar8 = *psVar18;
        iVar11 = iVar11 + 4;
        param_1[8] = uVar26;
        psVar22[1] = sVar8 + (short)(((int)sVar3 - (int)sVar2) * (uVar17 & 0xffff) >> 0x10);
        psVar22[2] = *psVar15 + (short)(((int)sVar5 - (int)sVar4) * (uVar14 & 0xffff) >> 0x10);
        psVar22[3] = *psVar20 + (short)(((int)sVar6 - (int)sVar7) * (uVar19 & 0xffff) >> 0x10);
      } while (iVar11 < param_2);
    }
    lVar25 = 0;
    if ('\0' < *(char *)((int)param_1 + 0x26)) {
      cVar9 = *(char *)((int)param_1 + 0x25);
      while( true ) {
        iVar11 = (int)lVar25;
        lVar25 = (long)(iVar11 + 1);
        *(undefined2 *)((int)param_1 + iVar11 * 2 + 0x28) =
             param_3[((uVar26 >> 0x10) + iVar11) - (int)cVar9];
        if (*(char *)((int)param_1 + 0x26) <= lVar25) break;
        cVar9 = *(char *)((int)param_1 + 0x25);
      }
    }
    param_1[8] = uVar26 & 0xffff;
  }
  return param_2;
}

