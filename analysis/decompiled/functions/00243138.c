/* Ghidra pseudocode. PS2 address: 00243138. Not validated source. */

int FUN_00243138(int param_1,ulong param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)*(byte *)(param_1 + 6);
  if (uVar3 != 0) {
    iVar4 = 0;
    if ((*(byte *)(param_1 + 4) & 0xf0) != 0) {
      iVar4 = ((int)(*(byte *)(param_1 + 5) + 7) >> 3) + 1;
    }
    pbVar1 = (byte *)(param_1 + (uint)*(byte *)(param_1 + 5) * ((*(byte *)(param_1 + 4) & 0xf) + 2)
                                + 0xc + iVar4);
    iVar4 = 0;
    if (uVar3 != 0) {
      uVar2 = (uint)*pbVar1;
      do {
        uVar2 = uVar2 - 1;
        if ((int)uVar2 < 0) {
          uVar2 = *(byte *)(param_1 + 6) - 1;
        }
        if (pbVar1[uVar2 + 1] == param_2) {
          return iVar4 + 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar3);
    }
  }
  return 0;
}

