/* Ghidra pseudocode. PS2 address: 001599d8. Not validated source. */

void FUN_001599d8(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  long lVar8;
  uint *puVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  
  iVar12 = DAT_002c4694;
  puVar9 = (uint *)&uStack_e0;
  if (param_4 != 3) {
    iVar6 = DAT_002c4694 * 3;
    DAT_002c4694 = DAT_002c4694 + 1;
    (&DAT_0027e9a8)[iVar6] = (int)**(char **)(param_1 + 0x10);
    (&DAT_0027e9ac)[iVar12 * 3] = 8;
    (&DAT_0027e9b0)[iVar12 * 3] = param_4;
  }
  iVar12 = 0;
  iStack_b8 = param_1;
  iStack_b4 = param_2;
  iStack_b0 = param_4;
  do {
    lVar8 = FUN_00152ee8(0x27a598,iVar12);
    if (lVar8 != 0) {
      iVar13 = FUN_00154b40(0x27a598,iVar12);
      iVar14 = 0;
      lVar8 = FUN_00154b78(iVar13 + 0x18,0);
      iVar6 = DAT_002c4694;
      if ((lVar8 != 0) && (iVar14 = 1, (*(uint *)(iVar13 + 0x60) & 4) == 0)) {
        iVar3 = DAT_002c4694 * 3;
        iVar4 = DAT_002c4694 * 3;
        DAT_002c4694 = DAT_002c4694 + 1;
        (&DAT_0027e9a8)[iVar3] = iVar12;
        (&DAT_0027e9b0)[iVar4] = 2;
        (&DAT_0027e9ac)[iVar6 * 3] = 5;
      }
      lVar8 = FUN_00154b78(iVar13 + 0x18,1);
      iVar6 = DAT_002c4694;
      if ((lVar8 != 0) && (iVar14 = iVar14 + 1, (*(uint *)(iVar13 + 0x60) & 8) == 0)) {
        iVar3 = DAT_002c4694 * 3;
        iVar4 = DAT_002c4694 * 3;
        DAT_002c4694 = DAT_002c4694 + 1;
        (&DAT_0027e9a8)[iVar3] = iVar12;
        (&DAT_0027e9ac)[iVar6 * 3] = 5;
        (&DAT_0027e9b0)[iVar4] = 3;
      }
      lVar8 = FUN_00154b78(iVar13 + 0x18,2);
      if (((lVar8 != 0) && (iVar14 == 2)) && (*(int *)(iVar13 + 0x2c) == 0)) {
        iVar6 = DAT_002c4694 * 3;
        (&DAT_0027e9ac)[DAT_002c4694 * 3] = 9;
        (&DAT_0027e9a8)[iVar6] = iVar12;
        uVar5 = FUN_00154c60(0x27a598,iVar12);
        iVar6 = DAT_002c4694 * 3;
        DAT_002c4694 = DAT_002c4694 + 1;
        (&DAT_0027e9b0)[iVar6] = uVar5;
      }
      lVar8 = FUN_00154ab0(0x27a598,iVar12);
      iVar6 = DAT_002c4694;
      if (0 < lVar8) {
        iVar13 = DAT_002c4694 * 3;
        iVar14 = DAT_002c4694 * 3;
        DAT_002c4694 = DAT_002c4694 + 1;
        (&DAT_0027e9a8)[iVar13] = iVar12;
        (&DAT_0027e9ac)[iVar6 * 3] = 10;
        (&DAT_0027e9b0)[iVar14] = (int)lVar8;
      }
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < 4);
  iVar12 = 0;
  do {
    lVar8 = FUN_00152ee8(0x27a598,iVar12);
    if (lVar8 != 0) {
      iVar6 = FUN_00154b40(0x27a598,iVar12);
      iVar13 = 0;
      lVar8 = FUN_00154b78(iVar6 + 0x18,0);
      if (lVar8 != 0) {
        iVar13 = 1;
        if ((*(uint *)(iVar6 + 0x60) & 4) == 0) {
          *(uint *)(iVar6 + 0x60) = *(uint *)(iVar6 + 0x60) | 4;
        }
      }
      lVar8 = FUN_00154b78(iVar6 + 0x18,1);
      if (lVar8 != 0) {
        iVar13 = iVar13 + 1;
        if ((*(uint *)(iVar6 + 0x60) & 8) == 0) {
          *(uint *)(iVar6 + 0x60) = *(uint *)(iVar6 + 0x60) | 8;
        }
      }
      lVar8 = FUN_00154b78(iVar6 + 0x18,2);
      if ((lVar8 != 0) && (iVar13 == 2)) {
        *(undefined4 *)(iVar6 + 0x2c) = 1;
      }
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < 4);
  if (iStack_b4 != param_3) {
    iStack_ac = **(int **)(*(int *)(iStack_b8 + 0x10) + 0x18);
    uVar5 = *(undefined4 *)(*(int *)(iStack_b8 + 8) + 0x274);
    if (*(int *)(*(int *)(iStack_b8 + 8) + 0x278) == 4) {
      FUN_00159298(uVar5,&iStack_c0);
      if (iStack_c0 < 5) {
        uVar10 = **(uint **)(iStack_b8 + 4);
        uVar1 = (&DAT_0027e888)[(iStack_c0 + 1) * 6];
        if ((((int)uVar10 >> (uVar1 & 0x1f) ^ 1U) & 1) != 0) {
          **(uint **)(iStack_b8 + 4) = uVar10 | 1 << (uVar1 & 0x1f);
          (&DAT_0027e9a8)[DAT_002c4694 * 3] = (int)**(char **)(iStack_b8 + 0x10);
          (&DAT_0027e9b0)[DAT_002c4694 * 3] = uVar1;
          (&DAT_0027e9ac)[DAT_002c4694 * 3] = 2;
          DAT_002c4694 = DAT_002c4694 + 1;
        }
        iVar12 = DAT_002c4694;
        pcVar2 = *(char **)(iStack_b8 + 0x10);
        iVar6 = *(int *)(pcVar2 + 0x1c) + uVar1 * 4;
        if (*(char *)(iVar6 + 0x32) == '\0') {
          *(undefined1 *)(iVar6 + 0x32) = 1;
          iVar6 = DAT_002c4694 * 3;
          DAT_002c4694 = DAT_002c4694 + 1;
          (&DAT_0027e9a8)[iVar6] = (int)*pcVar2;
          (&DAT_0027e9ac)[iVar12 * 3] = 1;
          (&DAT_0027e9b0)[iVar12 * 3] = uVar1;
        }
      }
    }
    else {
      FUN_001592e0(uVar5,&iStack_bc);
      if (iStack_bc < 5) {
        uVar10 = **(uint **)(iStack_b8 + 4);
        uVar1 = (&DAT_0027e918)[(iStack_bc + 1) * 6];
        if ((((int)uVar10 >> (uVar1 & 0x1f) ^ 1U) & 1) != 0) {
          **(uint **)(iStack_b8 + 4) = uVar10 | 1 << (uVar1 & 0x1f);
          (&DAT_0027e9a8)[DAT_002c4694 * 3] = (int)**(char **)(iStack_b8 + 0x10);
          (&DAT_0027e9b0)[DAT_002c4694 * 3] = uVar1;
          (&DAT_0027e9ac)[DAT_002c4694 * 3] = 2;
          DAT_002c4694 = DAT_002c4694 + 1;
        }
        iVar12 = DAT_002c4694;
        pcVar2 = *(char **)(iStack_b8 + 0x10);
        iVar6 = *(int *)(pcVar2 + 0x1c) + uVar1 * 4;
        if (*(char *)(iVar6 + 0x33) == '\0') {
          *(undefined1 *)(iVar6 + 0x33) = 1;
          iVar6 = DAT_002c4694 * 3;
          DAT_002c4694 = DAT_002c4694 + 1;
          (&DAT_0027e9a8)[iVar6] = (int)*pcVar2;
          (&DAT_0027e9b0)[iVar12 * 3] = uVar1;
          (&DAT_0027e9ac)[iVar12 * 3] = 0;
        }
      }
    }
    iVar12 = DAT_002c4694;
    pcVar2 = *(char **)(iStack_b8 + 0x10);
    if ((*(char *)(*(int *)(pcVar2 + 0x1c) + DAT_0027e900 * 4 + 0x31) == '\0') &&
       (*(char *)(*(int *)(pcVar2 + 0x1c) + DAT_0027e990 * 4 + 0x30) == '\0')) {
      uVar10 = **(uint **)(iStack_b8 + 4);
      if ((((int)uVar10 >> 9 ^ 1U) & 1) != 0) {
        **(uint **)(iStack_b8 + 4) = uVar10 | 0x200;
        iVar6 = DAT_002c4694 * 3;
        DAT_002c4694 = DAT_002c4694 + 1;
        (&DAT_0027e9a8)[iVar6] = (int)*pcVar2;
        (&DAT_0027e9ac)[iVar12 * 3] = 2;
        (&DAT_0027e9b0)[iVar12 * 3] = 9;
        DAT_002c4690 = 1;
      }
    }
    if (iStack_b0 == 0) {
      uStack_e0 = DAT_002af8a0;
      uStack_d8 = DAT_002af8a8;
      uStack_d0 = DAT_002af8b0;
      uStack_c8 = DAT_002af8b8;
      iVar12 = 0;
      uVar10 = *(uint *)(*(int *)(iStack_b8 + 4) + 4);
      do {
        uVar1 = *puVar9;
        iVar12 = iVar12 + 1;
        if ((((int)uVar10 >> (uVar1 & 0x1f) ^ 1U) & 1) != 0) {
          *(uint *)(*(int *)(iStack_b8 + 4) + 4) = uVar10 | 1 << (uVar1 & 0x1f);
          (&DAT_0027e9a8)[DAT_002c4694 * 3] = (int)*pcVar2;
          (&DAT_0027e9b0)[DAT_002c4694 * 3] = uVar1;
          (&DAT_0027e9ac)[DAT_002c4694 * 3] = 3;
          DAT_002c4694 = DAT_002c4694 + 1;
          break;
        }
        puVar9 = puVar9 + 1;
      } while (iVar12 < 8);
    }
    uVar10 = 0;
    piVar11 = (int *)(&DAT_0027c92c + iStack_ac * 0xdc);
    do {
      iVar12 = DAT_002c4694;
      if (*piVar11 <= param_3) {
        uVar1 = *(uint *)(*(int *)(pcVar2 + 0x1c) + 0x5c);
        if ((((int)uVar1 >> (uVar10 & 0x1f) ^ 1U) & 1) != 0) {
          *(uint *)(*(int *)(pcVar2 + 0x1c) + 0x5c) = uVar1 | 1 << (uVar10 & 0x1f);
          iVar6 = DAT_002c4694 * 3;
          iVar13 = DAT_002c4694 * 3;
          DAT_002c4694 = DAT_002c4694 + 1;
          (&DAT_0027e9a8)[iVar6] = (int)*pcVar2;
          (&DAT_0027e9ac)[iVar12 * 3] = 4;
          (&DAT_0027e9b0)[iVar13] = uVar10;
        }
      }
      uVar10 = uVar10 + 1;
      piVar11 = piVar11 + 5;
    } while ((int)uVar10 < 0xb);
    iVar12 = 0;
    do {
      iVar6 = DAT_002c4694;
      if (iVar12 == 8) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar7 = &DAT_0027e0c0 + iVar12 * 0x10;
      }
      if ((iStack_b4 < *(int *)(puVar7 + 8)) && (*(int *)(puVar7 + 8) <= param_3)) {
        iVar13 = DAT_002c4694 * 3;
        iVar14 = DAT_002c4694 * 3;
        DAT_002c4694 = DAT_002c4694 + 1;
        (&DAT_0027e9a8)[iVar13] = (int)*pcVar2;
        (&DAT_0027e9ac)[iVar6 * 3] = 6;
        (&DAT_0027e9b0)[iVar14] = iVar12;
      }
      iVar6 = DAT_002c4694;
      iVar12 = iVar12 + 1;
    } while (iVar12 < 8);
    iVar12 = -1;
    if ((0xb3 < param_3) && (iStack_b4 < 0xb4)) {
      iVar12 = 0;
    }
    if ((0x77 < param_3) && (iStack_b4 < 0x78)) {
      iVar12 = 1;
    }
    if ((0x59 < param_3) && (iStack_b4 < 0x5a)) {
      iVar12 = 2;
    }
    if ((0x3b < param_3) && (iStack_b4 < 0x3c)) {
      iVar12 = 3;
    }
    if ((0x2c < param_3) && (iStack_b4 < 0x2d)) {
      iVar12 = 4;
    }
    if ((0x22 < param_3) && (iStack_b4 < 0x23)) {
      iVar12 = 5;
    }
    if ((0x13 < param_3) && (iStack_b4 < 0x14)) {
      iVar12 = 6;
    }
    if ((9 < param_3) && (iStack_b4 < 10)) {
      iVar12 = 7;
    }
    if ((4 < param_3) && (iStack_b4 < 5)) {
      iVar12 = 8;
    }
    if ((-1 < param_3) && (iStack_b4 < 0)) {
      iVar12 = 9;
    }
    if (-1 < iVar12) {
      iVar13 = DAT_002c4694 * 3;
      DAT_002c4694 = DAT_002c4694 + 1;
      (&DAT_0027e9a8)[iVar13] = (int)*pcVar2;
      (&DAT_0027e9ac)[iVar6 * 3] = 7;
      (&DAT_0027e9b0)[iVar6 * 3] = iVar12;
    }
  }
  return;
}

