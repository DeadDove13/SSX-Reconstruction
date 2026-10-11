/* Ghidra pseudocode. PS2 address: 002481b0. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_002481b0(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  FUN_00247cb0();
  iVar2 = PollSema(DAT_002a5240);
  if (DAT_002a5240 == iVar2) {
    DAT_002a5238 = (undefined4)param_1;
    ReferThreadStatus(DAT_002d1f00,0x2d1f08);
    lVar3 = FUN_00248f88(1);
    if (lVar3 == 0) {
      FUN_00266a80(0);
      if (DAT_002a5254 < 0) {
        while( true ) {
          while (lVar3 = FUN_002670b8(0x2d2180,0xffffffff80000595,0), lVar3 < 0) {
            if (0 < ram0x002a5230) {
              FUN_0025a720(0x2bee38);
            }
            iVar2 = 0xfffff;
            do {
              bVar1 = iVar2 != -1;
              iVar2 = iVar2 + -1;
            } while (bVar1);
          }
          if (DAT_002d21a4 != 0) break;
          iVar2 = 0xfffff;
          do {
            bVar1 = iVar2 != -1;
            iVar2 = iVar2 + -1;
          } while (bVar1);
        }
        DAT_002a5254 = 0;
      }
      return 1;
    }
    SignalSema(DAT_002a5240);
  }
  else if (0 < ram0x002a5230) {
    FUN_0025a720(0x2bee10,param_1,DAT_002a5238);
    return 0;
  }
  return 0;
}

