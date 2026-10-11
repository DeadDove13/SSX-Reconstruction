/* Ghidra pseudocode. PS2 address: 0025b6a8. Not validated source. */

void FUN_0025b6a8(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined2 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 *puStack_d0;
  undefined4 uStack_c0;
  undefined4 uStack_ac;
  undefined *puStack_9c;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uStack_e4 = 4;
  uStack_f0 = param_1;
  uStack_e0 = param_1;
  uStack_30 = param_3;
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  uStack_ec = FUN_0025bcf8();
  puStack_9c = PTR_DAT_002a6614;
  puStack_d0 = &LAB_0025b6a0;
  uStack_c0 = 0;
  uStack_ac = 0;
  uStack_dc = uStack_ec;
  FUN_0025dc18(&uStack_f0,param_2,&uStack_30);
  return;
}

