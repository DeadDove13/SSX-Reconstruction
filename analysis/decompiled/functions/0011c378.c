/* Ghidra pseudocode. PS2 address: 0011c378. Not validated source. */

void FUN_0011c378(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  puVar5 = (undefined4 *)(param_1 + 200);
  puVar4 = (undefined4 *)(param_1 + 0x40);
  iVar6 = 7;
  do {
    iVar6 = iVar6 + -1;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0x3f800000;
    *puVar5 = 0x3f800000;
    uVar3 = DAT_002c18a0;
    uVar2 = DAT_002c189c;
    uVar1 = DAT_002c1898;
    puVar4 = puVar4 + 4;
    puVar5 = puVar5 + 0xc;
  } while (-1 < iVar6);
  *(undefined4 *)(param_1 + 0x240) = DAT_002c1894;
  *(undefined4 *)(param_1 + 0x244) = uVar1;
  *(undefined4 *)(param_1 + 0x248) = uVar2;
  *(undefined4 *)(param_1 + 0x24c) = 0x424a0000;
  *(undefined4 *)(param_1 + 0x250) = uVar3;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  return;
}

