/* Ghidra pseudocode. PS2 address: 00101d28. Not validated source. */

void FUN_00101d28(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x438) = 1;
  FUN_00147438(0x2795b8);
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_0015da00(*(undefined4 *)(DAT_002859e4 + 0xa0),
               (&PTR_s_RaceLoaded2_00277ac8)[*(int *)(param_1 + 8) * 6]);
  return;
}

