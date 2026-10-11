/* Ghidra pseudocode. PS2 address: 0012c390. Not validated source. */

void FUN_0012c390(int param_1,int param_2)

{
  undefined2 uVar1;
  short *psVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_4;
  
  puVar3 = (undefined2 *)(param_1 + param_2 * 0xa0 + 0x110);
  if (*(int *)(param_1 + 0x38) == 0) {
    puVar3[3] = 0;
  }
  else {
    puVar3[1] = 2;
    *puVar3 = 2;
    psVar2 = puVar3 + 8;
    uVar1 = *(undefined2 *)(param_1 + 0x38);
    *(int *)(puVar3 + 0x48) = param_1 + 0x300;
    iVar4 = 2;
    puVar3[2] = uVar1;
    puVar3[3] = 1;
    auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x340));
    auVar5 = _qmtc2((float)param_2);
    auVar5 = _vmulbc(auVar6,auVar5);
    auVar5 = _sqc2(auVar5);
    auVar5 = _lqc2(auVar5);
    auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x330));
    auVar5 = _vsub(auVar5,auVar6);
    auStack_30 = _sqc2(auVar5);
    do {
      auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 800));
      auVar6 = _lqc2(auStack_30);
      auVar5 = _vadd(auVar5,auVar6);
      auVar5 = _sqc2(auVar5);
      iVar4 = iVar4 + -2;
      uStack_4 = auVar5._12_4_;
      uStack_20 = auVar5._0_4_;
      uStack_1c = auVar5._4_4_;
      uStack_18 = auVar5._8_4_;
      *(undefined4 *)(psVar2 + 8) = uStack_20;
      *(undefined4 *)(psVar2 + 10) = uStack_1c;
      *(undefined4 *)(psVar2 + 0xc) = uStack_18;
      *(undefined4 *)(psVar2 + 0xe) = uStack_4;
      auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x330));
      auVar5 = _qmtc2(0x40000000);
      auVar5 = _vmulbc(auVar6,auVar5);
      auVar5 = _sqc2(auVar5);
      auVar6 = _lqc2(auStack_30);
      auVar5 = _lqc2(auVar5);
      auVar5 = _vadd(auVar6,auVar5);
      auStack_30 = _sqc2(auVar5);
      if (puVar3[2] == 0) {
        trap(7);
      }
      *psVar2 = *psVar2 % (short)puVar3[2];
      psVar2 = psVar2 + 0x20;
    } while (-1 < iVar4);
  }
  return;
}

