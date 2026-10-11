/* Ghidra pseudocode. PS2 address: 00219068. Not validated source. */

ulong * FUN_00219068(ulong *param_1,long param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  uint uVar6;
  ulong *puVar7;
  
  puVar7 = (ulong *)0x0;
  bVar1 = false;
  uVar3 = *param_1;
  puVar4 = param_1;
  do {
    uVar6 = (uint)uVar3 & 0xffff;
    puVar5 = puVar4;
    switch((uint)((uVar3 << 4) >> 0x20) & 7) {
    case 1:
      puVar5 = puVar4 + uVar6 * 2 + 2;
      puVar7 = puVar4;
      break;
    case 3:
      if ((long)uVar3 >> 0x20 == param_2) {
        uVar3 = *puVar7;
        iVar2 = (int)uVar3;
        uVar6 = 0x130;
      }
      else {
        if ((long)uVar3 >> 0x20 != param_3) {
          *puVar4 = (long)((int)param_1 + (int)(uVar3 >> 0x20)) << 0x20 | uVar3 & 0xffffffff;
          puVar5 = puVar4 + 2;
          break;
        }
        uVar3 = *puVar7;
        iVar2 = (int)uVar3;
        uVar6 = 0x1e0;
      }
      *puVar7 = uVar3 & 0xffff0000 | (long)(iVar2 + 1) & 0xffffU;
      *puVar4 = 0;
      puVar4[1] = ((long)(int)(uVar6 >> 3) | 0x14000000U) << 0x20;
      puVar5 = puVar4 + 2;
      break;
    case 6:
      puVar5 = puVar4 + uVar6 * 2 + 2;
      bVar1 = true;
    }
    if (bVar1) {
      return puVar5;
    }
    uVar3 = *puVar5;
    puVar4 = puVar5;
  } while( true );
}

