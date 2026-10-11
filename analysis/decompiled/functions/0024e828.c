/* Ghidra pseudocode. PS2 address: 0024e828. Not validated source. */

void FUN_0024e828(undefined8 param_1,undefined4 *param_2,long param_3,long param_4,long param_5,
                 long param_6,undefined8 param_7)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar2 = FUN_0024eaf0(2);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = FUN_0024eec8(param_3);
    }
  }
  FUN_0024e620(param_1,param_3,lVar2,uVar3,param_7);
  if (param_5 != 0) {
    uVar1 = FUN_0024d940();
    *param_2 = uVar1;
  }
  lVar2 = FUN_0024eaf0(2);
  if (param_4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = FUN_0024eec8(param_4);
    }
  }
  iVar4 = (int)param_1;
  if (param_6 != 0) {
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) >> 1;
  }
  FUN_0024e620(iVar4 + 4,param_4,lVar2,uVar3,param_7);
  if (param_6 != 0) {
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) << 1;
  }
  if (param_5 != 0) {
    uVar1 = FUN_0024d940();
    param_2[1] = uVar1;
  }
  return;
}

