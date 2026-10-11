/* Ghidra pseudocode. PS2 address: 00251d18. Not validated source. */

int FUN_00251d18(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                uint param_5)

{
  int iVar1;
  
  iVar1 = DAT_002a5d20;
  if ((DAT_002a5d20 == 0) && (iVar1 = -100, DAT_002d3ea4 != 0)) {
    DAT_002d3f38 = param_5 & 7;
    DAT_002d3ec0 = *param_4;
    DAT_002d3ec8 = param_4[1];
    DAT_002d3ed0 = param_4[2];
    DAT_002d3ed8 = param_4[3];
    DAT_002d3ee0 = param_4[4];
    DAT_002d3ee8 = param_4[5];
    DAT_002d3ef0 = param_4[6];
    DAT_002d3ef8 = param_4[7];
    DAT_002d3f40 = &DAT_002d3ec0;
    DAT_002d3f30 = param_1;
    DAT_002d3f34 = param_2;
    FUN_0025c0c8(0x2d3f44,param_3,0x3ff);
    DAT_002d4343 = 0;
    FlushCache(0);
    iVar1 = FUN_00267268(0x2d3e80,0xe,1,0x2d3f30,0x414,0x2d5440,4,0);
    if (iVar1 == 0) {
      DAT_002a5d20 = 0xe;
    }
  }
  return iVar1;
}

