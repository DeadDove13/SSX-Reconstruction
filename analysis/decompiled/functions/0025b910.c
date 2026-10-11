/* Ghidra pseudocode. PS2 address: 0025b910. Not validated source. */

undefined1 (*) [16] FUN_0025b910(undefined1 (*param_1) [16],ulong param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  undefined8 in_a2_udw;
  undefined1 auVar7 [16];
  ulong uVar8;
  undefined8 in_a3_udw;
  undefined8 in_t0_udw;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  param_2 = param_2 & 0xff;
  if (((uint)param_1 & 7) != 0) goto LAB_0025ba80;
  uVar8 = param_2 * 0x1010101 + (param_2 * 0x1010101 << 0x20);
  if (((uint)param_1 & 0xf) == 0) {
    while( true ) {
      auVar4._8_8_ = in_a2_udw;
      auVar4._0_8_ = 0x101010101010101;
      auVar5._8_8_ = in_t0_udw;
      auVar5._0_8_ = 0x8080808080808080;
      auVar10 = _pcpyld(auVar4,auVar4);
      auVar4 = _psubb(*param_1,auVar10);
      auVar7 = _pcpyld(auVar5,auVar5);
      auVar4 = _pand(auVar4,~*param_1);
      auVar4 = _pand(auVar4,auVar7);
      auVar5 = _pcpyud(auVar4,auVar4);
      auVar4 = _por(auVar4,auVar5);
      if (auVar4._0_8_ != 0) break;
      auVar9._8_8_ = in_a3_udw;
      auVar9._0_8_ = uVar8;
      auVar2._8_8_ = in_a3_udw;
      auVar2._0_8_ = uVar8;
      auVar9 = _pcpyld(auVar9,auVar2);
      auVar4 = _pxor(*param_1,auVar9);
      auVar5 = _psubb(auVar4,auVar10);
      in_t0_udw = auVar9._8_8_;
      auVar4 = _pand(auVar5,~auVar4);
      auVar5 = _pand(auVar4,auVar7);
      in_a2_udw = auVar7._8_8_;
      auVar4 = _pcpyud(auVar5,auVar5);
      auVar4 = _por(auVar4,auVar5);
      if (auVar4._0_8_ != 0) {
        uVar8 = (ulong)(byte)(*param_1)[0];
        goto LAB_0025ba84;
      }
      param_1 = param_1 + 1;
    }
    uVar8 = (ulong)(byte)(*param_1)[0];
  }
  else {
    uVar6 = *(ulong *)*param_1;
    if ((uVar6 + 0xfefefefefefefeff & ~uVar6 & 0x8080808080808080) == 0) {
      if (((uVar6 ^ uVar8) + 0xfefefefefefefeff & ~(uVar6 ^ uVar8) & 0x8080808080808080) == 0) {
        do {
          param_1 = (undefined1 (*) [16])(*param_1 + 8);
          uVar6 = *(ulong *)*param_1;
          if ((uVar6 + 0xfefefefefefefeff & ~uVar6 & 0x8080808080808080) != 0) goto LAB_0025ba80;
        } while (((uVar6 ^ uVar8) + 0xfefefefefefefeff & ~(uVar6 ^ uVar8) & 0x8080808080808080) == 0
                );
        uVar8 = (ulong)(byte)(*param_1)[0];
      }
      else {
        uVar8 = (ulong)(byte)(*param_1)[0];
      }
    }
    else {
      uVar8 = (ulong)(byte)(*param_1)[0];
    }
  }
LAB_0025ba84:
  do {
    if (uVar8 == 0) {
      bVar1 = (*param_1)[0];
LAB_0025ba90:
      pauVar3 = (undefined1 (*) [16])0x0;
      if (bVar1 == param_2) {
        pauVar3 = param_1;
      }
      return pauVar3;
    }
    if (uVar8 == param_2) {
      bVar1 = (*param_1)[0];
      goto LAB_0025ba90;
    }
    param_1 = (undefined1 (*) [16])(*param_1 + 1);
LAB_0025ba80:
    uVar8 = (ulong)(byte)(*param_1)[0];
  } while( true );
}

