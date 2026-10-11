/* Ghidra pseudocode. PS2 address: 001f86c8. Not validated source. */

void FUN_001f86c8(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x8b6e8) = *(undefined4 *)(iVar1 + 0x8b6dc);
  *(undefined4 *)(iVar1 + 0xa4224) = 0xffffffff;
  FUN_001f8b30(param_1,1);
  DAT_002c552c = 0x3f800000;
  DAT_002c5528 = 0x3f800000;
  FUN_001f4a50(param_1,0,0x2bc988,0x10);
  FUN_001f4a50(param_1,5,0x2bc9a0,0x10);
  FUN_002093a0(param_1);
  FUN_00209530(param_1,0,0,0x2c5538,iVar1 + 0x8b6e0,0xffffffffffffffff);
  FUN_002096d0(param_1,0,0);
  FUN_00206b68(param_1,0x2c5540,6,iVar1 + 0x8b6dc);
  FUN_002070b0(param_1,0);
  FUN_001fd400(param_1);
  return;
}

