/* Ghidra pseudocode. PS2 address: 002330e0. Not validated source. */

int FUN_002330e0(int *param_1,int param_2,short *param_3,undefined2 *param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  
  iVar3 = *param_1;
  if (((iVar3 == 0) ||
      (iVar3 = (**(code **)(iVar3 + 4))
                         (iVar3,param_2,param_4,param_3,*(undefined2 *)((int)param_1 + 0xe)),
      0 < iVar3)) && (iVar9 = 0, iVar3 = param_2, 0 < param_2)) {
    do {
      lVar8 = (long)*param_3;
      lVar7 = (long)(short)param_1[8];
      sVar2 = (short)param_1[8];
      if ((lVar7 < lVar8) || (lVar7 = (long)(short)param_1[4], lVar8 < lVar7)) {
        lVar8 = lVar7;
      }
      sVar1 = param_3[1];
      iVar4 = (int)sVar2;
      if (((long)sVar1 <= (long)iVar4) &&
         (iVar4 = (int)(short)param_1[4], (long)(short)param_1[4] <= (long)sVar1)) {
        iVar4 = (int)sVar1;
      }
      sVar1 = param_3[2];
      iVar5 = (int)sVar2;
      if (((long)sVar1 <= (long)iVar5) &&
         (iVar5 = (int)(short)param_1[4], (long)(short)param_1[4] <= (long)sVar1)) {
        iVar5 = (int)sVar1;
      }
      sVar1 = param_3[3];
      iVar6 = (int)sVar2;
      if (((long)sVar1 <= (long)iVar6) &&
         (iVar6 = (int)(short)param_1[4], (long)(short)param_1[4] <= (long)sVar1)) {
        iVar6 = (int)sVar1;
      }
      iVar9 = iVar9 + 4;
      param_3 = param_3 + 4;
      *param_4 = (short)((int)lVar8 * (int)(short)param_1[0xc] >> 7);
      param_4[1] = (short)(iVar4 * (short)param_1[0xc] >> 7);
      param_4[2] = (short)(iVar5 * (short)param_1[0xc] >> 7);
      param_4[3] = (short)(iVar6 * (short)param_1[0xc] >> 7);
      param_4 = param_4 + 4;
    } while (iVar9 < param_2);
  }
  return iVar3;
}

