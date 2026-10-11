/* Ghidra pseudocode. PS2 address: 00251f70. Not validated source. */

int FUN_00251f70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_002a5d20;
  if ((DAT_002a5d20 == 0) && (iVar1 = -100, DAT_002d3ea4 != 0)) {
    DAT_002d3f04 = param_1;
    DAT_002d3f08 = param_2;
    iVar1 = FUN_00267268(0x2d3e80,0x11,1,0x2d3f00,0x30,0x2d5440,4,0);
    if (iVar1 == 0) {
      DAT_002a5d20 = 0x11;
    }
  }
  return iVar1;
}

