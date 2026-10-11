/* Ghidra pseudocode. PS2 address: 001d6918. Not validated source. */

void FUN_001d6918(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_0023a448(0x2b7780,0xc000,0);
  if (lVar1 != 0) {
    FUN_0023bbd0(lVar1,0xffffffffdeadc0ed,0xc000);
  }
  *(int *)((int)param_1 + 0x554) = (int)lVar1;
  FUN_001d6998(param_1);
  return;
}

