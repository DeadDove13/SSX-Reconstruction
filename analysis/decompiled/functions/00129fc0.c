/* Ghidra pseudocode. PS2 address: 00129fc0. Not validated source. */

void FUN_00129fc0(int param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  float fVar3;
  
  if (param_2 != 0) {
    if (*(float *)(param_1 + 0x3c) < 0.0) {
      fVar3 = 0.5;
      iVar1 = *(int *)((int)param_2 + 0x100);
    }
    else {
      fVar3 = -0.5;
      iVar1 = *(int *)((int)param_2 + 0x100);
    }
    fVar3 = *(float *)(param_1 + 0x38) * fVar3;
    if (iVar1 == 0) {
      lVar2 = FUN_002107c8(0x298590,0x370,0x40000000,0x2c40f0,0,0);
      if (lVar2 != 0) {
        FUN_0023bbd0(lVar2,0xffffffffdeadc0de,0x370);
      }
      FUN_00129d70(fVar3,lVar2,3,param_2,*(undefined4 *)(param_1 + 0x50),param_3);
      return;
    }
    if ((*(int *)(iVar1 + 0x14) == 0xc) && (0.25 <= ABS(fVar3))) {
      if (param_3 == 0) {
        if ((*(int *)(param_1 + 0x264) != 0) &&
           (iVar1 = *(int *)(*(int *)(param_1 + 0x264) + 0x100), iVar1 != 0)) {
          FUN_0012a170(fVar3,iVar1,0);
          return;
        }
      }
      else if ((*(int *)(param_1 + 0x260) != 0) &&
              (iVar1 = *(int *)(*(int *)(param_1 + 0x260) + 0x100), iVar1 != 0)) {
        FUN_0012a170(fVar3,iVar1,param_3);
        return;
      }
    }
  }
  return;
}

