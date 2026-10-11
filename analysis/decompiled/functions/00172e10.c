/* Ghidra pseudocode. PS2 address: 00172e10. Not validated source. */

void FUN_00172e10(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  FUN_0011ed18(0x295e90,0xc);
  DAT_0028ad30 = *(undefined4 *)param_6;
  DAT_0028ad3c = 0;
  DAT_0028ad34 = 0;
  DAT_0028ad38 = 0;
  FUN_0016c090(param_1,param_3,(int)param_4 + 2,(int)param_5 + 2,param_7,param_8);
  FUN_00176e38(0x28ad30,param_6);
  FUN_0016c090(param_1,param_3,param_4,param_5,param_7,param_8);
  return;
}

