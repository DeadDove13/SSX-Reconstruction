/* Ghidra pseudocode. PS2 address: 0025a4c8. Not validated source. */

int FUN_0025a4c8(undefined1 (*param_1) [16],undefined1 (*param_2) [16],uint param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  ulong uVar3;
  undefined8 in_a3_udw;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((0xf < param_3) && ((((uint)param_1 | (uint)param_2) & 0xf) == 0)) {
    do {
      uVar3 = CONCAT71(0,param_3 < 0x20);
      pauVar2 = param_1 + 1;
      auVar4 = _pxor(*param_2,*param_1);
      pauVar1 = param_2 + 1;
      auVar5._8_8_ = in_a3_udw;
      auVar5._0_8_ = uVar3;
      auVar5 = _pcpyud(auVar4,auVar5);
      if (auVar5._0_8_ != 0 || auVar4._0_8_ != 0) break;
      param_3 = param_3 - 0x10;
      param_1 = pauVar2;
      param_2 = pauVar1;
    } while (uVar3 == 0);
  }
  while( true ) {
    param_3 = param_3 - 1;
    if (param_3 == 0xffffffff) {
      return 0;
    }
    if ((uint)(byte)(*param_1)[0] != (uint)(byte)(*param_2)[0]) break;
    param_1 = (undefined1 (*) [16])(*param_1 + 1);
    param_2 = (undefined1 (*) [16])(*param_2 + 1);
  }
  return (uint)(byte)(*param_1)[0] - (uint)(byte)(*param_2)[0];
}

