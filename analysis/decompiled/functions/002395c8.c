/* Ghidra pseudocode. PS2 address: 002395c8. Not validated source. */

undefined8 FUN_002395c8(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = DAT_002a3360;
  DAT_002a3360 = (undefined4)param_3;
  uVar2 = (*param_1)(param_3,param_4);
  DAT_002a3360 = uVar1;
  FUN_002385e0(0);
  return uVar2;
}

