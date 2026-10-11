/* Ghidra pseudocode. PS2 address: 0023b1c8. Not validated source. */

undefined8 FUN_0023b1c8(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = EndOfHeap();
  iVar1 = (iVar1 + -0x2d8807) - DAT_002c5a24;
  FUN_0023e540(0x23b3e8);
  lVar2 = FUN_00259ac0(iVar1);
  if (lVar2 == 0) {
    DAT_002c5ad4 = 0;
    uVar3 = 0;
  }
  else {
    DAT_002c5ad4 = (int)lVar2;
    uVar3 = FUN_0023acc8(0,0x2c5a28,lVar2,iVar1,0x40,0x80,0,0);
    DAT_002a33cc = DAT_002a33c8;
    if (DAT_002c5ad4 == 0) {
      DAT_002c5ad4 = (int)lVar2;
    }
  }
  return uVar3;
}

