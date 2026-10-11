/* Ghidra pseudocode. PS2 address: 002483f8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x002484c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_002483f8(int *param_1,undefined1 *param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  
  lVar2 = FUN_00248330();
  if ((lVar2 != 6) && (lVar2 = FUN_002481b0(3), lVar2 != 0)) {
    if (0 < ram0x002a5230) {
      FUN_0025a720(0x2bee50);
    }
    iVar3 = *param_1;
    iVar7 = 0;
    if (iVar3 != -1) {
      piVar4 = &DAT_002d2300;
      do {
        *piVar4 = iVar3;
        iVar7 = iVar7 + 1;
        piVar4 = piVar4 + 1;
        param_1 = param_1 + 1;
        if (0xbf < iVar7) break;
        iVar3 = *param_1;
      } while (iVar3 != -1);
    }
    iVar3 = (iVar7 / 3) * 3;
    (&DAT_002d2300)[(iVar7 / 3) * 3] = 0xffffffff;
    (&DAT_002d2300)[iVar3 + 1] = 0xffffffff;
    (&DAT_002d2300)[iVar3 + 2] = 0xffffffff;
    DAT_002d260c = *param_2;
    DAT_002d260d = param_2[1];
    DAT_002d260e = param_2[2];
    DAT_002d2610 = &DAT_002d2640;
    bVar1 = param_2[2];
    if (bVar1 == 1) {
      iVar7 = 0x918;
    }
    else {
      iVar7 = 0x800;
      if ((1 < bVar1) && (bVar1 == 2)) {
        iVar7 = 0x924;
      }
    }
    DAT_002d2640 = 0;
    if (0 < ram0x002a5230) {
      FUN_0025a720(0x2bee68);
    }
    iVar8 = 1;
    if (1 < iVar3) {
      puVar6 = &DAT_002d2308;
      do {
        if ((*puVar6 & 1) == 0) {
          if (ram0x002a5230 < 1) {
            uVar5 = puVar6[-1];
          }
          else {
            FUN_0025a720(0x2bee80,*puVar6,puVar6[-1] * iVar7);
            uVar5 = puVar6[-1];
          }
          FUN_002669d0(*puVar6,uVar5 * iVar7);
        }
        iVar8 = iVar8 + 3;
        puVar6 = puVar6 + 3;
      } while (iVar8 < iVar3);
    }
    FUN_002669d0(0x2d2300,0x18);
    FUN_002669d0(0x2d2640,4);
    if (0 < ram0x002a5230) {
      FUN_0025a720(0x2beeb0);
    }
    DAT_002a5274 = 1;
    DAT_002a524c = 1;
    lVar2 = FUN_00267268(0x2d2180,0xf,1,0x2d2300,0x314,0,0,0x247a10);
    if (-1 < lVar2) {
      if (0 < ram0x002a5230) {
        FUN_0025a720(0x2beec8);
      }
      SignalSema(DAT_002a5240);
      return 1;
    }
    DAT_002a5274 = 0;
    DAT_002a524c = 0;
    SignalSema(DAT_002a5240);
  }
  return 0;
}

