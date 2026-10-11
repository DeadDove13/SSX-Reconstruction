/* Ghidra pseudocode. PS2 address: 001960a8. Not validated source. */

undefined8 FUN_001960a8(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  piVar4 = (int *)(param_1 + 0x393c);
  do {
    iVar3 = iVar3 + 1;
    if (*piVar4 == 0) {
      lVar1 = FUN_00210840(0x28ac20,0x1c,0x8000000,0x2b5118,0,0);
      if (lVar1 != 0) {
        FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x1c);
      }
      uVar2 = FUN_001969c0(lVar1);
      *piVar4 = (int)uVar2;
      return uVar2;
    }
    piVar4 = piVar4 + 1;
  } while (iVar3 < 4);
  return 0;
}

