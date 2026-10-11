/* Ghidra pseudocode. PS2 address: 00139b30. Not validated source. */

void FUN_00139b30(int param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  iVar3 = *(int *)(param_1 + 0xc);
  if (*(float *)(param_1 + 8) <= *(float *)(iVar3 + 0x198)) {
    if ((*param_2 & 0xc) != 0) {
      *(uint *)(*(int *)(iVar3 + 0x8584) + 0x718) = (int)*param_2 >> 3 & 1;
      FUN_0010b330(iVar3,0xe);
      uVar1 = *param_2;
      goto LAB_00139ba0;
    }
    FUN_0010b330(iVar3,3);
  }
  uVar1 = *param_2;
LAB_00139ba0:
  if ((uVar1 & 0xc) == 0) {
    auVar6 = _lqc2(*(undefined1 (*) [16])(*(int *)(param_1 + 0xc) + 0xd0));
    auVar7 = _lqc2(*(undefined1 (*) [16])(*(int *)(param_1 + 0xc) + 0x110));
    auVar8 = _vaddbc(in_vf0,in_vf0);
    auVar6 = _vmul(auVar6,auVar7);
    _vaddabc(auVar6,auVar6);
    _vmaddabc(auVar8,auVar6);
    auVar6 = _vmaddbc(auVar8,auVar6);
    auVar6 = _qmfc2(auVar6._0_4_);
    iVar3 = (int)(uVar1 << 0x12) >> 0x1a;
    if (auVar6._0_4_ < 0.0) {
      FUN_001110f0(-((float)iVar3 / 31.0));
      iVar3 = *(int *)(param_1 + 0xc);
    }
    else {
      FUN_001110f0((float)iVar3 / 31.0);
      iVar3 = *(int *)(param_1 + 0xc);
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0xc);
  }
  uVar2 = DAT_002c1d54;
  if (*(float *)(iVar3 + 0x18c) == 0.0) {
    fVar5 = *(float *)(param_1 + 8);
    fVar4 = (float)((int)(*param_2 << 0xc) >> 0x1a) / 31.0;
    if (fVar5 <= fVar4) {
      fVar5 = fVar4;
    }
    *(float *)(iVar3 + 0x1a0) = fVar5;
    *(undefined4 *)(iVar3 + 0x19c) = uVar2;
  }
  uVar2 = DAT_002c1d58;
  if ((*param_2 & 1) == 0) {
    if (*(int *)(iVar3 + 0x210) != 0) {
      return;
    }
    iVar3 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar3 = *(int *)(param_1 + 0xc);
  }
  *(uint *)(iVar3 + 0x284) = (*param_2 ^ 1) & 1;
  FUN_00107070(uVar2);
  return;
}

