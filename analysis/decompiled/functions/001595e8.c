/* Ghidra pseudocode. PS2 address: 001595e8. Not validated source. */

undefined1 FUN_001595e8(undefined8 param_1)

{
  byte bVar1;
  int *piVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  
  DAT_002c4694 = 0;
  DAT_002c4690 = 0;
  iVar8 = (int)param_1;
  iVar11 = *(int *)(*(int *)(iVar8 + 8) + 0x278);
  if (1 < iVar11 - 4U) {
LAB_00159644:
    iVar11 = 0;
    iVar8 = 0;
    lVar13 = 3;
    goto LAB_001598fc;
  }
  if (iVar11 == 4) {
    lVar13 = FUN_00154078(0x27a598);
    if (lVar13 != 3) goto LAB_00159644;
    piVar2 = *(int **)(iVar8 + 8);
  }
  else {
    piVar2 = *(int **)(iVar8 + 8);
  }
  lVar13 = 3;
  if (piVar2[0x9e] == 5) {
    uVar12 = (ulong)*(byte *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x1c) + piVar2[0x9d] * 4 + 0x30);
    lVar13 = FUN_00159328(*(undefined4 *)(*(int *)(iVar8 + 0xc) + 0xa0));
  }
  else {
    iVar11 = 0;
    uVar12 = (ulong)*(byte *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x1c) + piVar2[0x9d] * 4 + 0x31);
    while( true ) {
      if (*piVar2 <= iVar11) break;
      if (-1 < (char)piVar2[*(int *)(*(int *)(iVar8 + 0xc) + iVar11 * 4) * 0x1a + 0x16]) {
        lVar13 = FUN_00159388(iVar11);
        break;
      }
      iVar11 = iVar11 + 1;
    }
  }
  iVar9 = *(int *)(iVar8 + 0x10);
  iVar10 = *(int *)(iVar9 + 0x1c);
  iVar11 = *(int *)(iVar10 + 4) + *(int *)(iVar10 + 8);
  iVar7 = *(int *)(&DAT_002af8c0 + (int)lVar13 * 4) - *(int *)(&DAT_002af8c0 + (int)uVar12 * 4);
  if (lVar13 < (long)uVar12) {
    iVar9 = *(int *)(*(int *)(iVar8 + 8) + 0x274);
    if (*(int *)(*(int *)(iVar8 + 8) + 0x278) == 5) {
      *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + iVar7;
      *(char *)(iVar10 + iVar9 * 4 + 0x30) = (char)lVar13;
    }
    else {
      *(int *)(iVar10 + 4) = *(int *)(iVar10 + 4) + iVar7;
      *(char *)(iVar10 + iVar9 * 4 + 0x31) = (char)lVar13;
    }
    piVar2 = *(int **)(*(int *)(iVar8 + 0x10) + 0x1c);
    *piVar2 = *piVar2 + iVar7;
    FUN_0015a890(param_1,iVar7);
    iVar9 = *(int *)(iVar8 + 0x10);
    iVar10 = 0;
    iVar8 = 0;
    pbVar5 = &DAT_0027c398 + **(int **)(iVar9 + 0x18) * 0x3c;
    do {
      pbVar4 = (byte *)(*(int *)(iVar9 + 0x1c) + 0xc + iVar8);
      bVar1 = *pbVar5;
      iVar8 = iVar8 + 1;
      pbVar5 = pbVar5 + 1;
      iVar10 = iVar10 + ((uint)bVar1 - (uint)*pbVar4);
    } while (iVar8 < 4);
    piVar2 = *(int **)(iVar9 + 0x1c);
    if (iVar10 < *piVar2) {
      *piVar2 = iVar10;
      goto LAB_001598e0;
    }
    bVar3 = true;
    if (*(char *)((int)piVar2 + DAT_0027e888 * 4 + 0x31) == '\0') {
      iVar8 = 1;
      do {
        if (5 < iVar8) goto LAB_00159878;
        iVar7 = iVar8 * 6;
        iVar8 = iVar8 + 1;
      } while (*(char *)(*(int *)(iVar9 + 0x1c) + (&DAT_0027e888)[iVar7] * 4 + 0x31) == '\0');
    }
    bVar3 = false;
LAB_00159878:
    if (!bVar3) goto LAB_001598e0;
    iVar6 = 0;
    iVar8 = *(int *)(iVar9 + 0x1c);
    iVar7 = DAT_0027e918;
    while (iVar6 = iVar6 + 1, *(char *)(iVar8 + iVar7 * 4 + 0x30) == '\0') {
      if (5 < iVar6) goto LAB_001598d0;
      iVar7 = (&DAT_0027e918)[iVar6 * 6];
      iVar8 = *(int *)(iVar9 + 0x1c);
    }
    bVar3 = false;
LAB_001598d0:
    if (bVar3) {
      **(int **)(iVar9 + 0x1c) = iVar10;
      goto LAB_001598e0;
    }
    iVar8 = *(int *)(iVar9 + 0x1c);
  }
  else {
LAB_001598e0:
    iVar8 = *(int *)(iVar9 + 0x1c);
  }
  iVar8 = *(int *)(iVar8 + 4) + *(int *)(iVar8 + 8);
LAB_001598fc:
  FUN_001599d8(param_1,iVar11,iVar8,lVar13);
  if (DAT_002c4694 != 0) {
    DAT_0027bbfc = 1;
  }
  return 1;
}

