/* Ghidra pseudocode. PS2 address: 00205288. Not validated source. */

undefined4 FUN_00205288(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_0025b730((int)param_1 + 0xc);
  uVar2 = 0;
  if (lVar1 == 0) {
    lVar1 = FUN_00205108(param_1,0x2c5710);
    uVar2 = 0;
    if (lVar1 == 0) {
      uVar2 = FUN_00205078(param_1);
      *param_3 = uVar2;
      uVar2 = 1;
    }
  }
  return uVar2;
}

