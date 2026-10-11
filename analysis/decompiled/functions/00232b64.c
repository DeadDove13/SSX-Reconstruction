/* Ghidra pseudocode. PS2 address: 00232b64. Not validated source. */

void FUN_00232b64(int param_1,undefined1 (*param_2) [16],undefined4 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar1 = _pextlw(0xffffffffffff8000,0xffffffffffff8000);
  auVar2 = _pextlw(0x7fff,0x7fff);
  auVar1 = _pcpyld(auVar1,auVar1);
  auVar2 = _pcpyld(auVar2,auVar2);
  do {
    param_1 = param_1 + -0x10;
    auVar3 = _psraw(*param_2,7);
    auVar4 = _psraw(param_2[1],7);
    auVar3 = _pminw(auVar3,auVar2);
    auVar5 = _psraw(param_2[2],7);
    auVar4 = _pminw(auVar4,auVar2);
    auVar3 = _pmaxw(auVar3,auVar1);
    auVar6 = _psraw(param_2[3],7);
    auVar5 = _pminw(auVar5,auVar2);
    auVar4 = _pmaxw(auVar4,auVar1);
    auVar6 = _pminw(auVar6,auVar2);
    auVar7 = _ppach(auVar4,auVar3);
    auVar3 = _pmaxw(auVar5,auVar1);
    auVar4 = _pmaxw(auVar6,auVar1);
    *param_3 = auVar7._0_4_;
    param_3[1] = auVar7._4_4_;
    param_3[2] = auVar7._8_4_;
    param_3[3] = auVar7._12_4_;
    auVar3 = _ppach(auVar4,auVar3);
    param_3[4] = auVar3._0_4_;
    param_3[5] = auVar3._4_4_;
    param_3[6] = auVar3._8_4_;
    param_3[7] = auVar3._12_4_;
    param_2 = param_2 + 4;
    param_3 = param_3 + 8;
  } while (0 < param_1);
  return;
}

