/* Ghidra pseudocode. PS2 address: 00144df0. Not validated source. */

void FUN_00144df0(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  iVar1 = *(int *)(param_1 + 0x60);
  auVar5 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x130));
  auVar6 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x220));
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _vmul(auVar5,auVar6);
  _vaddabc(auVar5,auVar5);
  _vmaddabc(auVar7,auVar5);
  auVar5 = _vmaddbc(auVar7,auVar5);
  auVar5 = _qmfc2(auVar5._0_4_);
  iVar2 = *(int *)(iVar1 + 0x6cf4);
  bVar3 = *(int *)(&DAT_002ac2c4 + *(int *)(iVar2 + 8) * 0xc) != 0x11;
  if (auVar5._0_4_ < DAT_002c2334) {
    if (bVar3) {
      FUN_0014cd18(iVar2,0x87,0,5);
      return;
    }
    FUN_0014cd18(iVar2,0x81,0,5);
    return;
  }
  if (DAT_002c2338 < auVar5._0_4_) {
    if (bVar3) {
      FUN_0014cd18(iVar2,0x86,0,5);
      return;
    }
    FUN_0014cd18(iVar2,0x80,0,5);
    return;
  }
  auVar5 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x120));
  auVar6 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x220));
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _vmul(auVar5,auVar6);
  _vaddabc(auVar5,auVar5);
  _vmaddabc(auVar7,auVar5);
  auVar5 = _vmaddbc(auVar7,auVar5);
  auVar5 = _qmfc2(auVar5._0_4_);
  if (DAT_002c2338 < auVar5._0_4_) {
    if (bVar3) {
      FUN_0014cd18(iVar2,0x88,0,5);
      return;
    }
    FUN_0014cd18(iVar2,0x82,0,5);
    return;
  }
  if (DAT_002c2334 <= auVar5._0_4_) {
    auVar5 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x110));
    auVar6 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x220));
    auVar7 = _vaddbc(in_vf0,in_vf0);
    auVar5 = _vmul(auVar5,auVar6);
    _vaddabc(auVar5,auVar5);
    _vmaddabc(auVar7,auVar5);
    auVar5 = _vmaddbc(auVar7,auVar5);
    auVar5 = _qmfc2(auVar5._0_4_);
    if (0.0 < auVar5._0_4_) {
      if (bVar3) {
        uVar4 = 0x84;
      }
      else {
        uVar4 = 0x7e;
      }
    }
    else {
      if (bVar3) {
        FUN_0014cd18(iVar2,0x85,0,5);
        return;
      }
      uVar4 = 0x7f;
    }
    FUN_0014cd18(iVar2,uVar4,0,5);
    return;
  }
  if (bVar3) {
    FUN_0014cd18(iVar2,0x89,0,5);
    return;
  }
  FUN_0014cd18(iVar2,0x83,0,5);
  return;
}

