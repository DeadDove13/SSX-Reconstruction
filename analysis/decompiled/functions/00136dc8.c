/* Ghidra pseudocode. PS2 address: 00136dc8. Not validated source. */

void FUN_00136dc8(float param_1,undefined8 param_2,long param_3)

{
  FUN_001f2050(DAT_002c56e8);
  if (param_3 == 0) {
    FUN_00137ea0(0x40a00000,param_2,10,(int)-param_1);
    return;
  }
  FUN_00137ea0(0x40200000,param_2,0xb,(int)param_1);
  return;
}

