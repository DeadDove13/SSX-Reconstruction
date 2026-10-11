/* Ghidra pseudocode. PS2 address: 00241c18. Not validated source. */

void FUN_00241c18(int param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined2 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  
  iVar9 = 0;
  uVar10 = (uint)(*(byte *)(param_1 + 3) >> 2);
  if (uVar10 != 0) {
    iVar3 = 0;
    do {
      iVar9 = iVar9 + 1;
      puVar7 = (undefined2 *)(param_2 + iVar3);
      bVar1 = *(byte *)((int)puVar7 + 5);
      puVar8 = (undefined1 *)(param_2 + *(byte *)(puVar7 + 2) + 0x62);
      puVar6 = puVar8;
      for (uVar5 = (uint)(bVar1 >> 1); uVar5 != 0; uVar5 = uVar5 - 1) {
        iVar3 = FUN_00243638(bVar1,*puVar7);
        puVar4 = puVar8 + iVar3;
        uVar2 = *puVar6;
        *puVar6 = *puVar4;
        *puVar4 = uVar2;
        puVar6 = puVar6 + 1;
      }
      iVar3 = iVar9 * 8;
    } while (iVar9 < (int)uVar10);
  }
  return;
}

