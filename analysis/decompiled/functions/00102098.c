/* Ghidra pseudocode. PS2 address: 00102098. Not validated source. */

void FUN_00102098(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_002859e4;
  *(undefined4 *)(param_1 + 4) = 5;
  FUN_0015da00(*(undefined4 *)(iVar1 + 0xa0),
               (&PTR_s_RaceInBlocks2_00277adc)[*(int *)(param_1 + 8) * 6]);
  return;
}

