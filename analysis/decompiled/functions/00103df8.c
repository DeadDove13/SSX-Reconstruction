/* Ghidra pseudocode. PS2 address: 00103df8. Not validated source. */

void FUN_00103df8(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float fVar9;
  undefined *puVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fStack_c0;
  undefined *puStack_bc;
  
  iVar7 = *(int *)(param_2 + 0x8c);
  if (0 < iVar7) {
    iVar3 = 0;
    iVar4 = 0;
    do {
      iVar6 = iVar4 + 1;
      iVar3 = *(int *)(param_2 + 200 + iVar3);
      auVar2 = *(undefined1 (*) [16])(iVar3 + 0x3b0);
      if (iVar6 < iVar7) {
        pfVar5 = (float *)(iVar6 * 0x10 + 0x30 + iVar3);
        piVar8 = (int *)(iVar6 * 4 + param_2 + 200);
        fVar11 = DAT_002c1034;
        iVar7 = iVar6;
        do {
          iVar3 = *piVar8;
          auVar12 = _lqc2(auVar2);
          auVar13 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x3b0));
          auVar12 = _vsub(auVar12,auVar13);
          auVar12 = _sqc2(auVar12);
          fStack_c0 = auVar12._0_4_;
          puStack_bc = auVar12._4_4_;
          fVar9 = SQRT(fStack_c0 * fStack_c0 + (float)puStack_bc * (float)puStack_bc);
          pfVar5[-1] = fVar9;
          *(float *)(iVar3 + iVar4 * 0x10 + 0x2c) = fVar9;
          if (fStack_c0 == 0.0) {
            puVar10 = puStack_bc;
            if ((float)puStack_bc == 0.0) goto LAB_00103f48;
            if (0.0 <= (float)puStack_bc) {
              fVar9 = (float)DAT_002c103c + fVar11;
              puVar10 = DAT_002c103c;
            }
            else {
              fVar9 = (float)PTR_DAT_002c1038 + fVar11;
              puVar10 = PTR_DAT_002c1038;
            }
          }
          else {
            puVar10 = (undefined *)FUN_00218510((float)puStack_bc / fStack_c0);
            if (fStack_c0 < 0.0) {
              if (0.0 < (float)puStack_bc) {
                puVar10 = (undefined *)((float)puVar10 + fVar11);
              }
              else {
                puVar10 = (undefined *)((float)puVar10 - fVar11);
              }
            }
LAB_00103f48:
            fVar9 = (float)puVar10 + fVar11;
          }
          iVar1 = *(int *)(param_2 + 0x8c);
          iVar7 = iVar7 + 1;
          piVar8 = piVar8 + 1;
          *pfVar5 = fVar9;
          *(undefined **)(iVar3 + iVar4 * 0x10 + 0x30) = puVar10;
          pfVar5 = pfVar5 + 4;
        } while (iVar7 < iVar1);
      }
      iVar7 = *(int *)(param_2 + 0x8c);
      iVar3 = iVar6 * 4;
      iVar4 = iVar6;
    } while (iVar6 < iVar7);
  }
  return;
}

