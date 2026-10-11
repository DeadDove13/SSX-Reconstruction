/* Ghidra pseudocode. PS2 address: 00244f30. Not validated source. */

undefined4 FUN_00244f30(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_00245000();
  uVar1 = 0;
  if ((lVar2 < 4) && (0 < lVar2)) {
    uVar3 = FUN_00245058();
    FUN_00245048(uVar3);
    uVar1 = 1;
  }
  return uVar1;
}

