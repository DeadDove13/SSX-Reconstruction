/* Ghidra pseudocode. PS2 address: 002430b0. Not validated source. */

void FUN_002430b0(int param_1,byte param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  
  iVar3 = 0;
  if (*(byte *)(param_1 + 6) != 0) {
    if ((*(byte *)(param_1 + 4) & 0xf0) != 0) {
      iVar3 = ((int)(*(byte *)(param_1 + 5) + 7) >> 3) + 1;
    }
    pbVar4 = (byte *)(param_1 + (uint)*(byte *)(param_1 + 5) * ((*(byte *)(param_1 + 4) & 0xf) + 2)
                                + 0xc + iVar3);
    bVar1 = *pbVar4;
    if (bVar1 < *(byte *)(param_1 + 6)) {
      pbVar4[bVar1 + 1] = param_2;
    }
    uVar2 = bVar1 + 1;
    bVar1 = (byte)uVar2;
    if ((uint)*(byte *)(param_1 + 6) <= (uVar2 & 0xff)) {
      bVar1 = 0;
    }
    *pbVar4 = bVar1;
  }
  return;
}

