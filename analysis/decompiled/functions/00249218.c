/* Ghidra pseudocode. PS2 address: 00249218. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00249218(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = FUN_00249030(1);
  uVar3 = 0;
  if (lVar4 == 0) {
    FUN_00266a80(0);
    DAT_002d1f00 = GetThreadId();
    DAT_002a5250 = 0xffffffff;
    DAT_002a5254 = 0xffffffff;
    DAT_002a5258 = 0xffffffff;
    DAT_002a525c = 0xffffffff;
    DAT_002a5260 = 0xffffffff;
    DAT_002a5264 = 0xffffffff;
    DAT_002a5268 = 0xffffffff;
    while( true ) {
      while (lVar4 = FUN_002670b8(0x2d3308,0xffffffff80000592,0), lVar4 < 0) {
        if (0 < ram0x002a5230) {
          FUN_0025a720(0x2bef50);
        }
        iVar2 = 0xfffff;
        do {
          bVar1 = iVar2 != -1;
          iVar2 = iVar2 + -1;
        } while (bVar1);
      }
      if (DAT_002d332c != 0) break;
      iVar2 = 0xfffff;
      do {
        bVar1 = iVar2 != -1;
        iVar2 = iVar2 + -1;
      } while (bVar1);
    }
    DAT_002a5268 = 0;
    DAT_002d33d0 = param_1;
    FUN_002669d0(0x2d33d0,4);
    lVar4 = FUN_00267268(0x2d3308,0,0,0x2d33d0,4,0,0,0);
    uVar3 = 0;
    if (-1 < lVar4) {
      if (((param_1 < 0) || (param_1 < 2)) || (param_1 != 5)) {
        FUN_00247cb0();
        uVar3 = 1;
      }
      else {
        if (0 < ram0x002a5230) {
          FUN_0025a720(0x2bef70);
        }
        FUN_00247d38();
        DAT_002a5240 = 0xffffffff;
        DAT_002a5244 = 0xffffffff;
        DAT_002a5248 = 0xffffffff;
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

