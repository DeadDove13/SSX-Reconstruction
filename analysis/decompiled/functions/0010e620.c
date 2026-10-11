/* Ghidra pseudocode. PS2 address: 0010e620. Not validated source. */

void FUN_0010e620(undefined8 param_1,undefined8 param_2)

{
  ((undefined4 *)param_1)[1] = 0xdeadbef9;
  *(undefined4 *)param_1 = 0x60;
  FUN_001973f0(param_2,param_1,0x60);
  return;
}

