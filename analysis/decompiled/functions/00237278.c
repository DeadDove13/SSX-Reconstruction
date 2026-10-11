/* Ghidra pseudocode. PS2 address: 00237278. Not validated source. */

long FUN_00237278(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  lVar1 = FUN_002369f0(param_1,0x10);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_0023b460(lVar1);
    lVar3 = FUN_002365e8(lVar1);
    lVar4 = lVar1;
    if ((0 < lVar2) && (0 < lVar3)) {
      lVar4 = FUN_0023a448(param_1,lVar3,0x10);
      if ((lVar4 != 0) && (lVar2 = FUN_00236440(lVar1,lVar4), lVar2 == 0)) {
        FUN_0023a998(lVar4);
        lVar4 = 0;
      }
      FUN_0023a998(lVar1);
      lVar2 = lVar3;
      if (lVar4 == 0) {
        return 0;
      }
    }
    if ((0 < param_3) && (param_3 < lVar2)) {
      lVar2 = param_3;
    }
    FUN_0023bac0(param_2,lVar4,lVar2);
    FUN_0023a998(lVar4);
    iVar5 = 0;
    do {
      SYNC(0);
      cacheOp(0x14,iVar5);
      SYNC(0);
      cacheOp(0x14,iVar5 + 1);
      SYNC(0);
      iVar5 = iVar5 + 0x40;
    } while (iVar5 < 0x1000);
  }
  return lVar2;
}

