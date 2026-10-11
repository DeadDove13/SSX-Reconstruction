/* Ghidra pseudocode. PS2 address: 00251780. Not validated source. */

int FUN_00251780(undefined4 param_1,undefined4 param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  
  iVar1 = DAT_002a5d20;
  if (DAT_002a5d20 == 0) {
    if (DAT_002d3ea4 == 0) {
      iVar1 = -100;
    }
    else {
      DAT_002d3f1c = &DAT_002d4380;
      DAT_002d3f14 = (uint)(param_3 != 0);
      DAT_002d3f10 = (uint)(param_4 != 0);
      DAT_002d3f0c = (uint)(param_5 != 0);
      DAT_002d3ea8 = (undefined4)param_3;
      DAT_002d3eac = (undefined4)param_4;
      DAT_002d3eb0 = (undefined4)param_5;
      DAT_002d3f04 = param_1;
      DAT_002d3f08 = param_2;
      FUN_002669d0(0x2d4380,0xc0);
      iVar1 = FUN_00267268(0x2d3e80,1,1,0x2d3f00,0x30,0x2d5440,4,0x251728);
      if (iVar1 == 0) {
        DAT_002a5d20 = 1;
      }
    }
  }
  return iVar1;
}

