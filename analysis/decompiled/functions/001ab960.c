/* Ghidra pseudocode. PS2 address: 001ab960. Not validated source. */

void FUN_001ab960(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  iVar10 = *(int *)(DAT_002859e4 + 0x58);
  iVar1 = *(int *)(DAT_002859e4 + 0x5c);
  DAT_0028ad3c = 1.0;
  DAT_0028ad30 = 0x3f800000;
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 1.0;
  FUN_001a1170(DAT_002c331c,0x42dc0000,0x42aa0000,iVar1,0x28f670);
  fVar14 = DAT_002c3324;
  fVar15 = DAT_002c3320;
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    fVar13 = 0.0;
    iVar3 = 0;
    do {
      puVar7 = &DAT_0028f270 + iVar3;
      if (puVar7 != (undefined *)0x0) {
        iVar4 = (&DAT_0028b160)[iVar11];
        if (iVar4 == 1) {
          iVar4 = FUN_001a0a88(0x3f800000,iVar1,puVar7,0);
          fVar12 = (((float)(&DAT_0028b248)[iVar11 + 1] + (float)(&DAT_0028b248)[iVar11]) -
                   (float)iVar4) * 0.5;
        }
        else if (iVar4 < 2) {
          if (iVar4 == 0) {
            fVar12 = (float)(&DAT_0028b248)[iVar11];
          }
          else {
            fVar12 = (float)(&DAT_0028b248)[iVar11];
          }
        }
        else if (iVar4 == 2) {
          iVar4 = FUN_001a0a88(0x3f800000,iVar1,puVar7,0);
          fVar12 = (float)(&DAT_0028b248)[iVar11 + 1] - (float)iVar4;
        }
        else {
          fVar12 = (float)(&DAT_0028b248)[iVar11];
        }
        DAT_0028ad38 = 1.0;
        DAT_0028ad3c = 1.0;
        if (*(int *)(&DAT_0028b1a0 + iVar11 * 4) == 0) {
          DAT_0028ad38 = fVar15;
          DAT_0028ad3c = fVar13;
        }
        else if (*(int *)(&DAT_0028b1a0 + iVar11 * 4) == 1) {
          DAT_0028ad3c = fVar14;
          DAT_0028ad38 = fVar14;
        }
        DAT_0028ad34 = 0x3f800000;
        DAT_0028ad30 = 0x3f800000;
        FUN_001a1368(fVar12,DAT_002c5218,iVar1,&DAT_0028f270 + iVar3);
      }
      iVar11 = iVar11 + 1;
      iVar3 = iVar11 * 0x80;
    } while (iVar11 < *(int *)(param_1 + 8));
  }
  if (0 < *(int *)(param_1 + 4)) {
    iVar11 = *(int *)(param_1 + 8);
    iVar3 = 0;
    while( true ) {
      iVar4 = 0;
      if (0 < iVar11) {
        fVar14 = 0.5;
        fVar15 = DAT_002c3328;
        do {
          iVar11 = (&DAT_0028b1c0)[iVar3];
          DAT_0028ad38 = 1.0;
          DAT_0028ad3c = 1.0;
          if ((iVar11 != -1) || (*(int *)(&DAT_0028b1a0 + iVar4 * 4) != -1)) {
            iVar5 = *(int *)(&DAT_0028b1a0 + iVar4 * 4);
            if (*(int *)(&DAT_0028b1a0 + iVar4 * 4) < iVar11) {
              iVar5 = iVar11;
            }
            fVar13 = fVar15;
            if ((iVar5 == 0) || (fVar13 = fVar14, iVar5 == 1)) {
              DAT_0028ad38 = fVar13;
              DAT_0028ad3c = 0.0;
            }
          }
          DAT_0028ad34 = 0x3f800000;
          DAT_0028ad30 = 0x3f800000;
          puVar7 = &DAT_0028b270 + iVar4 * 0x800 + iVar3 * 0x80;
          if (puVar7 != (undefined *)0x0) {
            iVar11 = (&DAT_0028b160)[iVar4];
            iVar5 = iVar1;
            if ((&DAT_0028b180)[iVar4] == 0) {
              iVar5 = iVar10;
            }
            if (iVar11 == 1) {
              iVar11 = FUN_001a0a88(0x3f800000,iVar5,puVar7,0);
              fVar13 = (((float)(&DAT_0028b248)[iVar4 + 1] + (float)(&DAT_0028b248)[iVar4]) -
                       (float)iVar11) * fVar14;
            }
            else if (iVar11 < 2) {
              if (iVar11 == 0) {
                fVar13 = (float)(&DAT_0028b248)[iVar4];
              }
              else {
                fVar13 = (float)(&DAT_0028b248)[iVar4];
              }
            }
            else if (iVar11 == 2) {
              iVar11 = FUN_001a0a88(0x3f800000,iVar5,puVar7,0);
              fVar13 = (float)(&DAT_0028b248)[iVar4 + 1] - (float)iVar11;
            }
            else {
              fVar13 = (float)(&DAT_0028b248)[iVar4];
            }
            FUN_001a1368(fVar13,(&DAT_0028b200)[iVar3],iVar5,
                         &DAT_0028b270 + iVar4 * 0x800 + iVar3 * 0x80);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(param_1 + 8));
      }
      if (*(int *)(param_1 + 4) <= iVar3 + 1) break;
      iVar11 = *(int *)(param_1 + 8);
      iVar3 = iVar3 + 1;
    }
  }
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    lVar8 = 0;
    if (0 < *(int *)(param_1 + 0x34)) {
      puVar9 = (undefined4 *)(param_1 + 0x10);
      do {
        uVar2 = *puVar9;
        iVar10 = iVar10 + 1;
        puVar9 = puVar9 + 2;
        lVar6 = FUN_001a0a88(0x3f800000,iVar1,uVar2,0);
        if (lVar8 < lVar6) {
          lVar8 = lVar6;
        }
      } while (iVar10 < *(int *)(param_1 + 0x34));
    }
    iVar11 = *(int *)(iVar1 + 0xc);
    fVar15 = DAT_002c332c - (float)(int)lVar8;
    iVar10 = *(int *)(param_1 + 0x34) + -1;
    if (-1 < iVar10) {
      puVar9 = (undefined4 *)(iVar10 * 8 + 0x10 + param_1);
      fVar14 = 450.0;
      fVar13 = DAT_002c3330;
      do {
        DAT_0028ad38 = 1.0;
        DAT_0028ad3c = 1.0;
        if (iVar10 == *(int *)(param_1 + 0x38)) {
          DAT_0028ad3c = 0.0;
          DAT_0028ad38 = fVar13;
        }
        DAT_0028ad34 = 0x3f800000;
        DAT_0028ad30 = 0x3f800000;
        uVar2 = *puVar9;
        fVar12 = fVar14 - ((float)iVar11 + 4.0);
        puVar9 = puVar9 + -2;
        FUN_001a1368(fVar15,fVar14,iVar1,uVar2);
        iVar10 = iVar10 + -1;
        fVar14 = fVar12;
      } while (-1 < iVar10);
    }
  }
  if (*(int *)(DAT_002859e4 + 0x2c) == 0) {
    return;
  }
  return;
}

