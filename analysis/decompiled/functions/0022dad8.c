/* Ghidra pseudocode. PS2 address: 0022dad8. Not validated source. */

byte FUN_0022dad8(int *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  
  iVar3 = *param_1;
  if (iVar3 < (int)(uint)DAT_0029a830._7_1_) {
    do {
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar4 = *(byte *)((int)&DAT_0029a838 + iVar3) & 0x1c;
      if ((((bVar1 & 0x1c) == 0) || (bVar4 = bVar1 & bVar4, bVar4 != 0)) &&
         ((bVar2 = *(byte *)((int)&DAT_0029a838 + iVar3) & 0xe0, (bVar1 & 0xe0) == 0 ||
          (bVar2 = *(byte *)(param_2 + 0x18) & bVar2, bVar2 != 0)))) {
        if (((*(char *)(param_2 + 3) == '\x01') || ((bVar2 & 0xc0) == 0)) && ((bVar4 | bVar2) != 0))
        {
          *param_1 = iVar3 + 1;
          return bVar4 | bVar2;
        }
      }
      iVar3 = iVar3 + 1;
      *param_1 = iVar3;
    } while (iVar3 < (int)(uint)DAT_0029a830._7_1_);
  }
  return 0;
}

