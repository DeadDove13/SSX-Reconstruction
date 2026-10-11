/* Ghidra pseudocode. PS2 address: 0025bcf8. Not validated source. */

int FUN_0025bcf8(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined8 in_v0_udw;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 (*pauVar5) [16];
  undefined8 in_a0_udw;
  ulong in_a2_udw;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  pauVar5 = param_1;
  if (((uint)param_1 & 7) == 0) {
    auVar3._8_8_ = in_v0_udw;
    auVar3._0_8_ = 0x101010101010101;
    if (((uint)param_1 & 0xf) == 0) {
      auVar6 = _pcpyld(auVar3,auVar3);
      auVar4._8_8_ = in_a0_udw;
      auVar4._0_8_ = 0x8080808080808080;
      auVar3 = _psubb(*param_1,auVar6);
      auVar7 = _pcpyld(auVar4,auVar4);
      auVar3 = _pand(auVar3,~*param_1);
      auVar3 = _pand(auVar3,auVar7);
      auVar4 = _pcpyud(auVar3,auVar6);
      if (auVar4._0_8_ == 0 && auVar3._0_8_ == 0) {
        do {
          pauVar5 = pauVar5 + 1;
          auVar3 = _psubb(*pauVar5,auVar6);
          auVar3 = _pand(auVar3,~*pauVar5);
          auVar4 = _pand(auVar3,auVar7);
          auVar1._8_8_ = 0;
          auVar1._0_8_ = in_a2_udw;
          auVar3 = _pcpyud(auVar4,auVar1 << 0x40);
        } while (auVar3._0_8_ == 0 && auVar4._0_8_ == 0);
      }
    }
    else {
      uVar2 = *(ulong *)*param_1 + 0xfefefefefefefeff & ~*(ulong *)*param_1;
      while ((uVar2 & 0x8080808080808080) == 0) {
        pauVar5 = (undefined1 (*) [16])(*pauVar5 + 8);
        uVar2 = *(ulong *)*pauVar5 + 0xfefefefefefefeff & ~*(ulong *)*pauVar5;
      }
    }
  }
  for (; (*pauVar5)[0] != '\0'; pauVar5 = (undefined1 (*) [16])(*pauVar5 + 1)) {
  }
  return (int)pauVar5 - (int)param_1;
}

