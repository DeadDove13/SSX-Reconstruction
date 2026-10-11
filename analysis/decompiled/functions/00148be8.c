/* Ghidra pseudocode. PS2 address: 00148be8. Not validated source. */

undefined8 FUN_00148be8(undefined8 param_1)

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
  *(undefined **)(iVar2 + 0x3a4) = &DAT_002bbd98;
  iVar1 = 0x15;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  FUN_001eadd0();
  FUN_001eac20(param_1);
  *(undefined4 *)(iVar2 + 0x3a8) = 0;
  *(undefined **)(iVar2 + 0x3b0) = &DAT_002ac220;
  *(undefined4 *)(iVar2 + 0x3ac) = 0;
  return param_1;
}

