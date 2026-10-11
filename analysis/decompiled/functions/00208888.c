/* Ghidra pseudocode. PS2 address: 00208888. Not validated source. */

void FUN_00208888(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_190 [256];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (param_1 != 0) {
    uStack_38 = param_2;
    uStack_30 = param_3;
    uStack_28 = param_4;
    uStack_20 = param_5;
    uStack_18 = param_6;
    uStack_10 = param_7;
    uStack_8 = param_8;
    FUN_0025e858(auStack_190,param_1,&uStack_38);
    FUN_0018db98(auStack_190);
  }
  return;
}

