/* Ghidra pseudocode. PS2 address: 0010ae08. Not validated source. */

void FUN_0010ae08(float param_1,int param_2)

{
  if ((DAT_0027ba88 == 3) || (DAT_0027ba88 == 5)) {
    FUN_00136d20(param_1,param_2 + 0x8370);
    *(float *)(*(int *)(DAT_002859e4 + 0x14) + 0x14) =
         *(float *)(*(int *)(DAT_002859e4 + 0x14) + 0x14) + param_1;
  }
  FUN_00201fe0(param_1,DAT_002c56e8);
  return;
}

