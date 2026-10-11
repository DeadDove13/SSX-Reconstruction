
void FUN_0012c5a0(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  iVar6 = (int)param_1;
  if (*(int *)(iVar6 + 0x40) != 0) {
    iVar4 = *(int *)(iVar6 + 0x28);
    auStack_80._12_4_ = 0x3f800000;
    auStack_80._0_12_ = *(undefined1 (*) [12])(iVar4 + 0xd0);
    uStack_70 = *(undefined4 *)(iVar4 + 0xdc);
    uStack_6c = *(undefined4 *)(iVar4 + 0xe0);
    uStack_68 = *(undefined4 *)(iVar4 + 0xe4);
    uStack_64 = 0x3f800000;
    lVar2 = FUN_001be110(0x295e90,auStack_80,&uStack_70);
    if (lVar2 != 1) {
      uVar1 = *(uint *)(iVar6 + 0x350);
      *(uint *)(iVar6 + 0x350) = uVar1 + 1;
      if ((uVar1 & 0xf) == 0) {
        auVar8 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar6 + 0x28) + 0x30));
        auVar9 = _lqc2(*(undefined1 (*) [16])
                        (DAT_002859e4 + *(int *)(DAT_002859e4 + 0x290) * 0x80 + 0xb0));
        auVar8 = _vsub(auVar8,auVar9);
        auStack_80 = _sqc2(auVar8);
        auVar8 = _lqc2(auStack_80);
        auVar9 = _vaddbc(in_vf0,in_vf0);
        auVar8 = _vmul(auVar8,auVar8);
        _vaddabc(auVar8,auVar8);
        _vmaddabc(auVar9,auVar8);
        auVar8 = _vmaddbc(auVar9,auVar8);
        _vsqrt(auVar8);
        _vwaitq();
        uVar3 = _cfc2(in_vc6);
        iVar7 = (int)((float)uVar3 * fGpffff8ba0);
        iVar4 = 5;
        if (iVar7 < 6) {
          iVar4 = iVar7;
        }
        if (iVar4 != *(int *)(iVar6 + 0x48)) {
          FUN_0012c0b0(param_1);
        }
      }
      psVar5 = (short *)(iVar6 + 0x110);
      iVar6 = 2;
      do {
        if (psVar5[3] != 0) {
          if (*psVar5 == 1) {
            FUN_0012c788(param_1,psVar5);
          }
          else if (*psVar5 == 2) {
            FUN_0012c968(param_1,psVar5);
          }
          else {
            FUN_0012cbc8(param_1,psVar5);
          }
        }
        iVar6 = iVar6 + -1;
        psVar5 = psVar5 + 0x50;
      } while (-1 < iVar6);
    }
  }
  return;
}

