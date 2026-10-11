/* Ghidra pseudocode. PS2 address: 00165568. Not validated source. */

undefined4 FUN_00165568(int *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = DAT_002c2700;
  iVar5 = DAT_00299cc8;
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = iVar6;
    iVar6 = 0;
    param_1[5] = 0;
    iVar2 = *(int *)(iVar5 + 0xc);
    param_1[6] = 0;
    param_1[2] = iVar2;
    param_1[3] = *(int *)(iVar5 + 0x10);
    param_1[4] = *(int *)(iVar5 + 0x14);
    if (iVar5 != 0) {
      iVar6 = *(int *)(iVar5 + 0x28);
    }
    param_1[7] = iVar6;
    iVar6 = 0;
    if (iVar5 != 0) {
      iVar6 = *(int *)(iVar5 + 0x2c);
    }
    param_1[8] = iVar6;
  }
  else {
    iVar3 = (int)param_2;
    iVar5 = *(int *)(iVar3 + 8);
    param_1[5] = *(int *)(iVar3 + 0x14);
    iVar2 = iVar3 + 0x70;
    param_1[2] = iVar5;
    iVar4 = 0;
    iVar5 = *(int *)(iVar3 + 0xc);
    param_1[6] = *(int *)(iVar3 + 0x18);
    param_1[3] = iVar5;
    iVar5 = *(int *)(iVar3 + 0x1c);
    iVar6 = *(int *)(iVar3 + 0x10);
    param_1[7] = iVar5;
    param_1[4] = iVar6;
    iVar6 = *(int *)(iVar3 + 0x20);
    *param_1 = iVar3;
    iVar5 = iVar5 * iVar6;
    param_1[8] = iVar6;
    param_1[9] = iVar2;
    iVar6 = iVar2;
    if (0 < iVar5) {
      do {
        piVar1 = (int *)(iVar6 + 4);
        iVar5 = iVar5 + -1;
        iVar6 = iVar6 + 0xc;
        iVar4 = iVar4 + *piVar1;
      } while (iVar5 != 0);
    }
    iVar5 = param_1[7] * param_1[8];
    iVar6 = iVar5 * 0xc + iVar2;
    param_1[10] = iVar6;
    param_1[0xb] = iVar6 + iVar4 * 4;
    if (0 < iVar5) {
      do {
        iVar5 = iVar5 + -1;
        *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) * 4 + iVar6;
        iVar2 = iVar2 + 0xc;
      } while (iVar5 != 0);
    }
  }
  return 1;
}

