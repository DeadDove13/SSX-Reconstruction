/* Ghidra pseudocode. PS2 address: 0018b010. Not validated source. */

undefined * FUN_0018b010(void)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 10;
  do {
    if (iVar3 == 0) {
      iVar3 = 10;
      FUN_00249218(0);
    }
    FUN_00249410(0);
    lVar2 = FUN_002486d0(DAT_00285b34,1,0x285b80,0x285b24);
    FUN_00248f88(0);
    bVar1 = false;
    if (lVar2 != 0) {
      lVar2 = FUN_002497e0();
      bVar1 = lVar2 == 0;
    }
    iVar3 = iVar3 + -1;
  } while (!bVar1);
  return &DAT_00285b80;
}

