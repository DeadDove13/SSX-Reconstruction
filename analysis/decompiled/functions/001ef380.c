/* Ghidra pseudocode. PS2 address: 001ef380. Not validated source. */

undefined8 FUN_001ef380(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = (undefined4 *)param_1;
  iVar5 = 0x10;
  puVar4[1] = &DAT_002bbe18;
  *puVar4 = 0;
  puVar2 = puVar4 + 2;
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
  puVar2 = puVar4 + 0xf8c;
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
  puVar4[0x1960] = 0;
  iVar5 = 0;
  puVar4[0x1961] = 0;
  puVar3 = puVar4 + 2;
  puVar4[0x1984] = 0;
  puVar2 = puVar4 + 0xf8c;
  do {
    puVar2[0x93] = puVar3;
    iVar5 = iVar5 + 1;
    puVar3 = puVar3 + 0xea;
    puVar2 = puVar2 + 0x94;
  } while (iVar5 < 0x11);
  FUN_0023bbd0(puVar4 + 0x1962,0xffffffffffffffff,0x44);
  FUN_0023bbd0(puVar4 + 0x1973,0xffffffffffffffff,0x44);
  return param_1;
}

