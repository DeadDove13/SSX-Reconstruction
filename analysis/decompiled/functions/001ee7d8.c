/* Ghidra pseudocode. PS2 address: 001ee7d8. Not validated source. */

void FUN_001ee7d8(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  puVar1 = DAT_00292808;
  *DAT_00292808 = 0x6000006d;
  DAT_00292808[2] = 0x1100000000000000;
  DAT_00292808[3] = 0x6c6b000700000000;
  iVar4 = 0;
  DAT_00292808[1] = 0;
  DAT_00292808[4] = DAT_00292780;
  DAT_00292808[5] = DAT_00292788;
  DAT_00292808[6] = DAT_00292790;
  DAT_00292808[7] = DAT_00292798;
  DAT_00292808[8] = DAT_002927a0;
  DAT_00292808[9] = DAT_002927a8;
  DAT_00292808[10] = DAT_002927c0;
  DAT_00292808[0xb] = DAT_002927c8;
  DAT_00292808[0xc] = DAT_002927d0;
  DAT_00292808[0xd] = DAT_002927d8;
  DAT_00292808[0xe] = DAT_002927e0;
  DAT_00292808[0xf] = DAT_002927e8;
  DAT_00292808[0x10] = DAT_002927f0;
  DAT_00292808[0x11] = DAT_002927f8;
  DAT_00292808 = DAT_00292808 + 0x12;
  do {
    puVar2 = DAT_00292808;
    puVar3 = (undefined8 *)(param_2 + iVar4 * 0x40);
    iVar4 = iVar4 + 1;
    *DAT_00292808 = *puVar3;
    puVar5 = DAT_00292808 + 1;
    DAT_00292808 = DAT_00292808 + 8;
    *puVar5 = puVar3[1];
    puVar2[2] = puVar3[2];
    puVar2[3] = puVar3[3];
    puVar2[4] = puVar3[4];
    puVar2[5] = puVar3[5];
    puVar2[6] = puVar3[6];
    puVar2[7] = puVar3[7];
  } while (iVar4 < 0x19);
  DAT_00292808 = puVar2 + 10;
  puVar2[9] = 0x1400030f00000000;
  puVar2[8] = 0;
  FUN_001cb238(0x2913b0,8,puVar1);
  return;
}

