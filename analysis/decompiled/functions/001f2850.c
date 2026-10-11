/* Ghidra pseudocode. PS2 address: 001f2850. Not validated source. */

void FUN_001f2850(undefined8 param_1,undefined8 param_2)

{
  undefined4 auStack_40 [4];
  
  if (DAT_00285308 == 1) {
    auStack_40[0] = 4;
  }
  else {
    auStack_40[0] = 1;
  }
  FUN_00209700(param_1,1,0);
  FUN_001f08b8(param_2,auStack_40);
  FUN_00209728(param_1,1);
  return;
}

