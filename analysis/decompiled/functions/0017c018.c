/* Ghidra pseudocode. PS2 address: 0017c018. Not validated source. */

undefined8 FUN_0017c018(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_0016c3d0();
  *(undefined4 *)(iVar1 + 0xb50) = 1;
  *(undefined **)(iVar1 + 4) = &DAT_002b15b0;
  *(undefined4 *)(iVar1 + 0xb58) = 0;
  *(undefined4 *)(iVar1 + 0xb60) = 0;
  *(undefined4 *)(iVar1 + 0xb68) = 0;
  *(undefined4 *)(iVar1 + 0xb74) = 0;
  *(undefined **)(iVar1 + 0xb78) = &DAT_002b1028;
  *(char **)(iVar1 + 0xb54) = s_RANKING_002c4b00;
  *(undefined4 *)(iVar1 + 0xb70) = 1;
  *(undefined4 *)(iVar1 + 0xb5c) = 1;
  *(undefined4 *)(iVar1 + 0xb64) = 1;
  *(undefined4 *)(iVar1 + 0xb6c) = 1;
  FUN_00177718(iVar1 + 0xb54);
  *(undefined **)(iVar1 + 0xb78) = &DAT_002b0fb8;
  *(undefined **)(iVar1 + 0xb84) = &DAT_002c4a28;
  *(int *)(iVar1 + 0xb80) = *(int *)(iVar1 + 0xb3c) + 0x400;
  *(undefined4 *)(iVar1 + 0xb8c) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xb7c) = 0;
  *(undefined4 *)(iVar1 + 0xb88) = 0;
  return param_1;
}

