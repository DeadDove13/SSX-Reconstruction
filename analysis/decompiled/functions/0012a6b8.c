/* Ghidra pseudocode. PS2 address: 0012a6b8. Not validated source. */

void FUN_0012a6b8(undefined8 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 (*pauVar3) [16];
  undefined2 *puVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [12];
  undefined4 uStack_34;
  
  iVar11 = (int)param_1;
  if (*(int *)(iVar11 + 0x54) != 0) {
    iVar1 = *(int *)(iVar11 + 0x28);
    fStack_60 = *(float *)(iVar1 + 0xd0);
    fStack_5c = *(float *)(iVar1 + 0xd4);
    fStack_58 = *(float *)(iVar1 + 0xd8);
    uStack_54 = 0x3f800000;
    fStack_50 = *(float *)(iVar1 + 0xdc);
    fStack_4c = *(float *)(iVar1 + 0xe0);
    fStack_48 = *(float *)(iVar1 + 0xe4);
    uStack_44 = 0x3f800000;
    lVar5 = FUN_001be110(0x295e90,&fStack_60,&fStack_50);
    if (lVar5 != 1) {
      FUN_0012a498(param_1);
      puVar4 = (undefined2 *)FUN_001c06d0(*(undefined4 *)(iVar11 + 0x54));
      if (*(int *)(iVar11 + 0x48) == 1) {
        iVar1 = *(int *)(iVar11 + 0x28);
        iVar10 = 0xb;
        pauVar8 = (undefined1 (*) [16])(iVar11 + 0x360);
        pauVar9 = (undefined1 (*) [16])(iVar11 + 0x60);
        pauVar3 = (undefined1 (*) [16])(iVar11 + 0x160);
        do {
          pauVar6 = pauVar3;
          pauVar7 = pauVar9;
          auVar14 = _lqc2(*pauVar6);
          auVar15 = _lqc2(*pauVar8);
          auVar14 = _vadd(auVar14,auVar15);
          auVar14 = _sqc2(auVar14);
          iVar10 = iVar10 + -1;
          auStack_40._8_4_ = auVar14._8_4_;
          *puVar4 = (short)(int)auVar14._0_4_;
          puVar4[1] = (short)(int)auVar14._4_4_;
          puVar4[2] = (short)(int)(float)auStack_40._8_4_;
          auVar14 = _lqc2(*pauVar7);
          auVar15 = _lqc2(*pauVar8);
          auVar14 = _vadd(auVar14,auVar15);
          auVar14 = _sqc2(auVar14);
          auStack_40._8_4_ = auVar14._8_4_;
          pauVar8 = pauVar8 + -1;
          puVar4[3] = (short)(int)auVar14._0_4_;
          puVar4[4] = (short)(int)auVar14._4_4_;
          puVar4[5] = (short)(int)(float)auStack_40._8_4_;
          puVar4 = puVar4 + 6;
          pauVar9 = pauVar7 + 1;
          pauVar3 = pauVar6 + 1;
        } while (-1 < iVar10);
        iVar10 = 4;
        pauVar9 = (undefined1 (*) [16])(iVar11 + 0x2b0);
        do {
          auVar14 = _lqc2(*pauVar6);
          auVar15 = _lqc2(*pauVar9);
          auVar14 = _vadd(auVar14,auVar15);
          auVar14 = _sqc2(auVar14);
          iVar10 = iVar10 + -1;
          auStack_40._8_4_ = auVar14._8_4_;
          pauVar6 = pauVar6 + 1;
          *puVar4 = (short)(int)auVar14._0_4_;
          puVar4[1] = (short)(int)auVar14._4_4_;
          puVar4[2] = (short)(int)(float)auStack_40._8_4_;
          auVar14 = _lqc2(*pauVar7);
          auVar15 = _lqc2(*pauVar9);
          auVar14 = _vadd(auVar14,auVar15);
          _auStack_40 = _sqc2(auVar14);
          fStack_50 = auStack_40._0_4_;
          fStack_4c = auStack_40._4_4_;
          fStack_48 = (float)auStack_40._8_4_;
          uStack_44 = uStack_34;
          pauVar7 = pauVar7 + 1;
          pauVar9 = pauVar9 + -1;
          puVar4[3] = (short)(int)fStack_50;
          puVar4[4] = (short)(int)fStack_4c;
          puVar4[5] = (short)(int)(float)auStack_40._8_4_;
          puVar4 = puVar4 + 6;
        } while (-1 < iVar10);
      }
      else {
        iVar1 = *(int *)(iVar11 + 0x28);
        iVar10 = 0xb;
        pauVar8 = (undefined1 (*) [16])(iVar11 + 0x360);
        pauVar9 = (undefined1 (*) [16])(iVar11 + 0x60);
        pauVar3 = (undefined1 (*) [16])(iVar11 + 0x160);
        do {
          pauVar6 = pauVar3;
          pauVar7 = pauVar9;
          iVar10 = iVar10 + -1;
          fVar12 = *(float *)(*pauVar6 + 4);
          fVar13 = *(float *)(*pauVar6 + 8);
          *puVar4 = (short)(int)*(float *)*pauVar6;
          puVar4[1] = (short)(int)fVar12;
          puVar4[2] = (short)(int)fVar13;
          auVar14 = _lqc2(*pauVar7);
          auVar15 = _lqc2(*pauVar8);
          auVar14 = _vadd(auVar14,auVar15);
          auVar14 = _sqc2(auVar14);
          auStack_40._8_4_ = auVar14._8_4_;
          pauVar8 = pauVar8 + -1;
          puVar4[3] = (short)(int)auVar14._0_4_;
          puVar4[4] = (short)(int)auVar14._4_4_;
          puVar4[5] = (short)(int)(float)auStack_40._8_4_;
          puVar4 = puVar4 + 6;
          pauVar9 = pauVar7 + 1;
          pauVar3 = pauVar6 + 1;
        } while (-1 < iVar10);
        iVar10 = 4;
        pauVar9 = (undefined1 (*) [16])(iVar11 + 0x2b0);
        do {
          puVar2 = *pauVar6;
          iVar10 = iVar10 + -1;
          fVar12 = *(float *)(*pauVar6 + 4);
          fVar13 = *(float *)(*pauVar6 + 8);
          pauVar6 = pauVar6 + 1;
          *puVar4 = (short)(int)*(float *)puVar2;
          puVar4[1] = (short)(int)fVar12;
          puVar4[2] = (short)(int)fVar13;
          auVar14 = _lqc2(*pauVar7);
          auVar15 = _lqc2(*pauVar9);
          auVar14 = _vadd(auVar14,auVar15);
          _auStack_40 = _sqc2(auVar14);
          fStack_50 = auStack_40._0_4_;
          fStack_4c = auStack_40._4_4_;
          fStack_48 = (float)auStack_40._8_4_;
          uStack_44 = uStack_34;
          pauVar7 = pauVar7 + 1;
          pauVar9 = pauVar9 + -1;
          puVar4[3] = (short)(int)fStack_50;
          puVar4[4] = (short)(int)fStack_4c;
          puVar4[5] = (short)(int)(float)auStack_40._8_4_;
          puVar4 = puVar4 + 6;
        } while (-1 < iVar10);
      }
      fStack_60 = fStack_50;
      fStack_5c = fStack_4c;
      fStack_58 = fStack_48;
      FUN_001c06f0(*(undefined4 *)(iVar11 + 0x54),iVar1,iVar1 + 0x40);
    }
  }
  return;
}

