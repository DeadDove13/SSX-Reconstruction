/* Ghidra pseudocode. PS2 address: 001a1368. Not validated source. */

void FUN_001a1368(float param_1,float param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  undefined1 auStack_10c0 [4096];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uStack_30 = param_5;
  uStack_28 = param_6;
  uStack_20 = param_7;
  uStack_18 = param_8;
  uStack_10 = param_9;
  uStack_8 = param_10;
  FUN_002348d8(auStack_10c0,param_4,&uStack_30);
  uStack_c0 = DAT_0028ad30;
  uStack_bc = DAT_0028ad34;
  uStack_b8 = DAT_0028ad38;
  uStack_b4 = DAT_0028ad3c;
  DAT_0028ad34 = 0;
  DAT_0028ad38 = 0;
  DAT_0028ad3c = 0;
  FUN_001a1d88(param_1 + 2.0,param_2 + 2.0,0x3f800000,param_3,auStack_10c0);
  DAT_0028ad34 = uStack_bc;
  DAT_0028ad38 = uStack_b8;
  DAT_0028ad3c = uStack_b4;
  FUN_001a1d88(param_1,param_2,0x3f800000,param_3,auStack_10c0);
  return;
}

