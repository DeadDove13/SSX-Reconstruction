/* Ghidra pseudocode. PS2 address: 0018a280. Not validated source. */

void FUN_0018a280(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 auStack_410 [256];
  undefined1 auStack_10 [16];
  
  DAT_002c5bb8 = (uint)auStack_10 | 0xffff;
  DAT_002c5bb4 = param_3;
  DAT_002c5bb0 = param_2;
  DAT_002c5bac = param_1;
  for (; param_2 < param_1; param_2 = param_2 + 1) {
    *param_2 = 0xdeafc0ed;
  }
  for (; param_3 < auStack_410; param_3 = param_3 + 1) {
    *param_3 = 0xdeafc0ed;
  }
  return;
}

