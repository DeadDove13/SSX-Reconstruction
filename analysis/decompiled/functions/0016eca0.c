/* Ghidra pseudocode. PS2 address: 0016eca0. Not validated source. */

void FUN_0016eca0(undefined8 param_1,int *param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = (int)param_1;
  iVar8 = 0;
  *(int **)(iVar7 + (int)param_3 * 4 + 0xb14) = param_2;
  while ((param_4 < 0 || (iVar8 <= param_4))) {
    lVar5 = FUN_0016f2a8(param_1,iVar8,param_3);
    if (lVar5 == -1) {
      iVar8 = *param_2;
LAB_0016ede0:
      while (iVar8 != -1) {
        param_2 = param_2 + 1;
        bVar2 = true;
        iVar8 = *param_2;
        while (iVar8 != -1) {
          if (bVar2) {
            FUN_0016e990(param_1,*param_2,9);
          }
          else {
            FUN_0016e990(param_1,*param_2,10);
          }
          param_2 = param_2 + 1;
          bVar2 = false;
          iVar8 = *param_2;
        }
        param_2 = param_2 + 1;
        iVar8 = *param_2;
      }
      puVar6 = (undefined4 *)(iVar7 + 0xb14 + (int)param_3 * 4);
      puVar1 = (undefined4 *)*puVar6;
      *(undefined4 *)(iVar7 + 0xb1c) = 1;
      FUN_0016fe18(param_1,*puVar1,param_3);
      FUN_0016eec0(param_1,*(undefined4 *)*puVar6,param_3);
      return;
    }
    lVar3 = FUN_0016dd60(param_1,lVar5);
    if (lVar3 == 0) {
      lVar3 = FUN_0016f2a8(param_1,iVar8 + -1,param_3);
      if (lVar3 == -1) {
        if (param_4 == -1) {
          lVar3 = FUN_0016f0f8(param_1,param_3);
        }
        else {
          lVar3 = FUN_0016f2a8(param_1,param_4,param_3);
        }
      }
      lVar4 = FUN_0016f2a8(param_1,iVar8 + 1,param_3);
      if (lVar4 == -1) {
        lVar4 = FUN_0016f2a8(param_1,0,param_3);
      }
      FUN_0016e9c0(param_1,lVar5,lVar3,lVar4,0,0,0,0);
      iVar8 = iVar8 + 1;
    }
    else {
      iVar8 = iVar8 + 1;
    }
  }
  iVar8 = *param_2;
  goto LAB_0016ede0;
}

