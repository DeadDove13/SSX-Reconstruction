/* Ghidra pseudocode. PS2 address: 00252000. Not validated source. */

int FUN_00252000(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = DAT_002a5d20;
  if ((DAT_002a5d20 == 0) && (iVar1 = -100, DAT_002d3ea4 != 0)) {
    DAT_002d3f30 = param_1;
    DAT_002d3f34 = param_2;
    FUN_0025c0c8(0x2d3f44,param_3,0x3ff);
    DAT_002d4343 = 0;
    iVar1 = FUN_00267268(0x2d3e80,0x12,1,0x2d3f30,0x414,0x2d5440,4,0);
    if (iVar1 == 0) {
      DAT_002a5d20 = 0x12;
    }
  }
  return iVar1;
}

