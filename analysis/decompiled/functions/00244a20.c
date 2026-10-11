/* Ghidra pseudocode. PS2 address: 00244a20. Not validated source. */

undefined4 FUN_00244a20(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 in_vc12;
  
  uVar2 = 0;
  uVar1 = FUN_00244b50();
  switch(uVar1) {
  case 4:
    uVar1 = _cfc2(in_vc12);
    _ctc2((uint)uVar1 | 1);
  case 0:
  case 3:
    uVar2 = 1;
  default:
    return uVar2;
  }
}

