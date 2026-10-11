/* Ghidra pseudocode. PS2 address: 00251428. Not validated source. */

int FUN_00251428(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = DAT_002a5d20;
  if ((DAT_002a5d20 == 0) && (iVar1 = -100, DAT_002d3ea4 != 0)) {
    DAT_002d3f18 = (undefined4)param_2;
    DAT_002d3f0c = (undefined4)param_3;
    DAT_002d3f1c = &DAT_002d4380;
    DAT_002d3f00 = param_1;
    FUN_002669d0(param_2,param_3);
    FUN_002669d0(0x2d4380,0xc0);
    iVar1 = FUN_00267268(0x2d3e80,5,1,0x2d3f00,0x30,0x2d5440,4,0x251398);
    if (iVar1 == 0) {
      DAT_002a5d20 = 5;
    }
  }
  return iVar1;
}

