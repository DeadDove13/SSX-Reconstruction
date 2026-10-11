/* Ghidra pseudocode. PS2 address: 00104c08. Not validated source. */

undefined8 FUN_00104c08(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &DAT_002a8670;
  FUN_0010dcc0(puVar4 + 4);
  *puVar4 = &DAT_002a85d0;
  FUN_0020aac0(puVar4 + 0xe8);
  FUN_00132d30(puVar4 + 0x18c);
  puVar4[0x1b4] = &DAT_002bbe18;
  iVar5 = 0x10;
  puVar4[0x1b3] = 0;
  puVar2 = puVar4 + 0x1b5;
  do {
    iVar5 = iVar5 + -1;
    puVar2[0x74] = &DAT_002bbd98;
    iVar1 = 0x15;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
    FUN_001eadd0(puVar2);
    puVar2[0xe9] = &DAT_002bbd98;
    iVar1 = 0x15;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
    FUN_001eadd0(puVar2 + 0x75);
    FUN_001eac20(puVar2);
    puVar2 = puVar2 + 0xea;
  } while (iVar5 != -1);
  iVar5 = 0x10;
  puVar2 = puVar4 + 0x113f;
  do {
    iVar5 = iVar5 + -1;
    iVar1 = 0x15;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
    puVar2[0x90] = 0x3f800000;
    puVar2[0x93] = 0;
    puVar2[0x8f] = 0;
    puVar2[0x92] = 0x3f800000;
    puVar2[0x91] = 0x3f800000;
    puVar2 = puVar2 + 0x94;
  } while (iVar5 != -1);
  puVar4[0x1b13] = 0;
  puVar3 = puVar4 + 0x113f;
  puVar4[0x1b14] = 0;
  iVar5 = 0;
  puVar4[0x1b37] = 0;
  puVar2 = puVar4 + 0x1b5;
  do {
    puVar3[0x93] = puVar2;
    iVar5 = iVar5 + 1;
    puVar2 = puVar2 + 0xea;
    puVar3 = puVar3 + 0x94;
  } while (iVar5 < 0x11);
  FUN_0023bbd0(puVar4 + 0x1b15,0xffffffffffffffff,0x44);
  FUN_0023bbd0(puVar4 + 0x1b26,0xffffffffffffffff,0x44);
  puVar4[0x1b3d] = 0;
  puVar4[0x1b3e] = 0;
  FUN_001eb048(puVar4 + 0x1b3f);
  iVar5 = 0x31;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  iVar5 = 3;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  FUN_0010e1d8(puVar4 + 0x20c0);
  FUN_001369e0(puVar4 + 0x20dc);
  puVar4[0x30] = 0;
  puVar4[0x31] = 0;
  puVar4[0x32] = 0;
  puVar4[0x33] = 0x3f800000;
  puVar4[0x34] = 0;
  puVar4[0x35] = 0;
  puVar4[0x36] = 0;
  puVar4[0x37] = 0;
  puVar4[0x20d8] = puVar4;
  puVar4[0x38] = 0;
  puVar4[0x56] = 0;
  FUN_0020ac20(puVar4 + 0xe8,puVar4 + 0x1d8c);
  puVar4[0xdc] = 0x3f800000;
  puVar4[9] = 0xffffffff;
  puVar4[10] = 0;
  puVar4[0xdd] = 0;
  return param_1;
}

