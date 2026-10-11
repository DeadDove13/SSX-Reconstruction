/* Ghidra pseudocode. PS2 address: 00223380. Not validated source. */

long FUN_00223380(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined1 auStack_60 [16];
  
  uVar1 = FUN_00237128(param_2,0x10);
  lVar4 = -1;
  iVar3 = 0;
  if (0 < *(int *)((int)uVar1 + 8)) {
    do {
      FUN_0025a60c(auStack_60,0,5);
      FUN_0023c150(uVar1,iVar3,auStack_60);
      lVar2 = FUN_0023c128(uVar1,iVar3);
      if ((lVar2 != 0) && (lVar2 = FUN_001be538(0x295e90,lVar2,auStack_60,0), lVar4 == -1)) {
        lVar4 = lVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)uVar1 + 8));
  }
  FUN_0023a998(uVar1);
  return lVar4;
}

