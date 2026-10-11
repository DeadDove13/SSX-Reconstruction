/* Ghidra pseudocode. PS2 address: 00156e40. Not validated source. */

void FUN_00156e40(undefined8 param_1)

{
  int aiStack_30 [4];
  
  aiStack_30[0] = *(int *)((int)param_1 + 0x195c);
  if (aiStack_30[0] != 0) {
    aiStack_30[0] = aiStack_30[0] + 0x290;
    FUN_001998b8(*(undefined4 *)(DAT_002859e4 + 0x38),aiStack_30);
    FUN_00156de8(param_1);
  }
  return;
}

