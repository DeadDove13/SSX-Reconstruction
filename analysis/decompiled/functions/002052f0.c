/* Ghidra pseudocode. PS2 address: 002052f0. Not validated source. */

undefined4 FUN_002052f0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_0025b730((int)param_1 + 0xc);
  uVar1 = 0;
  if (lVar2 == 0) {
    lVar2 = FUN_00205108(param_1,0x2c5710);
    if (lVar2 == 0) {
      uVar1 = FUN_002050c0(param_1);
      *param_3 = uVar1;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

