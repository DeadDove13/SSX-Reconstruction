/* Ghidra pseudocode. PS2 address: 00247ec0. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00247ec0(undefined8 *param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  
  FUN_00247cb0();
  iVar7 = PollSema(DAT_002a5240);
  if (DAT_002a5240 == iVar7) {
    DAT_002a5238 = 1;
    ReferThreadStatus(DAT_002d1f00,0x2d1f08);
    lVar8 = FUN_00248f88(1);
    if (lVar8 == 0) {
      FUN_00266a80(0);
      if (DAT_002a5250 < 0) {
        while( true ) {
          while (lVar8 = FUN_002670b8(0x2d21a8,0xffffffff80000597,0), lVar8 < 0) {
            if (0 < ram0x002a5230) {
              FUN_0025a720(0x2beda0);
            }
            iVar7 = 0xfffff;
            do {
              bVar1 = iVar7 != -1;
              iVar7 = iVar7 + -1;
            } while (bVar1);
          }
          if (DAT_002d21cc != 0) break;
          iVar7 = 0xfffff;
          do {
            bVar1 = iVar7 != -1;
            iVar7 = iVar7 + -1;
          } while (bVar1);
        }
        DAT_002a5250 = 0;
      }
      DAT_002d2020 = *param_2;
      iVar7 = 0;
      if (DAT_002d2020 != '\0') {
        for (iVar7 = 1;
            (iVar7 < 0x100 &&
            (cVar2 = param_2[iVar7], (&DAT_002d2020)[iVar7] = cVar2, cVar2 != '\0'));
            iVar7 = iVar7 + 1) {
        }
      }
      if (iVar7 == 0x100) {
        DAT_002d211f = 0;
      }
      DAT_002d2120 = &DAT_002d2000;
      if (0 < ram0x002a5230) {
        FUN_0025a720(0x2bedc0,0x2d2020);
      }
      FUN_002669d0(0x2d2000,0x124);
      lVar8 = FUN_00267268(0x2d21a8,0,0,0x2d2000,0x124,0x2d2140,4,0);
      uVar5 = DAT_202d2018;
      uVar4 = DAT_202d2010;
      uVar3 = DAT_202d2008;
      if (-1 < lVar8) {
        *param_1 = DAT_202d2000;
        param_1[1] = uVar3;
        param_1[2] = uVar4;
        param_1[3] = uVar5;
        if (((0 < ram0x002a5230) && (FUN_0025a720(0x2bedd8,param_1 + 1), 0 < ram0x002a5230)) &&
           (FUN_0025a720(0x2bede8,*(undefined4 *)((int)param_1 + 4)), 0 < ram0x002a5230)) {
          FUN_0025a720(0x2bedf8,*(undefined4 *)param_1);
        }
        uVar6 = DAT_202d2140;
        SignalSema(DAT_002a5240);
        return uVar6;
      }
    }
    SignalSema(DAT_002a5240);
  }
  return 0;
}

