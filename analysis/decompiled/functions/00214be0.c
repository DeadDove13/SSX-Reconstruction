/* Ghidra pseudocode. PS2 address: 00214be0. Not validated source. */

void FUN_00214be0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_1 + 0x1134);
  uVar2 = 0;
  param_1 = param_1 + 0xd44;
  puVar1 = puVar4;
  do {
    puVar1[-0xfc] = 0;
    uVar2 = uVar2 + 1;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (uVar2 < 4);
  if (uVar2 < 0xc) {
    puVar3 = (undefined4 *)(uVar2 * 4 + param_1);
    puVar1 = puVar4 + uVar2;
    do {
      *puVar3 = 1;
      uVar2 = uVar2 + 1;
      *puVar1 = 4;
      puVar3 = puVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 < 0xc);
  }
  if (uVar2 < 0x1c) {
    puVar3 = (undefined4 *)(uVar2 * 4 + param_1);
    puVar1 = puVar4 + uVar2;
    do {
      *puVar3 = 2;
      uVar2 = uVar2 + 1;
      *puVar1 = 0xc;
      puVar3 = puVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 < 0x1c);
  }
  if (uVar2 < 0x3c) {
    puVar3 = (undefined4 *)(uVar2 * 4 + param_1);
    puVar1 = puVar4 + uVar2;
    do {
      *puVar3 = 3;
      uVar2 = uVar2 + 1;
      *puVar1 = 0x1c;
      puVar3 = puVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 < 0x3c);
  }
  if (uVar2 < 0x7c) {
    puVar3 = (undefined4 *)(uVar2 * 4 + param_1);
    puVar1 = puVar4 + uVar2;
    do {
      *puVar3 = 4;
      uVar2 = uVar2 + 1;
      *puVar1 = 0x3c;
      puVar3 = puVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 < 0x7c);
  }
  if (uVar2 < 0xfc) {
    puVar1 = (undefined4 *)(uVar2 * 4 + param_1);
    puVar4 = puVar4 + uVar2;
    do {
      *puVar1 = 5;
      uVar2 = uVar2 + 1;
      *puVar4 = 0x7c;
      puVar1 = puVar1 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar2 < 0xfc);
  }
  return;
}

