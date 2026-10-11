/* Ghidra pseudocode. PS2 address: 00195e20. Not validated source. */

undefined8 FUN_00195e20(int param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  piVar4 = (int *)(param_1 + 0x392c);
  do {
    iVar3 = iVar3 + 1;
    if (*piVar4 == 0) {
      lVar1 = FUN_00210840(0x28ac20,0x18,0x8000000,0x2b5108,0,0);
      if (lVar1 != 0) {
        FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x18);
      }
      uVar2 = FUN_001980a8(lVar1,param_2);
      *piVar4 = (int)uVar2;
      return uVar2;
    }
    piVar4 = piVar4 + 1;
  } while (iVar3 < 4);
  return 0;
}

