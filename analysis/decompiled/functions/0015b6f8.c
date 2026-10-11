/* Ghidra pseudocode. PS2 address: 0015b6f8. Not validated source. */

undefined8 FUN_0015b6f8(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  *(undefined **)(iVar4 + 0xf9c) = &DAT_002afab8;
  iVar3 = 7;
  *(undefined **)(iVar4 + 0x1d8) = &DAT_002afae0;
  *(undefined **)(iVar4 + 0x204) = &DAT_002afad0;
  puVar2 = (undefined4 *)(iVar4 + 0x210);
  do {
    *puVar2 = &DAT_002afaf0;
    uVar1 = DAT_002c24f4;
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 0x10;
  } while (iVar3 != -1);
  *(undefined4 *)(iVar4 + 0x428) = 0;
  *(undefined4 *)(iVar4 + 0x42c) = 0;
  *(undefined4 *)(iVar4 + 0x430) = 0;
  puVar2 = (undefined4 *)(iVar4 + 0x4cc);
  *(undefined4 *)(iVar4 + 0x434) = uVar1;
  iVar3 = 0xf;
  *(undefined4 *)(iVar4 + 0x438) = 0x42c80000;
  *(undefined4 *)(iVar4 + 0x43c) = 0;
  *(undefined4 *)(iVar4 + 0x41c) = 0;
  *(undefined4 *)(iVar4 + 0x420) = 0;
  *(undefined4 *)(iVar4 + 0x44c) = 0;
  *(undefined4 *)(iVar4 + 0x470) = 0;
  *(undefined4 *)(iVar4 + 0x424) = 0;
  *(undefined4 *)(iVar4 + 0x480) = 0;
  *(undefined4 *)(iVar4 + 0x484) = 0;
  *(undefined4 *)(iVar4 + 0x488) = 0;
  *(undefined4 *)(iVar4 + 0x48c) = uVar1;
  *(undefined4 *)(iVar4 + 0x490) = 0x42c80000;
  *(undefined4 *)(iVar4 + 0x494) = 0;
  *(undefined4 *)(iVar4 + 0x474) = 0;
  *(undefined4 *)(iVar4 + 0x478) = 0;
  *(undefined4 *)(iVar4 + 0x4a4) = 0;
  *(undefined4 *)(iVar4 + 0x4c8) = 0;
  *(undefined4 *)(iVar4 + 0x47c) = 0;
  do {
    puVar2[3] = 0;
    iVar3 = iVar3 + -1;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = uVar1;
    puVar2[7] = 0x42c80000;
    puVar2[8] = 0;
    puVar2[0xc] = 0;
    puVar2[0x15] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2 = puVar2 + 0x16;
  } while (iVar3 != -1);
  puVar2 = (undefined4 *)(iVar4 + 0xa54);
  iVar3 = 0xd;
  do {
    puVar2[-2] = 0;
    iVar3 = iVar3 + -1;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2 = puVar2 + 8;
  } while (iVar3 != -1);
  puVar2 = (undefined4 *)(iVar4 + 0xc14);
  iVar3 = 0xd;
  do {
    puVar2[-2] = 0;
    iVar3 = iVar3 + -1;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2 = puVar2 + 8;
  } while (iVar3 != -1);
  puVar2 = (undefined4 *)(iVar4 + 0xdd4);
  iVar3 = 0xd;
  do {
    puVar2[-2] = 0;
    iVar3 = iVar3 + -1;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2 = puVar2 + 8;
  } while (iVar3 != -1);
  DAT_002c46b4 = 0;
  DAT_002c46b8 = 0;
  DAT_002c46bc = 0;
  DAT_002c46c0 = 0;
  FUN_0015b980(param_1);
  return param_1;
}

