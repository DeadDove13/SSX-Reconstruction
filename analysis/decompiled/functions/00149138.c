/* Ghidra pseudocode. PS2 address: 00149138. Not validated source. */

undefined8 FUN_00149138(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  *(undefined **)(iVar2 + 0x1d0) = &DAT_002bbd98;
  iVar1 = 0x15;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  FUN_001eadd0(param_1);
  FUN_00149258(iVar2 + 0x214);
  *(undefined **)(iVar2 + 0x1d0) = &DAT_002ac230;
  FUN_001490d0(param_1);
  return param_1;
}

