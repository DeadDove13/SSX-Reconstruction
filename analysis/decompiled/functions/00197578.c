/* Ghidra pseudocode. PS2 address: 00197578. Not validated source. */

void FUN_00197578(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 auStack_440 [1024];
  
  for (; 0x3ff < param_3; param_3 = param_3 + -0x400) {
    FUN_001978a0(param_2,auStack_440,0x400);
    FUN_001973f0(param_1,auStack_440,0x400);
  }
  if (0 < param_3) {
    FUN_001978a0(param_2,auStack_440,param_3);
    FUN_001973f0(param_1,auStack_440,param_3);
  }
  return;
}

