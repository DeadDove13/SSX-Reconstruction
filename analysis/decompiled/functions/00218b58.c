/* Ghidra pseudocode. PS2 address: 00218b58. Not validated source. */

void FUN_00218b58(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined1 auStack_2d0 [8];
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined1 auStack_2c0 [16];
  undefined4 auStack_2b0 [8];
  undefined4 auStack_290 [112];
  int aiStack_d0 [4];
  
  uVar3 = FUN_00218898();
  iVar1 = FUN_00223368(0x299cc8,*(undefined4 *)(param_1 + 8));
  aiStack_d0[0] = *(int *)(iVar1 + 0x28);
  iVar1 = 0;
  FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
  FUN_0011ed48(0x295e90,0);
  if (0 < aiStack_d0[0]) {
    do {
      iVar1 = iVar1 + 1;
      lVar4 = FUN_00218f00(uVar3);
      iVar7 = (int)uVar3;
      if (lVar4 != 0) {
        fVar8 = *(float *)(iVar7 + 0x74);
        iVar2 = 9;
        fVar14 = *(float *)(iVar7 + 0x78);
        do {
          iVar2 = iVar2 + -1;
        } while (iVar2 != -1);
        uVar15 = 0x3f800000;
        puVar6 = auStack_290;
        fVar13 = 128.0;
        puVar5 = auStack_2b0;
        do {
          FUN_00218710(fVar14,uVar3,auStack_2d0,auStack_2c0);
          fVar14 = fVar14 + fVar8 / 9.0;
          fVar9 = param_2[1];
          fVar12 = param_2[2];
          fVar11 = param_2[3];
          fVar10 = *param_2;
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[4] = (int)(fVar9 * fVar13);
          puVar5[2] = uVar15;
          puVar5[5] = (int)(fVar12 * fVar13);
          puVar5[6] = (int)(fVar11 * fVar13);
          puVar5[7] = (int)(fVar10 * fVar13);
          *puVar6 = auStack_2d0._0_4_;
          puVar6[1] = auStack_2d0._4_4_;
          puVar6[2] = uStack_2c8;
          puVar6[3] = uStack_2c4;
          puVar5 = puVar5 + 0xc;
          puVar6 = puVar6 + 0xc;
        } while ((int)puVar5 < (int)aiStack_d0);
        FUN_001a0390(0x295e90,10,auStack_2b0,0);
      }
      uVar3 = FUN_002238b8(0x299cc8,iVar7 + 0x54);
    } while (iVar1 < aiStack_d0[0]);
  }
  return;
}

