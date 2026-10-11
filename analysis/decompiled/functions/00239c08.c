/* Ghidra pseudocode. PS2 address: 00239c08. Not validated source. */

int FUN_00239c08(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int aiStack_30 [4];
  
  lVar1 = FUN_002398a0(param_1,0,param_2,aiStack_30,0x2c5a00);
  if (lVar1 == 0) {
    aiStack_30[0] = 0;
  }
  else {
    aiStack_30[0] = (int)param_1 + aiStack_30[0];
  }
  return aiStack_30[0];
}

