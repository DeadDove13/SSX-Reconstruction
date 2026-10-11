/* Ghidra pseudocode. PS2 address: 00209318. Not validated source. */

undefined8 FUN_00209318(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_002067f0();
  DAT_002c5bcc = (int)param_1;
  *(undefined **)(DAT_002c5bcc + 0x32000) = &DAT_002bd308;
  puVar1 = (undefined4 *)(DAT_002c5bcc + 0x8b6c4);
  iVar2 = 1;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  return param_1;
}

