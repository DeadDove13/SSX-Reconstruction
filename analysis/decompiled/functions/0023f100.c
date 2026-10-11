/* Ghidra pseudocode. PS2 address: 0023f100. Not validated source. */

int FUN_0023f100(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  int iVar7;
  byte bVar8;
  undefined1 auStack_330 [256];
  undefined1 auStack_230 [256];
  undefined1 auStack_130 [256];
  
  DAT_002c5bf4 = auStack_330;
  DAT_002c5bf8 = auStack_230;
  DAT_002c5bfc = auStack_130;
  if (param_1 == (byte *)0x0) {
    DAT_002c5c04 = param_2;
    DAT_002c5bf4 = auStack_330;
    DAT_002c5c00 = (byte *)0x0;
    return 0;
  }
  pbVar6 = param_1 + 2;
  if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 0x47fb) {
    pbVar6 = param_1 + 5;
  }
  iVar7 = 0;
  bVar1 = *pbVar6;
  bVar2 = pbVar6[1];
  DAT_002c5c00 = pbVar6 + 3;
  bVar3 = pbVar6[2];
  DAT_002c5c04 = param_2;
  do {
    puVar5 = DAT_002c5bf4 + iVar7;
    iVar7 = iVar7 + 1;
    *puVar5 = 0;
  } while (iVar7 < 0x100);
  iVar7 = 0;
  bVar8 = *DAT_002c5c00;
  DAT_002c5c00 = DAT_002c5c00 + 1;
  DAT_002c5bf4[bVar8] = 1;
  bVar8 = *DAT_002c5c00;
  DAT_002c5c00 = DAT_002c5c00 + 1;
  if (bVar8 != 0) {
    do {
      iVar7 = iVar7 + 1;
      bVar4 = *DAT_002c5c00;
      DAT_002c5bf8[bVar4] = DAT_002c5c00[1];
      DAT_002c5bfc[bVar4] = DAT_002c5c00[2];
      DAT_002c5c00 = DAT_002c5c00 + 3;
      DAT_002c5bf4[bVar4] = 0xff;
    } while (iVar7 < (int)(uint)bVar8);
  }
  do {
    while( true ) {
      bVar8 = *DAT_002c5c00;
      pbVar6 = DAT_002c5c00 + 1;
      if (DAT_002c5bf4[bVar8] != '\0') break;
LAB_0023f2d4:
      DAT_002c5c00 = pbVar6;
      *DAT_002c5c04 = bVar8;
      DAT_002c5c04 = DAT_002c5c04 + 1;
    }
    if (-1 < (char)DAT_002c5bf4[bVar8]) {
      bVar8 = *pbVar6;
      pbVar6 = DAT_002c5c00 + 2;
      if (bVar8 == 0) {
        DAT_002c5c00 = DAT_002c5c00 + 2;
        return ((uint)bVar1 * 0x100 + (uint)bVar2) * 0x100 + (uint)bVar3;
      }
      goto LAB_0023f2d4;
    }
    DAT_002c5c00 = pbVar6;
    FUN_0023f090(DAT_002c5bf8[bVar8]);
    FUN_0023f090(DAT_002c5bfc[bVar8]);
  } while( true );
}

