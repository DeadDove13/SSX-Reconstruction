/* Ghidra pseudocode. PS2 address: 00243898. Not validated source. */

undefined4 FUN_00243898(int param_1,ulong param_2,undefined8 param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  
  uVar12 = 0;
  bVar2 = false;
  FUN_00243870(param_3);
  iVar10 = 0;
  if ((long)param_2 < (long)(ulong)*(byte *)(param_1 + 5)) {
    bVar1 = *(byte *)(param_1 + 4);
    iVar3 = 0;
    uVar7 = bVar1 & 0xf;
    iVar9 = uVar7 + 2;
    piVar11 = (int *)param_3;
    piVar11[2] = uVar7;
    pbVar5 = (byte *)(param_1 + 0xc + (int)param_2 * iVar9);
    if ((bVar1 & 0xf) != 0) {
      do {
        iVar4 = iVar3 + 0xc;
        iVar6 = iVar3 + 2;
        iVar3 = iVar3 + 1;
        *(byte *)((int)piVar11 + iVar4) = pbVar5[iVar6];
      } while (iVar3 < (int)uVar7);
    }
    if ((*pbVar5 & 0x80) == 0) {
      bVar1 = *pbVar5;
    }
    else {
      param_2 = (ulong)pbVar5[1];
      pbVar5 = (byte *)((uint)pbVar5[1] * iVar9 + param_1 + 0xc);
      bVar1 = *pbVar5;
    }
    pbVar8 = pbVar5 + iVar9;
    iVar4 = (int)param_2 + 1;
    iVar6 = (*(byte *)(param_1 + 7) + 1) * 0x100;
    iVar3 = ((uint)bVar1 * 0x100 + (uint)pbVar5[1]) * iVar6;
    piVar11[1] = iVar3;
    do {
      if (iVar4 < (int)(uint)*(byte *)(param_1 + 5)) {
        if ((*pbVar8 & 0x80) == 0) {
          bVar2 = true;
          iVar10 = ((uint)*pbVar8 * 0x100 + (uint)pbVar8[1]) * iVar6;
        }
        else {
          pbVar8 = pbVar8 + iVar9;
          iVar4 = iVar4 + 1;
        }
      }
      else {
        bVar2 = true;
        iVar10 = (uint)*(ushort *)(param_1 + 8) * iVar6;
      }
    } while (!bVar2);
    uVar12 = 1;
    *piVar11 = iVar10 - iVar3;
  }
  return uVar12;
}

