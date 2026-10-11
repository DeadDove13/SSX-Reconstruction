/* Ghidra pseudocode. PS2 address: 00245380. Not validated source. */

undefined4 FUN_00245380(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_00245458();
  if ((lVar1 == 0) || (lVar1 == 1)) {
    uVar2 = 0;
  }
  else {
    if (param_1 == 0) {
      uVar2 = 2;
    }
    else {
      if (param_1 != 1) {
        return 1;
      }
      uVar2 = 4;
    }
    REG_VIF0_FBRST = uVar2;
    uVar2 = 1;
  }
  return uVar2;
}

