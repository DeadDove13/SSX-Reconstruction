/* Ghidra pseudocode. PS2 address: 00223450. Not validated source. */

long FUN_00223450(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined1 auStack_60 [16];
  
  lVar1 = FUN_002368e8(param_2);
  if (lVar1 == 0) {
    lVar1 = -1;
  }
  else {
    uVar2 = FUN_00237128(param_2,0x10);
    lVar1 = -1;
    iVar4 = 0;
    if (0 < *(int *)((int)uVar2 + 8)) {
      do {
        FUN_0025a60c(auStack_60,0,5);
        FUN_0023c150(uVar2,iVar4,auStack_60);
        lVar3 = FUN_0023c128(uVar2,iVar4);
        if ((lVar3 != 0) && (lVar3 = FUN_001be538(0x295e90,lVar3,auStack_60,0), lVar1 == -1)) {
          lVar1 = lVar3;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)((int)uVar2 + 8));
    }
    FUN_0023a998(uVar2);
  }
  return lVar1;
}

