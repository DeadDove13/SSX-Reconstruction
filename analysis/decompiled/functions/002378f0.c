/* Ghidra pseudocode. PS2 address: 002378f0. Not validated source. */

undefined8 FUN_002378f0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  if ((int)param_1 >> 0x18 == 1) {
    uVar1 = FUN_0018bc78();
  }
  else if (((int)param_1 >> 0x18 == 2) && (DAT_002d0400 == 0)) {
    DAT_002d0400 = 1;
    uVar1 = 1;
    DAT_002d0404 = param_1 & 0xffffff;
    DAT_002d0408 = param_2;
    DAT_002d040c = param_3;
    DAT_002d0410 = param_4;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

