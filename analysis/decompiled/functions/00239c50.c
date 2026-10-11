/* Ghidra pseudocode. PS2 address: 00239c50. Not validated source. */

int FUN_00239c50(undefined8 param_1,long param_2)

{
  int iVar1;
  int aiStack_30 [4];
  
  aiStack_30[0] = 0;
  if (param_2 != 0) {
    FUN_002398a0(param_1,param_2,0,aiStack_30,0x2c5a00);
  }
  iVar1 = (int)param_1 + aiStack_30[0];
  if (aiStack_30[0] == 0) {
    iVar1 = 0;
  }
  return iVar1;
}

