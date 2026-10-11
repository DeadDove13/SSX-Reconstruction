/* Ghidra pseudocode. PS2 address: 00205210. Not validated source. */

undefined4 FUN_00205210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_0025b730((int)param_1 + 0xc);
  uVar1 = 0;
  if (lVar2 == 0) {
    lVar2 = FUN_00205108(param_1,0x2c5710);
    uVar1 = 0;
    if (lVar2 == 0) {
      lVar2 = FUN_00204ee0(param_1);
      if (lVar2 == 0) {
        uVar1 = 0;
      }
      else {
        FUN_0025bbe4(param_3,lVar2);
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

