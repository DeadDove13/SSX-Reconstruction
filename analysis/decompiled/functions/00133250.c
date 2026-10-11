/* Ghidra pseudocode. PS2 address: 00133250. Not validated source. */

void FUN_00133250(int *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar5 = _lqc2(*param_2);
  auVar6 = _lqc2(*param_3);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _vmul(auVar5,auVar6);
  _vaddabc(auVar5,auVar5);
  _vmaddabc(auVar7,auVar5);
  auVar5 = _vmaddbc(auVar7,auVar5);
  auVar5 = _qmfc2(auVar5._0_4_);
  fVar2 = auVar5._0_4_ * DAT_002c1c28;
  fVar4 = 0.0;
  if ((0.0 <= fVar2) && (fVar4 = fVar2, 2.0 < fVar2)) {
    fVar4 = 2.0;
  }
  if (DAT_002c1c2c < fVar4) {
    if ((*(int *)(DAT_002859e4 + 0x38) != 0) &&
       (iVar1 = *(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x18), iVar1 != 0 && iVar1 < 10)) {
      fVar2 = (float)param_1[1];
      goto LAB_00133364;
    }
    fVar3 = fVar4 * DAT_002c1c30;
    iVar1 = *(int *)(*param_1 + 0x34);
    fVar2 = DAT_002c1c34;
    if ((DAT_002c1c34 <= fVar3) && (fVar2 = DAT_002c1c38, fVar3 <= DAT_002c1c38)) {
      fVar2 = fVar3;
    }
    (**(code **)(iVar1 + 0x24))(*param_1 + (int)*(short *)(iVar1 + 0x20),1,(int)(fVar2 * 60.0));
  }
  fVar2 = (float)param_1[1];
LAB_00133364:
  if (fVar2 < fVar4) {
    param_1[1] = (int)fVar4;
  }
  return;
}

