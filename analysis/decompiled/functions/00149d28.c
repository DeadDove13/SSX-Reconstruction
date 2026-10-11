/* Ghidra pseudocode. PS2 address: 00149d28. Not validated source. */

void FUN_00149d28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_001493f0();
  if (*(int *)(*(int *)((int)param_2 + 0x220) + 0x344) == 2) {
    FUN_001478c8(param_2,0,0x95);
  }
  else {
    FUN_001478c8(param_2,0,0x92);
  }
  FUN_00149630(param_1,param_2,param_3,param_4,param_7,1);
  return;
}

