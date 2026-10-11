/* Ghidra pseudocode. PS2 address: 0010f278. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0010f3cc) */
/* WARNING: Removing unreachable block (ram,0x0010f43c) */

void FUN_0010f278(undefined8 param_1,undefined1 (*param_2) [16],long param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  iVar5 = (int)param_1;
  iVar2 = *(int *)(iVar5 + 0x350);
  if ((iVar2 != 2) && (param_3 == 0)) {
    FUN_00107cb0(DAT_002c12d0);
    iVar2 = *(int *)(iVar5 + 0x350);
  }
  if ((iVar2 != 3) && (iVar2 != 0xe)) {
    return;
  }
  auVar10 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x110));
  auVar11 = _lqc2(*param_2);
  auVar12 = _vaddbc(in_vf0,in_vf0);
  auVar10 = _vmul(auVar10,auVar11);
  _vaddabc(auVar10,auVar10);
  _vmaddabc(auVar12,auVar10);
  auVar10 = _vmaddbc(auVar12,auVar10);
  auVar10 = _qmfc2(auVar10._0_4_);
  uVar4 = 0x74;
  if (DAT_002c12d4 < auVar10._0_4_) {
    uVar8 = *(undefined4 *)(iVar5 + 0x6cf4);
  }
  else {
    uVar4 = 0x73;
    if (auVar10._0_4_ < DAT_002c12d8) {
      uVar8 = *(undefined4 *)(iVar5 + 0x6cf4);
    }
    else {
      auVar10 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x120));
      auVar11 = _lqc2(*param_2);
      auVar12 = _vaddbc(in_vf0,in_vf0);
      auVar10 = _vmul(auVar10,auVar11);
      _vaddabc(auVar10,auVar10);
      _vmaddabc(auVar12,auVar10);
      auVar10 = _vmaddbc(auVar12,auVar10);
      auVar10 = _qmfc2(auVar10._0_4_);
      fVar9 = auVar10._0_4_;
      uVar3 = 0;
      if (*(float *)(iVar5 + 0xe0) < DAT_002c12dc) {
        uVar3 = FUN_002109e0();
        uVar3 = uVar3 & 1 ^ 1;
      }
      if (*(int *)(iVar5 + 0x144) != 0) {
        fVar9 = -fVar9;
      }
      uVar8 = 0;
      if (0.0 <= fVar9) {
        if (uVar3 == 0) {
          FUN_0014cd18(*(undefined4 *)(iVar5 + 0x6cf4),0x75,0,5);
        }
        else {
          iVar1 = FUN_002109e0();
          uVar6 = *(undefined4 *)(iVar5 + 0x6cf4);
          iVar2 = *(int *)(iVar5 + 0x8584);
          uVar7 = *(undefined4 *)(&DAT_002a8728 + (iVar1 % 5) * 4);
          *(undefined4 *)(iVar2 + 0x61c) = uVar8;
          *(undefined4 *)(iVar2 + 0x618) = uVar7;
          FUN_0014cd18(uVar6,0x77,0,5);
        }
        goto LAB_0010f49c;
      }
      if (uVar3 == 0) {
        uVar8 = *(undefined4 *)(iVar5 + 0x6cf4);
        uVar4 = 0x76;
      }
      else {
        if (*(int *)(iVar5 + 0x344) == 2) {
          iVar1 = FUN_002109e0();
          iVar2 = *(int *)(iVar5 + 0x8584);
          uVar6 = *(undefined4 *)(&DAT_002a8728 + (iVar1 % 5) * 4);
          *(undefined4 *)(iVar2 + 0x61c) = uVar8;
          *(undefined4 *)(iVar2 + 0x618) = uVar6;
          uVar8 = *(undefined4 *)(iVar5 + 0x6cf4);
        }
        else {
          uVar8 = *(undefined4 *)(iVar5 + 0x6cf4);
        }
        uVar4 = 0x78;
      }
    }
  }
  FUN_0014cd18(uVar8,uVar4,0,5);
LAB_0010f49c:
  FUN_0010b330(param_1,2);
  return;
}

