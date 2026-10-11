/* Ghidra pseudocode. PS2 address: 00251500. Not validated source. */

int FUN_00251500(undefined4 param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  
  iVar2 = DAT_002a5d20;
  if ((DAT_002a5d20 == 0) && (iVar2 = -100, DAT_002d3ea4 != 0)) {
    if (param_3 < 0x11) {
      DAT_002d3f18 = (undefined1 *)0x0;
      DAT_002d3f0c = 0;
      DAT_002d3f14 = (uint)param_3;
    }
    else {
      DAT_002d3f14 = ((uint)(param_2 + -1) & 0xfffffff0) - (int)(param_2 + -0x10);
      DAT_002d3f0c = (uint)param_3 - DAT_002d3f14;
      DAT_002d3f18 = param_2 + DAT_002d3f14;
    }
    uVar4 = 0;
    puVar1 = param_2;
    DAT_002d3f00 = param_1;
    if (DAT_002d3f14 != 0) {
      do {
        puVar3 = &DAT_002d3f20 + uVar4;
        uVar4 = uVar4 + 1;
        *puVar3 = *puVar1;
        puVar1 = param_2 + uVar4;
      } while (uVar4 < DAT_002d3f14);
    }
    FlushCache(0);
    iVar2 = FUN_00267268(0x2d3e80,6,1,0x2d3f00,0x30,0x2d5440,4,0);
    if (iVar2 == 0) {
      DAT_002a5d20 = 6;
    }
  }
  return iVar2;
}

