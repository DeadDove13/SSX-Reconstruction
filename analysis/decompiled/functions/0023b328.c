/* Ghidra pseudocode. PS2 address: 0023b328. Not validated source. */

undefined8 FUN_0023b328(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_0023e540(0x23b3e8);
  lVar1 = FUN_00259ac0(param_1);
  if (lVar1 == 0) {
    DAT_002c5ad4 = 0;
    uVar2 = 0;
  }
  else {
    DAT_002c5ad4 = (int)lVar1;
    uVar2 = FUN_0023acc8(0,0x2c5a28,lVar1,param_1,0x40,0x80,0,0);
    DAT_002a33cc = DAT_002a33c8;
    if (DAT_002c5ad4 == 0) {
      DAT_002c5ad4 = (int)lVar1;
    }
  }
  return uVar2;
}

