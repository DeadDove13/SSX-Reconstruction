/* Ghidra pseudocode. PS2 address: 0025b7e4. Not validated source. */

ulong FUN_0025b7e4(ulong param_1)

{
  ulong uVar1;
  undefined8 in_v1_udw;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 (*pauVar4) [16];
  undefined8 in_a0_udw;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  pauVar4 = (undefined1 (*) [16])param_1;
  if ((param_1 & 7) == 0) {
    auVar2._8_8_ = in_v1_udw;
    auVar2._0_8_ = 0x101010101010101;
    if ((param_1 & 0xf) == 0) {
      auVar5 = _pcpyld(auVar2,auVar2);
      auVar3._8_8_ = in_a0_udw;
      auVar3._0_8_ = 0x8080808080808080;
      auVar6._8_8_ = in_a0_udw;
      auVar6._0_8_ = 0x8080808080808080;
      auVar6 = _pcpyld(auVar3,auVar6);
      auVar2 = _psubb(*pauVar4,auVar5);
      auVar2 = _pand(auVar2,~*pauVar4);
      auVar3 = _pand(auVar2,auVar6);
      auVar2 = _pcpyud(auVar3,auVar3);
      if (auVar2._0_8_ == 0 && auVar3._0_8_ == 0) {
        do {
          pauVar4 = pauVar4 + 1;
          auVar2 = _psubb(*pauVar4,auVar5);
          auVar2 = _pand(auVar2,~*pauVar4);
          auVar2 = _pand(auVar2,auVar6);
          auVar3 = _pcpyud(auVar2,auVar2);
        } while (auVar2._0_8_ == 0 && auVar3._0_8_ == 0);
      }
    }
    else {
      uVar1 = *(ulong *)*pauVar4 + 0xfefefefefefefeff & ~*(ulong *)*pauVar4;
      while ((uVar1 & 0x8080808080808080) == 0) {
        pauVar4 = (undefined1 (*) [16])(*pauVar4 + 8);
        uVar1 = *(ulong *)*pauVar4 + 0xfefefefefefefeff & ~*(ulong *)*pauVar4;
      }
    }
  }
  for (; (*pauVar4)[0] != '\0'; pauVar4 = (undefined1 (*) [16])(*pauVar4 + 1)) {
  }
  FUN_0025bbe4();
  return param_1;
}

