/* Ghidra pseudocode. PS2 address: 00249410. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00249410(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  if (0 < ram0x002a5230) {
    FUN_0025a720(0x2bef80);
  }
  FUN_00247cb0();
  iVar2 = PollSema(DAT_002a5244);
  if (DAT_002a5244 == iVar2) {
    lVar3 = FUN_00249030(1);
    if (lVar3 == 0) {
      FUN_00266a80(0);
      if (DAT_002a5260 < 0) {
        while( true ) {
          while (lVar3 = FUN_002670b8(0x2d3330,0xffffffff8000059a,0), lVar3 < 0) {
            if (0 < ram0x002a5230) {
              FUN_0025a720(0x2bef90);
            }
            iVar2 = 0xfffff;
            do {
              bVar1 = iVar2 != -1;
              iVar2 = iVar2 + -1;
            } while (bVar1);
          }
          if (DAT_002d3354 != 0) break;
          iVar2 = 0xfffff;
          do {
            bVar1 = iVar2 != -1;
            iVar2 = iVar2 + -1;
          } while (bVar1);
        }
        DAT_002a5260 = 0;
      }
      DAT_002d33e0 = param_1;
      FUN_002669d0(0x2d33e0,4);
      lVar3 = FUN_00267268(0x2d3330,0,0,0x2d33e0,4,0x2d2ec0,4,0);
      if (-1 < lVar3) {
        if (0 < ram0x002a5230) {
          FUN_0025a720(0x2befb0);
        }
        SignalSema(DAT_002a5244);
        return DAT_202d2ec0;
      }
    }
    SignalSema(DAT_002a5244);
  }
  return 6;
}

