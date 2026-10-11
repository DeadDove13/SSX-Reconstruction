/* Ghidra pseudocode. PS2 address: 001a1130. Not validated source. */

void FUN_001a1130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 in_f19;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  _uStack_30 = CONCAT44((int)((ulong)param_3 >> 0x20),in_f19);
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  FUN_001a16b0(param_1,param_2,&uStack_30);
  return;
}

