/* Ghidra pseudocode. PS2 address: 001035b8. Not validated source. */

undefined8 FUN_001035b8(undefined8 param_1)

{
  int iVar1;
  
  FUN_00185ef0();
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 8) = &DAT_002a6e80;
  *(undefined **)(iVar1 + 0x2c) = &DAT_002a6fa8;
  *(undefined **)(iVar1 + 0x38) = &DAT_002a6f68;
  *(undefined **)(iVar1 + 0x3c) = &DAT_002a6f88;
  *(undefined **)(iVar1 + 0x40) = &DAT_002a6f48;
  *(undefined **)(iVar1 + 0x44) = &DAT_002a6f28;
  *(undefined **)(iVar1 + 0x50) = &DAT_002aa2e8;
  *(undefined **)(iVar1 + 0x54) = &DAT_002aa2c8;
  *(undefined **)(iVar1 + 0x58) = &DAT_002aa2a8;
  *(undefined **)(iVar1 + 0x5c) = &DAT_002aa288;
  *(undefined **)(iVar1 + 0x60) = &DAT_002a6fc8;
  FUN_00219328(iVar1 + 0x100);
  FUN_00219328(iVar1 + 0x114);
  FUN_001e94d0(iVar1 + 0x128);
  return param_1;
}

