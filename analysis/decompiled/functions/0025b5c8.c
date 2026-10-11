/* Ghidra pseudocode. PS2 address: 0025b5c8. Not validated source. */

void FUN_0025b5c8(undefined4 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *apuStack_e0 [2];
  undefined4 uStack_d8;
  undefined2 uStack_d4;
  undefined1 *puStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_8c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uStack_d4 = 0x208;
  uStack_cc = 0x7fffffff;
  uStack_d8 = 0x7fffffff;
  apuStack_e0[0] = param_2;
  puStack_d0 = param_2;
  uStack_8c = param_1;
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  FUN_0025c3f8(apuStack_e0,param_3,&uStack_28);
  *apuStack_e0[0] = 0;
  return;
}

