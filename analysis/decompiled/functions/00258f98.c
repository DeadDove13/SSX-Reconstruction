/* Ghidra pseudocode. PS2 address: 00258f98. Not validated source. */

int FUN_00258f98(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar5 = DAT_002d54d0;
  while( true ) {
    while( true ) {
      if (puVar5 == (uint *)0x0) {
        return 0;
      }
      uVar3 = *puVar5;
      if (uVar3 == 0) {
        FUN_00258e58(puVar5);
        uVar3 = *puVar5;
      }
      if (uVar3 <= param_1) break;
      puVar5 = (uint *)puVar5[5];
    }
    if (param_1 < puVar5[1]) break;
    puVar5 = (uint *)puVar5[5];
  }
  if (puVar5 == (uint *)0x0) {
    return 0;
  }
  uVar3 = puVar5[4];
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar2 = uVar3;
    do {
      uVar2 = uVar2 >> 1;
      iVar1 = *(int *)(uVar2 * 4 + puVar5[3]);
      if ((*(uint *)(iVar1 + 8) <= param_1) &&
         (uVar4 = uVar2 + 1, uVar2 = uVar3, param_1 < *(uint *)(iVar1 + 8) + *(int *)(iVar1 + 0xc)))
      {
        return iVar1;
      }
      uVar3 = uVar2;
      uVar2 = uVar4 + uVar3;
    } while (uVar4 < uVar3);
  }
  return 0;
}

