/* Ghidra pseudocode. PS2 address: 001eb0e0. Not validated source. */

void FUN_001eb0e0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  FUN_001eb468(param_1,0x2c5488);
  FUN_001eb468(param_1,0x2c5490);
  FUN_001eb468(param_1,0x2c5498);
  FUN_001eb468(param_1,0x2c54a0);
  FUN_001eb468(param_1,0x2c54a8);
  FUN_001eb468(param_1,0x2c54b0);
  FUN_001eb468(param_1,0x2c54b8);
  lVar2 = FUN_0023a448(0x2c54c0,0x4000,0x10);
  if (lVar2 != 0) {
    FUN_0023bbd0(lVar2,0xffffffffdeadc0ed,0x4000);
  }
  piVar5 = (int *)param_1;
  iVar4 = 0;
  if (0 < *piVar5) {
    piVar3 = piVar5 + 0xe;
    do {
      iVar1 = FUN_001be688(0x295e90,lVar2,0x80,0x80,3,4,0x2c54c8,lVar2);
      iVar4 = iVar4 + 1;
      *piVar3 = iVar1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *piVar5);
  }
  if (lVar2 != 0) {
    FUN_00103710(lVar2);
    return;
  }
  return;
}

