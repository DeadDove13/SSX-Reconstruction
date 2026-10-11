/* Ghidra pseudocode. PS2 address: 001f74d0. Not validated source. */

undefined8 FUN_001f74d0(undefined8 param_1)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  FUN_002045f8();
  iVar4 = (int)param_1;
  *(undefined **)(iVar4 + 0x32000) = &DAT_002bce98;
  *(undefined4 *)(iVar4 + 0x8b6d0) = 0;
  *(undefined4 *)(iVar4 + 0x8b6f0) = 0;
  *(undefined4 *)(iVar4 + 0x8bb64) = 0;
  *(undefined4 *)(iVar4 + 0x8bb68) = 0;
  *(undefined4 *)(iVar4 + 0x8bb5c) = 0x50;
  lVar2 = FUN_0023a448(0x2bc950,0x140,0);
  if (lVar2 != 0) {
    FUN_0023bbd0(lVar2,0xffffffffdeadc0ed,0x140);
  }
  *(int *)(iVar4 + 0x8bb60) = (int)lVar2;
  *(undefined4 *)(iVar4 + 0x8bb74) = 0;
  *(undefined4 *)(iVar4 + 0x8bb6c) = 0;
  puVar1 = (undefined4 *)(iVar4 + 0xa4228);
  iVar3 = 8;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1 = puVar1 + 0x14;
  } while (iVar3 != -1);
  iVar3 = 8;
  puVar1 = (undefined4 *)(iVar4 + 0xa44f8);
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1 = puVar1 + 0x14;
  } while (iVar3 != -1);
  iVar3 = 8;
  puVar1 = (undefined4 *)(iVar4 + 0xa47c8);
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1 = puVar1 + 0x14;
  } while (iVar3 != -1);
  FUN_001fabc8(DAT_002c38ec,param_1);
  *(undefined4 *)(iVar4 + 0x8b6d4) = 0;
  FUN_00204108(param_1,0);
  return param_1;
}

