/* Ghidra pseudocode. PS2 address: 0021b888. Not validated source. */

undefined8 FUN_0021b888(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  
  puVar1 = (uint *)param_1;
  puVar1[0x10] = (uint)&DAT_002bdd88;
  FUN_0020aac0(puVar1 + 0x18);
  puVar1[0x15] = (uint)param_2;
  puVar1[0x14] = (uint)param_2;
  puVar1[1] = 0;
  *puVar1 = (uint)(param_3 == 0);
  FUN_0020b620(param_2,puVar1 + 8,puVar1 + 4);
  auVar2 = _lqc2(*(undefined1 (*) [16])(puVar1 + 8));
  auVar3 = _lqc2(*(undefined1 (*) [16])(puVar1 + 4));
  auVar2 = _vadd(auVar2,auVar3);
  auVar2 = _sqc2(auVar2);
  auVar3 = _lqc2(auVar2);
  auVar2 = _qmtc2(0x3f000000);
  auVar2 = _vmulbc(auVar3,auVar2);
  auVar2 = _sqc2(auVar2);
  uStack_50 = auVar2._0_4_;
  uStack_4c = auVar2._4_4_;
  uStack_48 = auVar2._8_4_;
  uStack_44 = auVar2._12_4_;
  puVar1[0xc] = uStack_50;
  puVar1[0xd] = uStack_4c;
  puVar1[0xe] = uStack_48;
  puVar1[0xf] = uStack_44;
  puVar1[0xb4] = 0;
  puVar1[0xbc] = 0;
  return param_1;
}

