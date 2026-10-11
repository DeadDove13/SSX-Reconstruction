/* Ghidra pseudocode. PS2 address: 001eed60. Not validated source. */

void FUN_001eed60(undefined8 param_1,long param_2)

{
  FUN_001ee7d8(param_1,*(undefined4 *)((int)param_1 + 0x6618));
  if (param_2 != 0) {
    FUN_001ee750(param_1,0,1);
    return;
  }
  FUN_001ee750(param_1,0,0);
  FUN_001ee750(param_1,0,2);
  FUN_001ee750(param_1,0,3);
  FUN_001ee750(param_1,0,7);
  FUN_001ee750(param_1,0,0xb);
  FUN_001ee750(param_1,0,0xc);
  FUN_001ee750(param_1,0,0xf);
  FUN_001ee750(param_1,0,0x10);
  return;
}

