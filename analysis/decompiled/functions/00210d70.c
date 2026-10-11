/* Ghidra pseudocode. PS2 address: 00210d70. Not validated source. */

void FUN_00210d70(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  *puVar2 = 0;
  FUN_00210ed8(param_1,1);
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  puVar2[0x19] = 0;
  puVar2[5] = 0;
  DAT_002c5820 = 0;
  DAT_002c5824 = 0;
  DAT_002c5828 = 0;
  puVar2[0x16] = 0;
  puVar2[0x13] = 0;
  puVar2[0x1a] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xe] = 0;
  puVar2[7] = 0xffffffff;
  puVar2[6] = 0xffffffff;
  FUN_0025a60c((int)puVar2 + 0xae,0,8);
  FUN_0025a60c((int)puVar2 + 0xf6,0,0x20);
  FUN_0025a60c((int)puVar2 + 0xb6,0,0x40);
  FUN_0025a60c((int)puVar2 + 0x116,0,0x30);
  puVar2[0xf] = 0;
  puVar2[0x10] = 1;
  puVar2[0x11] = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  iVar1 = 1;
  do {
    iVar1 = iVar1 + -1;
    puVar2[puVar2[3] * 5 + 0x53] = 0;
    puVar2[puVar2[3] * 5 + 0x54] = 0;
    puVar2[puVar2[3] * 5 + 0x55] = 0;
    puVar2[puVar2[3] * 5 + 0x56] = 0;
  } while (-1 < iVar1);
  FUN_0023bbd0(puVar2 + 0x210,0,0x40);
  FUN_0023bbd0(puVar2 + 0x5c,0,0x6c0);
  FUN_0023bbd0(puVar2 + 0x220,0,0x400);
  return;
}

