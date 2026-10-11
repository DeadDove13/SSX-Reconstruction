/* Ghidra pseudocode. PS2 address: 00210598. Not validated source. */

int FUN_00210598(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  param_1[1] = 0;
  piVar7 = param_3;
  iVar10 = param_2;
  if (0 < param_2) {
    do {
      iVar10 = iVar10 + -1;
      iVar4 = piVar7[1] + 0xf;
      iVar5 = piVar7[1] + 0x1e;
      if (-1 < iVar4) {
        iVar5 = iVar4;
      }
      param_1[1] = param_1[1] + *piVar7 * ((iVar5 >> 4) * 0x10 + 0x10);
      piVar7 = piVar7 + 2;
    } while (iVar10 != 0);
  }
  iVar5 = param_2 * 0x10 + 0xf;
  iVar10 = param_2 * 0x10 + 0x1e;
  if (-1 < iVar5) {
    iVar10 = iVar5;
  }
  iVar5 = (iVar10 >> 4) * 0x10;
  iVar10 = param_1[1] + iVar5;
  param_1[1] = iVar10;
  lVar2 = FUN_0023a448(0x2bd488,iVar10,0);
  if (lVar2 != 0) {
    FUN_0023bbd0(lVar2,0xffffffffdeadc0ed,iVar10);
  }
  iVar4 = (int)lVar2;
  *param_1 = iVar4;
  iVar10 = 0;
  param_1[2] = iVar4;
  iVar4 = iVar4 + iVar5;
  param_1[3] = param_2;
  if (0 < param_2) {
    iVar5 = 0;
    while( true ) {
      iVar9 = iVar10 * 0x10;
      iVar10 = iVar10 + 1;
      iVar12 = ((int *)(iVar5 + (int)param_3))[1];
      iVar11 = 0;
      iVar6 = iVar12 + 0xf;
      iVar12 = iVar12 + 0x1e;
      if (-1 < iVar6) {
        iVar12 = iVar6;
      }
      piVar7 = (int *)(iVar9 + param_1[2]);
      piVar7[2] = iVar4;
      iVar12 = (iVar12 >> 4) * 0x10;
      piVar7[3] = iVar4;
      piVar7[1] = iVar12;
      iVar12 = iVar12 + 0x10;
      iVar5 = *(int *)(iVar5 + (int)param_3);
      *piVar7 = iVar5;
      iVar4 = iVar5 * iVar12 + iVar4;
      if (0 < iVar5) {
        iVar5 = param_1[2];
        iVar6 = 0;
        do {
          iVar8 = iVar6 + iVar12;
          iVar1 = ((int *)(iVar9 + iVar5))[3];
          iVar3 = iVar1 + iVar8;
          if (iVar11 == *(int *)(iVar9 + iVar5) + -1) {
            iVar3 = 0;
          }
          *(int *)(iVar1 + iVar6 + 4) = iVar3;
          iVar11 = iVar11 + 1;
          iVar5 = param_1[2];
          iVar6 = iVar8;
        } while (iVar11 < *(int *)(iVar9 + iVar5));
      }
      if (param_2 <= iVar10) break;
      iVar5 = iVar10 * 8;
    }
  }
  return *param_1 + param_1[1];
}

