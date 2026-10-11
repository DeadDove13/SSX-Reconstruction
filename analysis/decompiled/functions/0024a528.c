/* Ghidra pseudocode. PS2 address: 0024a528. Not validated source. */

void FUN_0024a528(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 + 0x22;
  if (-1 < param_3 + 0x13) {
    iVar1 = param_3 + 0x13;
  }
  DAT_002a53c0 = (iVar1 >> 4) << 4;
  DAT_002a52a8 = (undefined4)param_2;
  FUN_0024aff0(param_2,DAT_002a53c0);
  return;
}

