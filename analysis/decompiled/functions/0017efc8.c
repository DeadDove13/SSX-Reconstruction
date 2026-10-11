/* Ghidra pseudocode. PS2 address: 0017efc8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0017f088) */

void FUN_0017efc8(int param_1)

{
  byte bVar1;
  uint *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  
  uVar8 = 0;
  uVar4 = 1;
  do {
    iVar6 = (uVar4 ^ 1) * 4;
    uVar5 = uVar8 - 0x1e;
    if ((uVar4 ^ 1) == 0) {
      uVar5 = uVar8;
    }
    if (((*(int *)(*(int *)(param_1 + 0xc80) + 0xc + iVar6) >> (uVar5 & 0x1f) & 1U) == 0) &&
       ((*(int *)(*(int *)(param_1 + 0xc80) + 4 + iVar6) >> (uVar5 & 0x1f) & 1U) == 0)) {
      puVar2 = (uint *)FUN_0023c128(*(undefined4 *)(param_1 + 0xc84),uVar8);
      if ((*puVar2 & 0xffffff00) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = (int)puVar2 + ((int)*puVar2 >> 8);
      }
      pbVar3 = (byte *)(iVar6 + 0x10);
      lVar7 = 0;
      if (0 < *(short *)(iVar6 + 4)) {
        do {
          lVar7 = (long)((int)lVar7 + 1);
          bVar1 = (byte)(((uint)*pbVar3 + (uint)pbVar3[1] + (uint)pbVar3[2]) / 3);
          pbVar3[2] = bVar1;
          *pbVar3 = bVar1;
          pbVar3[1] = bVar1;
          pbVar3 = pbVar3 + 4;
        } while (lVar7 < *(short *)(iVar6 + 4));
      }
    }
    uVar8 = uVar8 + 1;
    uVar4 = (uint)((int)uVar8 < 0x1f);
  } while ((int)uVar8 < 0x32);
  return;
}

