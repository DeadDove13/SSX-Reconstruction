/* Ghidra pseudocode. PS2 address: 0015bd30. Not validated source. */

void FUN_0015bd30(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar3 = 0xd;
  puVar2 = param_1 + 0x298;
  puVar1 = param_1 + 0x293;
  do {
    iVar3 = iVar3 + -1;
    puVar1[0x72] = puVar1[2];
    puVar1[0x71] = puVar1[1];
    puVar1[0x73] = puVar1[3];
    puVar1[0x74] = puVar1[4];
    uVar5 = *puVar2;
    uVar4 = puVar2[1];
    uVar6 = puVar2[2];
    puVar1[0x70] = *puVar1;
    puVar2[0x70] = uVar5;
    puVar1 = puVar1 + 8;
    puVar2[0x71] = uVar4;
    puVar2[0x72] = uVar6;
    puVar2 = puVar2 + 8;
  } while (-1 < iVar3);
  param_1[0x3e3] = 1;
  puVar1 = param_1 + 0x293;
  for (iVar3 = 0; iVar3 < *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c); iVar3 = iVar3 + 1) {
    FUN_0015aa48(puVar1,*param_1);
    puVar1 = puVar1 + 8;
  }
  iVar3 = param_1[0x293];
  if (iVar3 != 0) {
    param_1[0x2d3] = iVar3;
    uVar4 = *(undefined4 *)(iVar3 + 0x8314);
    uVar5 = *(undefined4 *)(iVar3 + 0x8318);
    param_1[0x2d8] = *(undefined4 *)(iVar3 + 0x8310);
    param_1[0x2d9] = uVar4;
    param_1[0x2da] = uVar5;
  }
  iVar3 = 0xd;
  if ((int)param_1[2] < 2) {
    puVar1 = param_1 + 0x293;
    param_1 = param_1 + 0x298;
    do {
      iVar3 = iVar3 + -1;
      puVar1[0xe2] = puVar1[2];
      puVar1[0xe1] = puVar1[1];
      puVar1[0xe3] = puVar1[3];
      puVar1[0xe4] = puVar1[4];
      uVar5 = *param_1;
      uVar4 = param_1[1];
      uVar6 = param_1[2];
      puVar1[0xe0] = *puVar1;
      param_1[0xe0] = uVar5;
      puVar1 = puVar1 + 8;
      param_1[0xe1] = uVar4;
      param_1[0xe2] = uVar6;
      param_1 = param_1 + 8;
    } while (-1 < iVar3);
  }
  return;
}

