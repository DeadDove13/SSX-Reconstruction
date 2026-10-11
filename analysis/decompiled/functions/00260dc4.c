/* Ghidra pseudocode. PS2 address: 00260dc4. Not validated source. */

undefined8 FUN_00260dc4(ulong param_1,ulong param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined8 in_v1_udw;
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 in_a0_udw;
  undefined1 (*pauVar4) [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 in_t2_udw;
  undefined1 auVar7 [16];
  
  iVar3 = (int)(param_1 >> 0x20);
  pauVar4 = (undefined1 (*) [16])param_1;
  if ((0xf < param_3) && ((param_1 & 0xf) == 0)) {
    auVar5._8_8_ = in_t2_udw;
    auVar5._0_8_ = (param_2 & 0xff) * 0x101;
    auVar6._8_8_ = in_v1_udw;
    auVar6._0_8_ = 0x8080808080808080;
    auVar5 = _pcpyh(auVar5);
    auVar5 = _pcpyld(auVar5,auVar5);
    auVar6 = _pcpyld(auVar6,auVar6);
    do {
      pauVar4 = (undefined1 (*) [16])param_1;
      auVar1 = _pxor(*pauVar4,auVar5);
      auVar7._8_8_ = in_a0_udw;
      auVar7._0_8_ = 0x101010101010101;
      auVar2._8_8_ = in_a0_udw;
      auVar2._0_8_ = 0x101010101010101;
      auVar7 = _pcpyld(auVar7,auVar2);
      auVar7 = _psubb(auVar1,auVar7);
      auVar7 = _pand(auVar7,~auVar1);
      auVar7 = _pand(auVar7,auVar6);
      auVar2 = _pcpyud(auVar7,auVar5);
      if (auVar7._0_8_ != 0 || auVar2._0_8_ != 0) {
        iVar3 = (int)(param_1 >> 0x20);
        goto joined_r0x00260e70;
      }
      param_3 = param_3 - 0x10;
      pauVar4 = pauVar4 + 1;
      param_1 = (ulong)(int)pauVar4;
    } while (0xf < param_3);
    iVar3 = (int)pauVar4 >> 0x1f;
  }
joined_r0x00260e70:
  while( true ) {
    param_3 = param_3 - 1;
    if (param_3 == 0xffffffff) {
      return 0;
    }
    if ((ulong)(byte)(*pauVar4)[0] == (param_2 & 0xff)) break;
    pauVar4 = (undefined1 (*) [16])(*pauVar4 + 1);
    iVar3 = (int)pauVar4 >> 0x1f;
  }
  return CONCAT44(iVar3,pauVar4);
}

