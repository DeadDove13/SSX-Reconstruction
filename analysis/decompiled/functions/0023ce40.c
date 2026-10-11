/* Ghidra pseudocode. PS2 address: 0023ce40. Not validated source. */

void FUN_0023ce40(long param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *unaff_s3_lo;
  int *unaff_s5_lo;
  int *unaff_s6_lo;
  int *unaff_s8_lo;
  
  if ((param_1 == 0) || (*(int *)*(undefined4 *)param_1 != 0x4d525453)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    unaff_s3_lo = (int *)*(undefined4 *)param_1;
  }
  if (!bVar3) {
    FUN_0023ee58(unaff_s3_lo[1]);
    if (((int)(param_2 & 0xff) < unaff_s3_lo[3]) &&
       (puVar7 = (uint *)(unaff_s3_lo[2] + (param_2 & 0xff) * 100), param_2 == *puVar7)) {
      if (puVar7[1] == 0) {
        puVar7 = (uint *)0x0;
      }
    }
    else {
      puVar7 = (uint *)0x0;
    }
    if ((puVar7 == (uint *)0x0) || (puVar7[1] == 4)) {
      bVar3 = true;
    }
    else if (puVar7[1] == 1) {
      if (puVar7 == (uint *)unaff_s3_lo[0x13]) {
        unaff_s3_lo[0x13] = puVar7[3];
      }
      else {
        *(uint *)(puVar7[2] + 0xc) = puVar7[3];
      }
      if (puVar7 == (uint *)unaff_s3_lo[0x15]) {
        unaff_s3_lo[0x15] = puVar7[2];
      }
      else {
        *(uint *)(puVar7[3] + 8) = puVar7[2];
      }
      if (puVar7 == (uint *)unaff_s3_lo[0x14]) {
        uVar4 = puVar7[3];
        if (uVar4 == 0) {
          uVar4 = puVar7[2];
        }
        unaff_s3_lo[0x14] = uVar4;
        uVar4 = unaff_s3_lo[0x16];
      }
      else {
        uVar4 = unaff_s3_lo[0x16];
      }
      bVar3 = true;
      puVar7[1] = 0;
      puVar7[3] = uVar4;
      unaff_s3_lo[0x16] = (int)puVar7;
    }
    else {
      unaff_s8_lo = (int *)unaff_s3_lo[0x10];
      puVar1 = (uint *)unaff_s3_lo[0x13];
      puVar7[1] = 4;
      unaff_s5_lo = unaff_s8_lo;
      if (puVar7 != puVar1) {
        unaff_s5_lo = (int *)puVar7[0x18];
      }
      uVar4 = puVar7[3];
      if (uVar4 == 0) {
        unaff_s6_lo = (int *)unaff_s3_lo[0x11];
      }
      else if (*(int *)(uVar4 + 4) == 1) {
        unaff_s6_lo = (int *)unaff_s3_lo[0x11];
      }
      else {
        unaff_s6_lo = *(int **)(uVar4 + 0x60);
      }
      bVar3 = false;
    }
    FUN_0023ea60(unaff_s3_lo[1]);
    if ((!bVar3) && (iVar8 = 0, 0 < unaff_s3_lo[7])) {
      iVar10 = unaff_s3_lo[6];
      do {
        iVar10 = iVar10 + iVar8 * 0x10;
        if (0 < *(int *)(iVar10 + 8)) {
          piVar9 = *(int **)(iVar10 + 0xc);
          if (unaff_s5_lo < unaff_s8_lo) {
            if ((unaff_s8_lo <= piVar9) || (bVar3 = false, piVar9 < unaff_s5_lo)) {
              bVar3 = true;
            }
          }
          else {
            bVar3 = false;
            if (unaff_s8_lo <= piVar9) {
              bVar3 = piVar9 < unaff_s5_lo;
            }
          }
          if (bVar3) {
            iVar2 = *(int *)(iVar10 + 4);
            if (unaff_s5_lo != unaff_s6_lo) {
              iVar6 = *unaff_s5_lo;
              piVar9 = unaff_s5_lo;
              while( true ) {
                if (iVar6 == -1) {
                  piVar9 = (int *)unaff_s3_lo[8];
                }
                else {
                  uVar4 = piVar9[1] & 0xffffff;
                  if ((piVar9[1] & 0xff000000U) == iVar2 << 0x18) {
                    FUN_0023ee58(unaff_s3_lo[1]);
                    *(uint *)(iVar10 + 8) = *(int *)(iVar10 + 8) - uVar4;
                    FUN_0023ea60(unaff_s3_lo[1]);
                    FUN_0023c190(unaff_s3_lo,uVar4);
                    piVar9[1] = uVar4;
                    *piVar9 = -2;
                    piVar9 = (int *)((int)piVar9 + uVar4);
                  }
                  else {
                    piVar9 = (int *)((int)piVar9 + uVar4);
                  }
                }
                if (piVar9 == unaff_s6_lo) break;
                iVar6 = *piVar9;
              }
            }
          }
          else {
            piVar9 = *(int **)(iVar10 + 0xc);
            if (unaff_s6_lo < unaff_s5_lo) {
              if ((unaff_s5_lo <= piVar9) || (bVar3 = false, piVar9 < unaff_s6_lo)) {
                bVar3 = true;
              }
            }
            else {
              bVar3 = false;
              if (unaff_s5_lo <= piVar9) {
                bVar3 = piVar9 < unaff_s6_lo;
              }
            }
            if (bVar3) {
              do {
                uVar5 = FUN_0023d388(iVar10);
                FUN_0023d4a8(iVar10,uVar5);
                if (*(int *)(iVar10 + 8) < 1) break;
                piVar9 = *(int **)(iVar10 + 0xc);
                if (unaff_s6_lo < unaff_s5_lo) {
                  if ((unaff_s5_lo <= piVar9) || (bVar3 = false, piVar9 < unaff_s6_lo)) {
                    bVar3 = true;
                  }
                }
                else {
                  bVar3 = false;
                  if (unaff_s5_lo <= piVar9) {
                    bVar3 = piVar9 < unaff_s6_lo;
                  }
                }
              } while (bVar3);
            }
          }
        }
        iVar8 = iVar8 + 1;
        if (unaff_s3_lo[7] <= iVar8) {
          return;
        }
        iVar10 = unaff_s3_lo[6];
      } while( true );
    }
  }
  return;
}

