/* Ghidra pseudocode. PS2 address: 001e1280. Not validated source. */

void FUN_001e1280(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)((int)param_1 + 0xc) != 0) {
    iVar2 = 0;
    piVar1 = (int *)((int)param_1 + 0x10);
    FUN_0011ed48(0x295e90,3);
    FUN_0011ed08(0x295e90,2,0);
    FUN_0011ed28(DAT_002c3714,0x295e90,0,0);
    FUN_0011ed38(0x295e90,1);
    do {
      if (*piVar1 != 0) {
        FUN_001e10c8(param_1,iVar2);
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x3c;
    } while (iVar2 < 0xc);
    FUN_0011ed48(0x295e90,3);
    FUN_0011ed28(DAT_002c3718,0x295e90,0,2);
    FUN_0011ed38(0x295e90,0);
    FUN_0011ed08(0x295e90,0,0);
    return;
  }
  return;
}

