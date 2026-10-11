/* Ghidra pseudocode. PS2 address: 00260128. Not validated source. */

int FUN_00260128(int param_1,long param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  
  uVar2 = param_3 * (int)param_2;
  if (uVar2 == 0) {
    param_3 = 0;
  }
  else {
    piVar5 = (int *)param_4;
    uVar4 = piVar5[1];
    if ((int)uVar4 < 0) {
      piVar5[1] = 0;
      uVar4 = 0;
    }
    uVar6 = uVar2;
    if (uVar4 < uVar2) {
      iVar1 = *piVar5;
      while( true ) {
        uVar6 = uVar6 - uVar4;
        FUN_0025a55c(param_1,iVar1,uVar4);
        param_1 = param_1 + uVar4;
        *piVar5 = *piVar5 + uVar4;
        lVar3 = FUN_00261fe8(param_4);
        if (lVar3 != 0) break;
        uVar4 = piVar5[1];
        if (uVar6 <= uVar4) goto LAB_002601f0;
        iVar1 = *piVar5;
      }
      if (param_2 == 0) {
        trap(7);
      }
      param_3 = (int)(uVar2 - uVar6) / (int)param_2;
    }
    else {
LAB_002601f0:
      FUN_0025a55c(param_1,*piVar5,uVar6);
      piVar5[1] = piVar5[1] - uVar6;
      *piVar5 = *piVar5 + uVar6;
    }
  }
  return param_3;
}

