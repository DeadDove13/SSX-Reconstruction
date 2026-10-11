/* Ghidra pseudocode. PS2 address: 00153f90. Not validated source. */

undefined8 FUN_00153f90(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x1a4;
  }
  else if (param_2 == 1) {
    uVar1 = 0x1a5;
  }
  else if (param_2 == 2) {
    uVar1 = 0x1a6;
  }
  else if (param_2 == 3) {
    uVar1 = 0x1a8;
  }
  else if (param_2 == 4) {
    uVar1 = 0x1a9;
  }
  else if (param_2 == 5) {
    uVar1 = 0x1aa;
  }
  else if (param_2 == 6) {
    uVar1 = 0x1ab;
  }
  else if (param_2 == 7) {
    uVar1 = 0x1ac;
  }
  else if (param_2 == 8) {
    uVar1 = 0x1ad;
  }
  else {
    if (param_2 != 9) {
      return 0;
    }
    uVar1 = 0x1c0;
  }
  uVar1 = FUN_00234e80(DAT_002852fc,uVar1);
  return uVar1;
}

