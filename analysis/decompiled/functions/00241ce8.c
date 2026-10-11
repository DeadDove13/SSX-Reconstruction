/* Ghidra pseudocode. PS2 address: 00241ce8. Not validated source. */

undefined4 FUN_00241ce8(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  bVar2 = false;
  iVar4 = (*(byte *)(param_1 + 3) >> 2) - 1;
  param_2 = param_2 + iVar4 * 8;
  uVar3 = (uint)*(byte *)(param_2 + 4) + (uint)*(byte *)(param_2 + 5);
  cVar1 = *(char *)(param_2 + 6);
  while( true ) {
    *(byte *)(param_2 + 6) = cVar1 + 1U;
    if ((byte)(cVar1 + 1U) < uVar3) {
      bVar2 = true;
    }
    else {
      iVar4 = iVar4 + -1;
      *(undefined1 *)(param_2 + 6) = *(undefined1 *)(param_2 + 4);
      if (iVar4 < 0) {
        bVar2 = true;
        uVar5 = 1;
      }
      uVar3 = (uint)*(byte *)(param_2 + -4) + (uint)*(byte *)(param_2 + -3);
      param_2 = param_2 + -8;
    }
    if (bVar2) break;
    cVar1 = *(char *)(param_2 + 6);
  }
  return uVar5;
}

