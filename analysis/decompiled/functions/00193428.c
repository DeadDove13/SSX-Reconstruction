/* Ghidra pseudocode. PS2 address: 00193428. Not validated source. */

void FUN_00193428(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  puVar4[0xc] = 600;
  puVar4[0xe58] = 0xffffffff;
  *puVar4 = 0;
  iVar3 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[7] = 0;
  puVar4[0xe57] = 0;
  puVar4[0xe59] = 0;
  iVar1 = 0;
  do {
    *(undefined4 *)((int)puVar4 + iVar1 + 0x393c) = 0;
    puVar2 = puVar4 + iVar3 * 0x10 + 0xfa9;
    *(undefined4 *)((int)puVar4 + iVar1 + 0x392c) = 0;
    iVar3 = iVar3 + 1;
    *(undefined4 *)((int)puVar4 + iVar1 + 0x394c) = 0;
    iVar1 = 0xf;
    do {
      *puVar2 = 0;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + -1;
    } while (-1 < iVar1);
    iVar1 = iVar3 * 4;
  } while (iVar3 < 4);
  FUN_001934e0(param_1);
  return;
}

