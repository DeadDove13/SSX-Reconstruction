/* Ghidra pseudocode. PS2 address: 001a0d20. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001a0f18) */

void FUN_001a0d20(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  byte *pbVar10;
  undefined8 uVar11;
  
  lVar8 = 1;
  do {
    lVar8 = (long)((int)lVar8 << 1);
  } while (lVar8 <= *(short *)(param_2 + 6));
  uVar11 = 0x10;
  lVar4 = (long)*(short *)(param_2 + 4);
  if (*(short *)(param_2 + 4) < lVar8) {
    lVar4 = lVar8;
  }
  if (*param_1 != 0) {
    uVar11 = 0;
  }
  iVar9 = (int)lVar4;
  param_1[10] = iVar9;
  param_1[0xb] = iVar9;
  iVar2 = FUN_0023a448(0x2b56a0,iVar9 * iVar9,uVar11);
  if (iVar2 != 0) {
    FUN_0023bbd0(iVar2,0xffffffffdeadc0ed,iVar9 * iVar9);
  }
  uVar11 = 0x10;
  if (*param_1 != 0) {
    uVar11 = 0;
  }
  puVar3 = (undefined1 *)FUN_0023a448(0x2b56b0,0x400,uVar11);
  if (puVar3 != (undefined1 *)0x0) {
    FUN_0023bbd0(puVar3,0xffffffffdeadc0ed,0x400);
  }
  FUN_0023bbd0(iVar2,0,param_1[10] * param_1[0xb]);
  FUN_0023bbd0(iVar2,0,0x400);
  pbVar10 = (byte *)(param_2 + 0x10);
  lVar8 = 0;
  iVar9 = iVar2;
  if (0 < *(short *)(param_2 + 6)) {
    do {
      lVar8 = (long)((int)lVar8 + 1);
      iVar7 = 0;
      if (0 < (int)((int)(short)*(ushort *)(param_2 + 4) + (uint)(*(ushort *)(param_2 + 4) >> 0xf))
              >> 1) {
        pbVar6 = (byte *)(iVar9 + 1);
        do {
          iVar7 = iVar7 + 1;
          iVar9 = iVar9 + 2;
          pbVar6[-1] = *pbVar10 & 0xf;
          bVar1 = *pbVar10;
          pbVar10 = pbVar10 + 1;
          *pbVar6 = bVar1 >> 4;
          pbVar6 = pbVar6 + 2;
        } while (iVar7 < (int)((int)(short)*(ushort *)(param_2 + 4) +
                              (uint)(*(ushort *)(param_2 + 4) >> 0xf)) >> 1);
      }
      iVar9 = iVar9 + (param_1[10] - (int)*(short *)(param_2 + 4));
    } while (lVar8 < *(short *)(param_2 + 6));
  }
  iVar9 = 0;
  puVar5 = puVar3;
  do {
    iVar7 = iVar9 << 7;
    puVar5[1] = 0x80;
    puVar5[2] = 0x80;
    *puVar5 = 0x80;
    iVar9 = iVar9 + 1;
    puVar5[3] = (char)(iVar7 / 0xf);
    puVar5 = puVar5 + 4;
  } while (iVar9 < 0x10);
  iVar9 = FUN_001be688(0x295e90,iVar2,param_1[10],param_1[0xb],0,4,0x2c50c0,puVar3);
  param_1[0xc] = iVar9;
  if (iVar2 != 0) {
    FUN_00103710(iVar2);
  }
  if (puVar3 != (undefined1 *)0x0) {
    FUN_00103710(puVar3);
    return;
  }
  return;
}

