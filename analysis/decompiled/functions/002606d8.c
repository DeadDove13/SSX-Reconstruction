/* Ghidra pseudocode. PS2 address: 002606d8. Not validated source. */

undefined4 FUN_002606d8(undefined8 param_1,undefined4 *param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  int unaff_s3_lo;
  int *piVar12;
  uint unaff_s5_lo;
  
  if (param_2[2] != 0) {
    puVar10 = (uint *)param_1;
    uVar6 = (ushort)puVar10[3];
    if (((uVar6 & 8) == 0) || (puVar10[4] == 0)) {
      lVar5 = FUN_0025e8b0(param_1);
      if (lVar5 != 0) {
        return 0xffffffff;
      }
      uVar6 = (ushort)puVar10[3];
      piVar12 = (int *)*param_2;
    }
    else {
      piVar12 = (int *)*param_2;
    }
    uVar11 = 0;
    if ((uVar6 & 2) != 0) {
      while( true ) {
        while (uVar11 == 0) {
          unaff_s3_lo = *piVar12;
          puVar1 = (uint *)(piVar12 + 1);
          piVar12 = piVar12 + 2;
          uVar11 = *puVar1;
        }
        uVar4 = 0x400;
        if (uVar11 < 0x401) {
          uVar4 = uVar11;
        }
        lVar5 = (*(code *)puVar10[9])(puVar10[7],unaff_s3_lo,uVar4);
        iVar8 = (int)lVar5;
        unaff_s3_lo = unaff_s3_lo + iVar8;
        if (lVar5 < 1) break;
        iVar2 = param_2[2];
        uVar11 = uVar11 - iVar8;
        param_2[2] = iVar2 - iVar8;
        if (iVar2 - iVar8 == 0) {
          return 0;
        }
      }
LAB_00260a74:
      uVar6 = (ushort)puVar10[3];
LAB_00260a78:
      *(ushort *)(puVar10 + 3) = uVar6 | 0x40;
      return 0xffffffff;
    }
    bVar3 = false;
    if ((uVar6 & 1) == 0) {
      do {
        uVar4 = puVar10[2];
        while (uVar11 == 0) {
          unaff_s3_lo = *piVar12;
          puVar1 = (uint *)(piVar12 + 1);
          piVar12 = piVar12 + 2;
          uVar11 = *puVar1;
        }
        if ((uVar6 & 0x200) == 0) {
          if ((puVar10[4] < *puVar10) && (uVar4 < uVar11)) {
            FUN_00260ea4(*puVar10,unaff_s3_lo,uVar4);
            *puVar10 = *puVar10 + uVar4;
            lVar5 = FUN_0025fdc8(param_1);
            if (lVar5 != 0) {
              uVar6 = (ushort)puVar10[3];
              goto LAB_00260a78;
            }
            iVar8 = param_2[2];
          }
          else {
            if (uVar11 < puVar10[5]) {
              FUN_00260ea4(*puVar10,unaff_s3_lo,uVar11);
              puVar10[2] = puVar10[2] - uVar11;
              *puVar10 = *puVar10 + uVar11;
              goto LAB_002608f8;
            }
            uVar4 = (*(code *)puVar10[9])(puVar10[7],unaff_s3_lo,puVar10[5]);
            if ((int)uVar4 < 1) {
              uVar6 = (ushort)puVar10[3];
              goto LAB_00260a78;
            }
            iVar8 = param_2[2];
          }
        }
        else {
          if (uVar11 < uVar4) {
            uVar4 = uVar11;
          }
          FUN_00260ea4(*puVar10,unaff_s3_lo,uVar4);
          puVar10[2] = puVar10[2] - uVar4;
          *puVar10 = *puVar10 + uVar4;
LAB_002608f8:
          iVar8 = param_2[2];
          uVar4 = uVar11;
        }
        unaff_s3_lo = unaff_s3_lo + uVar4;
        uVar11 = uVar11 - uVar4;
        param_2[2] = iVar8 - uVar4;
        if (iVar8 - uVar4 == 0) {
          return 0;
        }
        uVar6 = (ushort)puVar10[3];
      } while( true );
    }
    do {
      if (uVar11 == 0) {
        bVar3 = false;
        do {
          unaff_s3_lo = *piVar12;
          uVar11 = piVar12[1];
          piVar12 = piVar12 + 2;
        } while (uVar11 == 0);
      }
      if (bVar3) {
        uVar4 = puVar10[5];
      }
      else {
        lVar5 = FUN_00260dc4(unaff_s3_lo,10,uVar11);
        if (lVar5 == 0) {
          unaff_s5_lo = uVar11 + 1;
        }
        else {
          unaff_s5_lo = (int)lVar5 - (unaff_s3_lo + -1);
        }
        bVar3 = true;
        uVar4 = puVar10[5];
      }
      uVar7 = uVar11;
      if (unaff_s5_lo <= uVar11) {
        uVar7 = unaff_s5_lo;
      }
      uVar9 = puVar10[2] + uVar4;
      if ((puVar10[4] < *puVar10) && ((int)uVar9 < (int)uVar7)) {
        FUN_00260ea4(*puVar10,unaff_s3_lo,uVar9);
        *puVar10 = *puVar10 + uVar9;
        lVar5 = FUN_0025fdc8(param_1);
        unaff_s5_lo = unaff_s5_lo - uVar9;
        if (lVar5 != 0) goto LAB_00260a74;
      }
      else if ((int)uVar7 < (int)uVar4) {
        FUN_00260ea4(*puVar10,unaff_s3_lo,uVar7);
        puVar10[2] = puVar10[2] - uVar7;
        *puVar10 = *puVar10 + uVar7;
        unaff_s5_lo = unaff_s5_lo - uVar7;
        uVar9 = uVar7;
      }
      else {
        uVar9 = (*(code *)puVar10[9])(puVar10[7],unaff_s3_lo);
        unaff_s5_lo = unaff_s5_lo - uVar9;
        if ((int)uVar9 < 1) goto LAB_00260a74;
      }
      if (unaff_s5_lo == 0) {
        lVar5 = FUN_0025fdc8(param_1);
        bVar3 = false;
        if (lVar5 != 0) goto LAB_00260a74;
        iVar8 = param_2[2];
      }
      else {
        iVar8 = param_2[2];
      }
      unaff_s3_lo = unaff_s3_lo + uVar9;
      uVar11 = uVar11 - uVar9;
      param_2[2] = iVar8 - uVar9;
    } while (iVar8 - uVar9 != 0);
  }
  return 0;
}

