/* Ghidra pseudocode. PS2 address: 0021c650. Not validated source. */

undefined4
FUN_0021c650(undefined8 param_1,float *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  int aiStack_190 [6];
  undefined4 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_15c;
  undefined1 auStack_150 [160];
  undefined4 *puStack_b0;
  undefined4 *puStack_ac;
  undefined4 *puStack_a8;
  
  fStack_1b8 = param_2[2];
  fStack_1b4 = param_2[3];
  uStack_1c0 = (undefined4)*(undefined8 *)param_2;
  uStack_1bc = (undefined4)((ulong)*(undefined8 *)param_2 >> 0x20);
  fStack_1a8 = param_2[2];
  fStack_1a4 = param_2[3];
  uStack_1b0 = (undefined4)*(undefined8 *)param_2;
  uStack_1ac = (undefined4)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar12 = (float)*(int *)(DAT_00299cc8 + 0x24);
  iVar13 = (int)(((*param_2 - *(float *)(DAT_00299cc8 + 0xc)) + fVar12) / fVar12);
  iVar14 = (int)(((param_2[1] - *(float *)(DAT_00299cc8 + 0x10)) + fVar12) / fVar12);
  iVar5 = iVar13 + -2;
  if (0x7ffffffe < iVar13 + -2) {
    iVar5 = 0x7fffffff;
  }
  iVar8 = iVar14 + -2;
  if (iVar13 < 1) {
    iVar13 = 0;
  }
  if (iVar14 < 1) {
    iVar14 = 0;
  }
  iVar7 = *(int *)(DAT_00299cc8 + 0x28) + -1;
  iVar10 = 0x7fffffff;
  if (iVar8 < 0x7fffffff) {
    iVar10 = iVar8;
  }
  iVar8 = *(int *)(DAT_00299cc8 + 0x2c) + -1;
  if (iVar7 < iVar13) {
    iVar13 = iVar7;
  }
  iVar7 = 0;
  if (-1 < iVar5) {
    iVar7 = iVar5;
  }
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  puStack_b0 = param_3;
  puStack_ac = param_4;
  puStack_a8 = param_5;
  if (iVar8 < iVar14) {
    iVar14 = iVar8;
  }
joined_r0x0021c760:
  do {
    iVar5 = iVar7;
    if (iVar13 < iVar5) {
      uVar3 = 0;
      if (fStack_1b8 < fStack_1a8) {
        FUN_00220610((param_2[2] - fStack_1b8) / (fStack_1a8 - fStack_1b8),auStack_150,&uStack_1c0,
                     &uStack_1b0,0);
        fVar12 = (float)FUN_0021e000(param_1,auStack_150,aiStack_190,0);
        uVar3 = 0;
        if (0.0 <= fVar12) {
          uVar3 = 1;
          if (aiStack_190[0] == 0) {
            uVar3 = uStack_15c;
          }
          *puStack_b0 = uStack_178;
          *puStack_ac = uVar3;
          if (puStack_a8 != (undefined4 *)0x0) {
            *puStack_a8 = (int)uStack_170;
            puStack_a8[1] = (int)((ulong)uStack_170 >> 0x20);
            puStack_a8[2] = uStack_168;
            puStack_a8[3] = uStack_164;
          }
          uVar3 = 1;
        }
      }
      return uVar3;
    }
    iVar7 = iVar5 + 1;
  } while (iVar14 < iVar10);
  piVar11 = (int *)param_1;
  iVar8 = *piVar11;
  iVar9 = iVar10;
  do {
    iVar8 = iVar9 * *(int *)(iVar8 + 0x28) + iVar5;
    lVar4 = FUN_0021f730(param_1,iVar8);
    piVar2 = (int *)0x0;
    if (lVar4 == 0) {
      piVar2 = *(int **)(iVar8 * 8 + piVar11[3]);
    }
    bVar6 = 0;
    if (piVar2 != (int *)0x0) {
      fStack_1a0 = *param_2;
      fStack_198 = param_2[2];
      fStack_19c = param_2[1];
      iVar8 = *piVar2;
      if (*(float *)(iVar8 + 0xc) <= fStack_1a0) {
        bVar1 = true;
        if ((fStack_1a0 <= *(float *)(iVar8 + 0x18)) && (*(float *)(iVar8 + 0x10) <= fStack_19c)) {
          if (fStack_19c <= *(float *)(iVar8 + 0x1c)) {
            bVar6 = 1;
          }
          goto LAB_0021c838;
        }
      }
      else {
LAB_0021c838:
        bVar1 = (bool)(bVar6 ^ 1);
      }
      if (!bVar1) {
        if (*(float *)(iVar8 + 0x14) < fStack_1b8) {
          fStack_1b8 = *(float *)(iVar8 + 0x14);
        }
        if (fStack_1a8 < *(float *)(iVar8 + 0x20)) {
          fStack_1a8 = *(float *)(iVar8 + 0x20);
        }
      }
    }
    iVar9 = iVar9 + 1;
    if (iVar14 < iVar9) goto joined_r0x0021c760;
    iVar8 = *piVar11;
  } while( true );
}

