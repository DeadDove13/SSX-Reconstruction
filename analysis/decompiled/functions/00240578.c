/* Ghidra pseudocode. PS2 address: 00240578. Not validated source. */

void FUN_00240578(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = &DAT_002a4b60;
  iVar3 = 3;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1[4] = 0xffffffff;
    puVar1[8] = 0xffffffff;
    puVar1 = puVar1 + 1;
  } while (-1 < iVar3);
  iVar4 = 0;
  DAT_002a4b90 = 0;
  iVar3 = 0;
  do {
    iVar4 = iVar4 + 1;
    (&DAT_002a4b9a)[iVar3] = 0;
    *(undefined4 *)((int)&DAT_002a4b94 + iVar3) = 0;
    *(undefined4 *)(&DAT_002a4ba0 + iVar3) = 0;
    puVar1 = (undefined4 *)(&DAT_002a4bd0 + iVar3);
    (&DAT_002a4b9b)[iVar3] = 0xff;
    iVar2 = 0xb;
    *(undefined2 *)((int)&DAT_002a4b98 + iVar3) = 0;
    do {
      *puVar1 = 0;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + -1;
    } while (-1 < iVar2);
    iVar3 = iVar4 * 0x40;
  } while (iVar4 < 0x10);
  DAT_002c5b4c = 0;
  DAT_002c5b50 = 0;
  return;
}

