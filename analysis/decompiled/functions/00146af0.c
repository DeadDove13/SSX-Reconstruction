/* Ghidra pseudocode. PS2 address: 00146af0. Not validated source. */

void FUN_00146af0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 600 + param_2 * 4);
  if ((*piVar2 == 0) && (piVar1 = (int *)(param_2 * 0x10 + param_1), *piVar1 == 0)) {
    FUN_001468d0(piVar1,param_1 + 0x244,(&PTR_s__data_char_animations_cmanim_adf_00279898)[param_2],
                 0x10);
    *piVar2 = 1;
  }
  return;
}

