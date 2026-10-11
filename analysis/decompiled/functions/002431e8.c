/* Ghidra pseudocode. PS2 address: 002431e8. Not validated source. */

void FUN_002431e8(int param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  
  bVar2 = *(byte *)(param_1 + 5);
  pbVar8 = (byte *)(param_1 + (uint)bVar2 * ((*(byte *)(param_1 + 4) & 0xf) + 2) + 0xc);
  bVar3 = *pbVar8;
  if (bVar3 != 0) {
    if (bVar3 == 0) {
      trap(7);
    }
    iVar5 = DAT_002c5b3c % (int)(uint)bVar3;
    iVar1 = (int)(iVar5 * (uint)bVar2) / (int)(uint)bVar3;
    iVar7 = (int)(iVar5 * (uint)bVar2 + (uint)bVar2) / (int)(uint)bVar3 - iVar1;
    iVar5 = iVar1 + 7;
    if (-1 < iVar1) {
      iVar5 = iVar1;
    }
    uVar6 = iVar1 + (iVar5 >> 3) * -8;
    if (0 < iVar7) {
      pbVar8 = pbVar8 + (iVar5 >> 3) + 1;
      bVar2 = *pbVar8;
      while( true ) {
        uVar4 = uVar6 & 0x1f;
        uVar6 = uVar6 + 1;
        *pbVar8 = bVar2 | (byte)(1 << uVar4);
        if (uVar6 == 8) {
          uVar6 = 0;
          pbVar8 = pbVar8 + 1;
        }
        iVar7 = iVar7 + -1;
        if (iVar7 == 0) break;
        bVar2 = *pbVar8;
      }
    }
  }
  return;
}

