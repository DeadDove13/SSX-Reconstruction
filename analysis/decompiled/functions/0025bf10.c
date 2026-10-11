/* Ghidra pseudocode. PS2 address: 0025bf10. Not validated source. */

int FUN_0025bf10(undefined8 param_1,undefined1 (*param_2) [16],uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  char cVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 (*pauVar8) [16];
  undefined8 in_a0_udw;
  undefined8 in_t0_udw;
  undefined8 in_t1_udw;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  pauVar8 = (undefined1 (*) [16])param_1;
  if (param_3 == 0) {
    return 0;
  }
  if ((((uint)pauVar8 | (uint)param_2) & 7) == 0) {
    auVar4._8_8_ = in_t1_udw;
    auVar4._0_8_ = 0x101010101010101;
    if ((((uint)pauVar8 | (uint)param_2) & 0xf) == 0 && 0xf < param_3) {
      auVar10 = _pcpyld(auVar4,auVar4);
      auVar6 = _psubw(*pauVar8,*param_2);
      auVar9._8_8_ = in_t0_udw;
      auVar9._0_8_ = 0x8080808080808080;
      auVar2._8_8_ = in_t0_udw;
      auVar2._0_8_ = 0x8080808080808080;
      auVar9 = _pcpyld(auVar9,auVar2);
      auVar7._8_8_ = in_a0_udw;
      auVar7._0_8_ = param_1;
      auVar4 = _pcpyud(auVar6,auVar7);
      if (auVar4._0_8_ == 0 && auVar6._0_8_ == 0) {
        do {
          param_3 = param_3 - 0x10;
          if (param_3 == 0) {
            return 0;
          }
          auVar4 = _psubb(*pauVar8,auVar10);
          auVar4 = _pand(auVar4,~*pauVar8);
          auVar7 = _pand(auVar4,auVar9);
          auVar6._8_8_ = in_a0_udw;
          auVar6._0_8_ = param_1;
          auVar4 = _pcpyud(auVar7,auVar6);
          pauVar8 = pauVar8 + 1;
          if (auVar4._0_8_ != 0 || auVar7._0_8_ != 0) {
            return 0;
          }
          param_2 = param_2 + 1;
          if (param_3 < 0x10) break;
          auVar7 = _psubw(*pauVar8,*param_2);
          auVar1._8_8_ = in_a0_udw;
          auVar1._0_8_ = param_1;
          auVar4 = _pcpyud(auVar7,auVar1);
        } while (auVar4._0_8_ == 0 && auVar7._0_8_ == 0);
      }
    }
    else if ((7 < param_3) && (*(long *)*pauVar8 == *(long *)*param_2)) {
      do {
        param_3 = param_3 - 8;
        if (param_3 == 0) {
          return 0;
        }
        puVar3 = *pauVar8;
        pauVar8 = (undefined1 (*) [16])(*pauVar8 + 8);
        if ((*(ulong *)puVar3 + 0xfefefefefefefeff & ~*(ulong *)puVar3 & 0x8080808080808080) != 0) {
          return 0;
        }
        param_2 = (undefined1 (*) [16])(*param_2 + 8);
      } while ((7 < param_3) && (*(long *)*pauVar8 == *(long *)*param_2));
    }
  }
  if (param_3 != 0) {
    cVar5 = (*pauVar8)[0];
    while( true ) {
      param_3 = param_3 - 1;
      puVar3 = *pauVar8;
      if (cVar5 != (*param_2)[0]) break;
      if (param_3 == 0) {
        return 0;
      }
      pauVar8 = (undefined1 (*) [16])(*pauVar8 + 1);
      if (*puVar3 == '\0') {
        return 0;
      }
      param_2 = (undefined1 (*) [16])(*param_2 + 1);
      cVar5 = (*pauVar8)[0];
    }
  }
  return (uint)(byte)(*pauVar8)[0] - (uint)(byte)(*param_2)[0];
}

