/* Ghidra pseudocode. PS2 address: 00242fe8. Not validated source. */

int FUN_00242fe8(short param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if ((DAT_002c5b30 != (undefined4 *)0x0) && (iVar2 = 0, 0 < DAT_002c5b34)) {
    iVar3 = 0x10000;
    puVar1 = DAT_002c5b30;
    do {
      if (((short *)*puVar1 != (short *)0x0) && (*(short *)*puVar1 == param_1)) {
        return iVar2;
      }
      puVar1 = puVar1 + 1;
      iVar2 = iVar3 >> 0x10;
      iVar3 = iVar3 + 0x10000;
    } while (iVar2 < DAT_002c5b34);
  }
  return -1;
}

