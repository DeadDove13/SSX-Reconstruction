/* Ghidra pseudocode. PS2 address: 001d3aa0. Not validated source. */

int FUN_001d3aa0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  undefined4 uVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  
  iVar10 = (int)param_1;
  piVar12 = (int *)0x0;
  *(undefined4 *)(iVar10 + 0xd088) = 0xffffffff;
  *(undefined4 *)(iVar10 + 0xd084) = 0xffffffff;
  uVar6 = DAT_002913b0;
  piVar9 = (int *)param_2;
  iVar1 = *piVar9;
  FUN_001d3018(param_1,iVar10 + 0xd028);
  FUN_001d3ca8(param_1,param_2);
  FUN_001d30a0(param_1);
  iVar11 = 0;
  if (0 < *(int *)(iVar10 + 0x1024)) {
    iVar8 = 0;
    do {
      iVar8 = *(int *)(iVar10 + *(short *)(iVar10 + iVar8 + 0x502a) * 4 + 0x1028);
      iVar11 = iVar11 + 1;
      while (iVar8 != 0) {
        piVar13 = *(int **)(iVar8 + 0x4c);
        if (piVar12 == piVar13) {
          uVar2 = *(undefined4 *)(iVar8 + 0x44);
          piVar13 = piVar12;
        }
        else {
          if (-1 < *piVar13) {
            FUN_001d25f8(uVar6,*piVar13,1,param_2);
          }
          if (-1 < piVar13[1]) {
            FUN_001d25f8(uVar6,piVar13[1],2,param_2);
          }
          uVar2 = *(undefined4 *)(iVar8 + 0x44);
        }
        FUN_001d3dd8(param_1,iVar8,uVar2,*(undefined4 *)(iVar8 + 0x48),param_2);
        iVar3 = *(int *)(iVar8 + 0x54);
        puVar4 = *(undefined8 **)(iVar8 + 0x58);
        puVar5 = (ulong *)*piVar9;
        *puVar4 = 0x60000000;
        puVar4[1] = 0;
        *puVar5 = (long)iVar3 << 0x20 | 0x50000000;
        iVar8 = *(int *)(iVar8 + 0x60);
        puVar5[1] = 0;
        *piVar9 = (int)(puVar5 + 2);
        piVar12 = piVar13;
      }
      iVar8 = iVar11 * 4;
    } while (iVar11 < *(int *)(iVar10 + 0x1024));
  }
  lVar7 = FUN_001cb4e8(0x2913b0);
  if (lVar7 != 0) {
    FUN_001d25f8(uVar6,*(undefined4 *)(*(int *)(DAT_002859e4 + 0x7c) + 0x70),1,param_2);
  }
  puVar4 = (undefined8 *)*piVar9;
  *puVar4 = 0x70000000;
  *piVar9 = (int)(puVar4 + 2);
  puVar4[1] = 0;
  return iVar1;
}

