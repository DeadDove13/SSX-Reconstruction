/* Ghidra pseudocode. PS2 address: 00251278. Not validated source. */

int FUN_00251278(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_002a5d20;
  if (DAT_002a5d20 == 0) {
    if (DAT_002d3ea4 == 0) {
      iVar1 = -100;
    }
    else {
      DAT_002d3f00 = param_1;
      iVar1 = FUN_00267268(0x2d3e80,3,1,0x2d3f00,0x30,0x2d5440,4,0);
      if (iVar1 == 0) {
        DAT_002a5d20 = 3;
      }
    }
  }
  return iVar1;
}

