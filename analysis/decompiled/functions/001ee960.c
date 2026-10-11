/* Ghidra pseudocode. PS2 address: 001ee960. Not validated source. */

void FUN_001ee960(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  puVar2 = DAT_00292808;
  FUN_001c1a88(param_3,0x292808);
  *DAT_00292808 = 0x60000066;
  iVar4 = 0;
  puVar3 = DAT_00292808 + 1;
  DAT_00292808[2] = 0x1100000000000000;
  puVar1 = DAT_00292808 + 3;
  DAT_00292808 = DAT_00292808 + 4;
  *puVar1 = 0x6c64000e00000000;
  *puVar3 = 0;
  do {
    puVar1 = DAT_00292808;
    puVar3 = (undefined8 *)(param_2 + iVar4 * 0x40);
    iVar4 = iVar4 + 1;
    *DAT_00292808 = *puVar3;
    puVar5 = DAT_00292808 + 1;
    DAT_00292808 = DAT_00292808 + 8;
    *puVar5 = puVar3[1];
    puVar1[2] = puVar3[2];
    puVar1[3] = puVar3[3];
    puVar1[4] = puVar3[4];
    puVar1[5] = puVar3[5];
    puVar1[6] = puVar3[6];
    puVar1[7] = puVar3[7];
  } while (iVar4 < 0x19);
  DAT_00292808 = puVar1 + 10;
  puVar1[9] = 0x1400031700000000;
  puVar1[8] = 0;
  FUN_001cb238(0x2913b0,9,puVar2);
  return;
}

