/* Ghidra pseudocode. PS2 address: 0025baa0. Not validated source. */

int FUN_0025baa0(undefined8 param_1,undefined1 (*param_2) [16])

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [16];
  int iVar7;
  undefined8 in_a0_udw;
  undefined8 in_a2_udw;
  undefined1 auVar8 [16];
  undefined8 in_a3_udw;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  iVar7 = (int)((ulong)param_1 >> 0x20);
  pauVar6 = (undefined1 (*) [16])param_1;
  if ((((uint)pauVar6 | (uint)param_2) & 7) == 0) {
    auVar9._8_8_ = in_a3_udw;
    auVar9._0_8_ = 0x101010101010101;
    auVar8._8_8_ = in_a2_udw;
    auVar8._0_8_ = 0x8080808080808080;
    if ((((uint)pauVar6 | (uint)param_2) & 0xf) == 0) {
      auVar11 = _pcpyld(auVar9,auVar9);
      auVar12 = _pcpyld(auVar8,auVar8);
      auVar9 = _psubw(*param_2,*pauVar6);
      auVar10._8_8_ = in_a0_udw;
      auVar10._0_8_ = param_1;
      auVar8 = _pcpyud(auVar9,auVar10);
      if (auVar8._0_8_ == 0 && auVar9._0_8_ == 0) {
        auVar8 = *pauVar6;
        do {
          auVar9 = _psubb(auVar8,auVar11);
          auVar8 = _pand(auVar9,~auVar8);
          auVar8 = _pand(auVar8,auVar12);
          auVar2._4_4_ = iVar7;
          auVar2._0_4_ = pauVar6;
          auVar2._8_8_ = in_a0_udw;
          auVar9 = _pcpyud(auVar8,auVar2);
          pauVar6 = pauVar6 + 1;
          iVar7 = (int)pauVar6 >> 0x1f;
          if (auVar9._0_8_ != 0 || auVar8._0_8_ != 0) {
            return 0;
          }
          param_2 = param_2 + 1;
          auVar8 = *pauVar6;
          auVar10 = _psubw(auVar8,*param_2);
          auVar3._8_8_ = in_a0_udw;
          auVar3._0_8_ = (long)(int)pauVar6;
          auVar9 = _pcpyud(auVar10,auVar3);
        } while (auVar9._0_8_ == 0 && auVar10._0_8_ == 0);
        cVar4 = (*pauVar6)[0];
      }
      else {
        cVar4 = (*pauVar6)[0];
      }
    }
    else if (*(long *)*pauVar6 == *(long *)*param_2) {
      uVar5 = *(ulong *)*pauVar6;
      do {
        pauVar6 = (undefined1 (*) [16])(*pauVar6 + 8);
        if ((uVar5 + 0xfefefefefefefeff & ~uVar5 & 0x8080808080808080) != 0) {
          return 0;
        }
        param_2 = (undefined1 (*) [16])(*param_2 + 8);
        uVar5 = *(ulong *)*pauVar6;
      } while (*(ulong *)*param_2 == uVar5);
      cVar4 = (*pauVar6)[0];
    }
    else {
      cVar4 = (*pauVar6)[0];
    }
  }
  else {
    cVar4 = (*pauVar6)[0];
  }
  do {
    bVar1 = (*pauVar6)[0];
    if (cVar4 == '\0') {
LAB_0025bbd8:
      return (uint)bVar1 - (uint)(byte)(*param_2)[0];
    }
    if ((long)(int)(char)bVar1 != (long)(char)(*param_2)[0]) {
      bVar1 = (*pauVar6)[0];
      goto LAB_0025bbd8;
    }
    pauVar6 = (undefined1 (*) [16])(*pauVar6 + 1);
    param_2 = (undefined1 (*) [16])(*param_2 + 1);
    cVar4 = (*pauVar6)[0];
  } while( true );
}

