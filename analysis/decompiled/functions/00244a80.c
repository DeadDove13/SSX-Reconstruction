/* Ghidra pseudocode. PS2 address: 00244a80. Not validated source. */

undefined4 FUN_00244a80(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_00244b50();
  uVar1 = 0;
  if ((lVar2 < 4) && (0 < lVar2)) {
    uVar3 = FUN_00244ba0();
    FUN_00244b90(uVar3);
    uVar1 = 1;
  }
  return uVar1;
}

