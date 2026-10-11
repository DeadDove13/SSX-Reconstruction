/* Ghidra pseudocode. PS2 address: 00236fa0. Not validated source. */

long FUN_00236fa0(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  lVar1 = FUN_002369f0();
  lVar5 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_0023b460(lVar1);
    lVar3 = FUN_002365e8(lVar1);
    lVar5 = lVar1;
    if ((lVar2 != 0) && (lVar3 != 0)) {
      lVar4 = FUN_0023a448(param_1,lVar2,param_2 ^ 0x10);
      if (lVar4 == 0) {
        FUN_0023a998(lVar1);
        lVar5 = 0;
      }
      else {
        FUN_0023bac0(lVar4,lVar1,lVar2);
        FUN_0023a998(lVar1);
        lVar5 = FUN_0023a448(param_1,lVar3,param_2);
        if ((lVar5 != 0) && (lVar1 = FUN_00236440(lVar4,lVar5), lVar1 == 0)) {
          FUN_0023a998(lVar5);
          lVar5 = 0;
        }
        FUN_0023a998(lVar4);
        iVar6 = 0;
        do {
          SYNC(0);
          cacheOp(0x14,iVar6);
          SYNC(0);
          cacheOp(0x14,iVar6 + 1);
          SYNC(0);
          iVar6 = iVar6 + 0x40;
        } while (iVar6 < 0x1000);
      }
    }
  }
  return lVar5;
}

