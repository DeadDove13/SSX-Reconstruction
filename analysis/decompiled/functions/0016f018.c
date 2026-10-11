/* Ghidra pseudocode. PS2 address: 0016f018. Not validated source. */

void FUN_0016f018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  FUN_0016e100();
  lVar2 = FUN_0016ef88(param_2);
  if (-1 < lVar2) {
    FUN_0016e100(param_1,lVar2);
  }
  iVar4 = (int)param_1;
  uVar3 = (**(code **)(*(int *)(iVar4 + 4) + 0x9c))
                    (iVar4 + *(short *)(*(int *)(iVar4 + 4) + 0x98),param_2,param_3);
  lVar2 = FUN_0016c390(uVar3,*(undefined4 *)(iVar4 + 0xb20));
  if (-1 < lVar2) {
    FUN_0016e100(param_1,lVar2);
  }
  if (*(int *)(iVar4 + (int)param_3 * 4 + 0xb14) != 0) {
    piVar1 = (int *)FUN_0016f230(param_1,param_2,param_3);
    if (*piVar1 != -1) {
      iVar4 = *piVar1;
      while( true ) {
        piVar1 = piVar1 + 1;
        FUN_0016eb08(param_1,iVar4);
        if (*piVar1 == -1) break;
        iVar4 = *piVar1;
      }
    }
  }
  return;
}

