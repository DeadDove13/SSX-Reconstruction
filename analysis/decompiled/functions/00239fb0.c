/* Ghidra pseudocode. PS2 address: 00239fb0. Not validated source. */

bool FUN_00239fb0(void)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined4 *in_a3_lo;
  bool bVar4;
  
  bVar4 = false;
  lVar2 = FUN_002391d0();
  if (lVar2 == 0) {
    *in_a3_lo = 0;
  }
  else {
    FUN_00238f58(lVar2);
    lVar3 = FUN_00238df8(lVar2);
    bVar4 = lVar3 == 1;
    uVar1 = FUN_00239028(lVar2);
    *in_a3_lo = uVar1;
  }
  return bVar4;
}

