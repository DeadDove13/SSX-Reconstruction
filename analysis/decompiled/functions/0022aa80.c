/* Ghidra pseudocode. PS2 address: 0022aa80. Not validated source. */

void FUN_0022aa80(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if ((byte)DAT_0029a828 != 0) {
    iVar4 = (param_1 >> 8) * 2;
    iVar1 = iVar4;
    do {
      puVar2 = (undefined1 *)(param_2 + iVar3);
      iVar3 = iVar3 + 1;
      *puVar2 = (&DAT_0029aa48)[iVar1];
      iVar1 = iVar3 + iVar4;
    } while (iVar3 < (int)(uint)(byte)DAT_0029a828);
  }
  return;
}

