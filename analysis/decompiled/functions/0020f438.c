/* Ghidra pseudocode. PS2 address: 0020f438. Not validated source. */

undefined4
FUN_0020f438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
            ,int param_6,undefined4 *param_7,undefined8 param_8)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_110 [8];
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [16];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 *puStack_b8;
  int iStack_b4;
  
  iVar3 = param_5 * 0xc;
  iVar7 = (int)param_1;
  uStack_bc = (undefined4)param_2;
  puStack_b8 = param_7;
  lVar5 = FUN_00210128(*(undefined4 *)(iVar3 + *(int *)(*(int *)(iVar7 + 0xa0) + 0x20)),param_2,
                       param_3,param_4,auStack_110,auStack_100,&uStack_c0);
  if (lVar5 != 0) {
    iVar2 = *(int *)(iVar7 + 0xa0);
    bVar1 = *(byte *)(*(int *)(iVar2 + 0x28) + param_6);
    if ((*(int *)(iVar2 + 0xc) <= param_5) || (uVar6 = 0, bVar1 == 0)) {
      puVar8 = (undefined4 *)param_8;
      *puVar8 = auStack_110._0_4_;
      puVar8[1] = auStack_110._4_4_;
      puVar8[2] = uStack_108;
      puVar8[3] = uStack_104;
      auVar11 = _lqc2(auStack_100);
      auVar10 = _qmtc2(uStack_c0);
      auVar10 = _vmulbc(auVar11,auVar10);
      auVar10 = _sqc2(auVar10);
      auStack_e0._8_4_ = auVar10._8_4_;
      auStack_e0._12_4_ = auVar10._12_4_;
      *puStack_b8 = auVar10._0_4_;
      puStack_b8[1] = auVar10._4_4_;
      puStack_b8[2] = auStack_e0._8_4_;
      puStack_b8[3] = auStack_e0._12_4_;
      return 1;
    }
    uVar9 = *(undefined4 *)(iVar3 + *(int *)(iVar2 + 0x20) + 0x10);
    uVar4 = (uint)bVar1;
    iStack_b4 = iVar3;
    do {
      if ((uVar4 & 1) != 0) {
        auVar11 = _lqc2(*(undefined1 (*) [16])(uVar6 * 0x10 + iVar7 + 0x10));
        auVar10 = _qmtc2(uVar9);
        auVar10 = _vmulbc(auVar11,auVar10);
        auStack_e0 = _sqc2(auVar10);
        auVar10 = _lqc2(*(undefined1 (*) [16])param_4);
        auVar11 = _lqc2(auStack_e0);
        auVar10 = _vadd(auVar10,auVar11);
        auStack_d0 = _sqc2(auVar10);
        uStack_f0 = auStack_d0._0_4_;
        uStack_ec = auStack_d0._4_4_;
        uStack_e8 = auStack_d0._8_4_;
        uStack_e4 = auStack_d0._12_4_;
        lVar5 = FUN_0020f438(param_1,uStack_bc,param_3,&uStack_f0,param_5 + 1,
                             (uVar6 + 1) *
                             *(int *)(iStack_b4 + *(int *)(*(int *)(iVar7 + 0xa0) + 0x20) + 8) +
                             param_6,puStack_b8,param_8);
        if (lVar5 != 0) {
          return 1;
        }
      }
      uVar6 = uVar6 + 1;
      uVar4 = (int)(uint)bVar1 >> (uVar6 & 0x1f);
    } while ((int)uVar6 < 8);
  }
  return 0;
}

