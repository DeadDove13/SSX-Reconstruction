/* Ghidra pseudocode. PS2 address: 00251308. Not validated source. */

int FUN_00251308(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = DAT_002a5d20;
  if ((DAT_002a5d20 == 0) && (iVar1 = -100, DAT_002d3ea4 != 0)) {
    DAT_002d3f00 = param_1;
    DAT_002d3f10 = param_2;
    DAT_002d3f14 = param_3;
    iVar1 = FUN_00267268(0x2d3e80,4,1,0x2d3f00,0x30,0x2d5440,4,0);
    if (iVar1 == 0) {
      DAT_002a5d20 = 4;
    }
  }
  return iVar1;
}

