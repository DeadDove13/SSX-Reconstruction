/* Ghidra pseudocode. PS2 address: 0025bbe4. Not validated source. */

void FUN_0025bbe4(ulong *param_1,undefined1 (*param_2) [16])

{
  char cVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined8 in_a0_udw;
  undefined1 auVar4 [16];
  undefined1 (*pauVar5) [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_t1_udw;
  undefined4 uVar9;
  undefined4 in_register_0000009c;
  undefined4 uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  if ((((uint)param_2 | (uint)param_1) & 7) == 0) {
    auVar3._8_8_ = in_a0_udw;
    auVar3._0_8_ = 0x8080808080808080;
    if ((((uint)param_2 | (uint)param_1) & 0xf) == 0) {
      auVar4._8_4_ = in_t1_udw;
      auVar4._0_8_ = 0x101010101010101;
      auVar4._12_4_ = in_register_0000009c;
      auVar6._8_4_ = in_t1_udw;
      auVar6._0_8_ = 0x101010101010101;
      auVar6._12_4_ = in_register_0000009c;
      auVar12 = _pcpyld(auVar4,auVar6);
      uVar7 = *(undefined4 *)*param_2;
      uVar8 = *(undefined4 *)(*param_2 + 4);
      uVar9 = *(undefined4 *)(*param_2 + 8);
      uVar10 = *(undefined4 *)(*param_2 + 0xc);
      auVar6 = _pcpyld(auVar3,auVar3);
      auVar3 = _psubb(*param_2,auVar12);
      auVar3 = _pand(auVar3,~*param_2);
      auVar3 = _pand(auVar3,auVar6);
      auVar4 = _pcpyud(auVar3,*param_2);
      pauVar5 = param_2;
      if (auVar3._0_8_ == 0 && auVar4._0_8_ == 0) {
        do {
          *(undefined4 *)param_1 = uVar7;
          *(undefined4 *)((int)param_1 + 4) = uVar8;
          *(undefined4 *)(param_1 + 1) = uVar9;
          *(undefined4 *)((int)param_1 + 0xc) = uVar10;
          param_2 = pauVar5 + 1;
          uVar7 = *(undefined4 *)*param_2;
          uVar8 = *(undefined4 *)(pauVar5[1] + 4);
          uVar9 = *(undefined4 *)(pauVar5[1] + 8);
          uVar10 = *(undefined4 *)(pauVar5[1] + 0xc);
          auVar3 = _psubb(*param_2,auVar12);
          auVar3 = _pand(auVar3,~*param_2);
          auVar3 = _pand(auVar3,auVar6);
          auVar4 = _pcpyud(auVar3,*param_2);
          param_1 = param_1 + 2;
          pauVar5 = param_2;
        } while (auVar3._0_8_ == 0 && auVar4._0_8_ == 0);
      }
    }
    else {
      uVar11 = *(ulong *)*param_2;
      uVar2 = uVar11 + 0xfefefefefefefeff & ~uVar11;
      while ((uVar2 & 0x8080808080808080) == 0) {
        *param_1 = uVar11;
        param_2 = (undefined1 (*) [16])(*param_2 + 8);
        uVar11 = *(ulong *)*param_2;
        param_1 = param_1 + 1;
        uVar2 = uVar11 + 0xfefefefefefefeff & ~uVar11;
      }
    }
  }
  do {
    cVar1 = (*param_2)[0];
    param_2 = (undefined1 (*) [16])(*param_2 + 1);
    *(char *)param_1 = cVar1;
    param_1 = (ulong *)((int)param_1 + 1);
  } while (cVar1 != '\0');
  return;
}

