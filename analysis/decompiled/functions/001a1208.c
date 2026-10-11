/* Ghidra pseudocode. PS2 address: 001a1208. Not validated source. */

void FUN_001a1208(undefined4 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined4 in_f19;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  _uStack_20 = CONCAT44((int)((ulong)param_6 >> 0x20),in_f19);
  uStack_18 = param_7;
  uStack_10 = param_8;
  uStack_8 = param_9;
  FUN_001a1718(param_1,(float)param_3,(float)param_4,param_2,param_5,&uStack_20);
  return;
}

