
void FUN_00128450(undefined8 param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined1 aauStack_3d0 [3] [16];
  undefined1 auStack_3a0 [768];
  
  iVar8 = (int)param_1;
  iVar7 = *(int *)(iVar8 + 0x70);
  bVar1 = false;
  if (iVar7 != 0) {
    do {
      lVar4 = FUN_00111098(iVar7,iVar8 + 0x70);
      iVar3 = *(int *)(*(int *)(iVar7 + (uint)(lVar4 == 0) * 4) + 0x84);
      if (*(int *)(iVar3 + 0x14) == 0x1a) {
        iVar6 = 0;
        if ((iVar3 != 0) && (piVar2 = (int *)(iVar3 + -0x868), iVar3 != 0x868)) {
          if (iVar3 == 0) {
            piVar2 = (int *)0x0;
          }
          iVar6 = *piVar2;
        }
        FUN_0021b888(auStack_3a0,iVar6 + 0x3a0,1);
        fVar9 = (float)FUN_001223c8(param_1,auStack_3a0,&uStack_3e0);
        if (0.0 < fVar9) {
          *(undefined1 *)(iVar8 + 0x60 + *(int *)(iVar6 + 0x390)) = 1;
        }
        FUN_0021bd40(auStack_3a0,2);
      }
      iVar3 = FUN_00111098(iVar7,iVar8 + 0x70);
      iVar7 = *(int *)(iVar7 + (iVar3 + 2) * 4);
    } while (iVar7 != 0);
  }
  iVar7 = 0;
  while( true ) {
    if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c) <= iVar7) break;
    pcVar5 = (char *)(iVar8 + 0x60 + iVar7);
    if (*pcVar5 != '\0') {
      fVar9 = *(float *)(iVar8 + 0x5c);
      iVar3 = *(int *)(*(int *)(DAT_002859e4 + 0x14) + iVar7 * 4 + 200);
      if (*(float *)(iVar3 + 200) < fVar9) {
        if (fVar9 - *(float *)(iVar3 + 200) < fGpffff8b54) {
          *(float *)(iVar3 + 200) = fVar9;
        }
        else {
          if (*(int *)(iVar3 + 0x34c) == 5) {
            uStack_3e0 = *(undefined4 *)(iVar3 + 0xc0);
            uStack_3dc = *(undefined4 *)(iVar3 + 0xc4);
            uStack_3d8 = *(undefined4 *)(iVar3 + 200);
            uStack_3d4 = *(undefined4 *)(iVar3 + 0xcc);
            aauStack_3d0[0] = *(undefined1 (*) [16])(iVar3 + 0xd0);
            FUN_00109448(*(undefined4 *)(iVar3 + 0x140),0,iVar3,&uStack_3e0,aauStack_3d0,0);
            fVar9 = *(float *)(iVar8 + 0x50);
          }
          else {
            fVar9 = *(float *)(iVar8 + 0x50);
          }
          auVar10 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xd0));
          auVar11 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x40));
          auVar12 = _vaddbc(in_vf0,in_vf0);
          auVar10 = _vmul(auVar10,auVar11);
          _vaddabc(auVar10,auVar10);
          _vmaddabc(auVar12,auVar10);
          auVar10 = _vmaddbc(auVar12,auVar10);
          auVar10 = _qmfc2(auVar10._0_4_);
          fVar9 = fVar9 - auVar10._0_4_;
          if (0.0 < fVar9) {
            auVar11 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x40));
            auVar10 = _qmtc2(fVar9 * *(float *)(iVar8 + 0x54) * fGpffff8b58);
            auVar10 = _vmulbc(auVar11,auVar10);
            aauStack_3d0[0] = _sqc2(auVar10);
            uStack_3e0 = aauStack_3d0[0]._0_4_;
            uStack_3dc = aauStack_3d0[0]._4_4_;
            uStack_3d8 = aauStack_3d0[0]._8_4_;
            uStack_3d4 = aauStack_3d0[0]._12_4_;
            auVar10 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xd0));
            auVar11 = _lqc2(aauStack_3d0[0]);
            auVar10 = _vadd(auVar10,auVar11);
            auVar10 = _sqc2(auVar10);
            *(undefined1 (*) [16])(iVar3 + 0xd0) = auVar10;
            *(undefined4 *)(iVar3 + 0xd4) = 0;
          }
          else {
            *(undefined4 *)(iVar3 + 0xd4) = 0;
          }
          *(undefined4 *)(iVar3 + 0xd0) = 0;
        }
        bVar1 = true;
      }
      else {
        *pcVar5 = '\0';
      }
    }
    iVar7 = iVar7 + 1;
  }
  if (!bVar1) {
    (**(code **)(*(int *)(iVar8 + 8) + 0xb4))(iVar8 + *(short *)(*(int *)(iVar8 + 8) + 0xb0),1);
  }
  return;
}

