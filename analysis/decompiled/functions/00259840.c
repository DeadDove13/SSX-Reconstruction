/* Ghidra pseudocode. PS2 address: 00259840. Not validated source. */

void FUN_00259840(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint auStack_40 [8];
  
  uVar8 = 0xffffffff;
  uVar1 = param_1[1];
  uVar7 = 0;
  uVar2 = (uVar1 & 0x7ffffff) * 4 + 0xf >> 4;
  if (uVar1 != 0) {
    do {
      if (uVar8 != 0xffffffff) {
        iVar6 = *param_1;
        iVar5 = uVar8 * 4;
        if (*(int *)(*(int *)(uVar7 * 4 + iVar6) + 8) - *(int *)(*(int *)(iVar5 + iVar6) + 8) < 0) {
          iVar3 = *param_2;
          do {
            iVar4 = param_2[1];
            uVar8 = *(uint *)((int)auStack_40 + iVar5 + uVar2 * -0x10);
            *(undefined4 *)(iVar4 * 4 + iVar3) = *(undefined4 *)(iVar5 + iVar6);
            param_2[1] = iVar4 + 1;
            iVar6 = *param_1;
            *(undefined4 *)(iVar5 + iVar6) = 0;
            if (uVar8 == 0xffffffff) break;
            iVar5 = uVar8 * 4;
          } while (*(int *)(*(int *)(uVar7 * 4 + iVar6) + 8) - *(int *)(*(int *)(iVar5 + iVar6) + 8)
                   < 0);
        }
      }
      uVar9 = uVar7 + 1;
      auStack_40[uVar2 * -4 + uVar7] = uVar8;
      uVar8 = uVar7;
      uVar7 = uVar9;
    } while (uVar9 < uVar1);
  }
  uVar8 = 0;
  iVar6 = 0;
  if (uVar1 != 0) {
    iVar5 = *param_1;
    iVar3 = 0;
    do {
      iVar3 = *(int *)(iVar3 + iVar5);
      iVar4 = iVar6 * 4;
      if (iVar3 != 0) {
        iVar6 = iVar6 + 1;
        *(int *)(iVar4 + iVar5) = iVar3;
      }
      uVar8 = uVar8 + 1;
      iVar3 = uVar8 * 4;
    } while (uVar8 < uVar1);
  }
  param_1[1] = iVar6;
  return;
}

