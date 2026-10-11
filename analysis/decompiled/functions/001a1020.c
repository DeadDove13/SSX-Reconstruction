/* Ghidra pseudocode. PS2 address: 001a1020. Not validated source. */

void FUN_001a1020(undefined8 param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  FUN_001a1718(0x3f800000,(float)param_2,(float)param_3,param_1,param_4,&uStack_20);
  return;
}

