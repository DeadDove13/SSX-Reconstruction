/* Ghidra pseudocode. PS2 address: 00174a60. Not validated source. */

void FUN_00174a60(undefined4 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_0011ed18(0x295e90,0xc);
  DAT_0028ad30 = *(undefined4 *)param_5;
  DAT_0028ad3c = 0;
  DAT_0028ad34 = 0;
  DAT_0028ad38 = 0;
  FUN_0016c090(param_1,*(undefined4 *)(param_2 + 0x14),(int)param_3 + 2,(int)param_4 + 2,param_6,
               param_7);
  FUN_00176e38(0x28ad30,param_5);
  FUN_0016c090(param_1,*(undefined4 *)(param_2 + 0x14),param_3,param_4,param_6,param_7);
  return;
}

