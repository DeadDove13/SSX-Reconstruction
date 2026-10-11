/* Ghidra pseudocode. PS2 address: 0010aca8. Not validated source. */

void FUN_0010aca8(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)param_1;
  if ((DAT_0027ba88 == 3) || (DAT_0027ba88 == 5)) {
    if (-1 < *(int *)(iVar2 + 0x348)) {
      FUN_0018ac08(0x2a7290);
      return;
    }
    iVar3 = 0;
    *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
    do {
      if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c) <= iVar3) {
        FUN_00136dc8((float)param_2,iVar2 + 0x8370,1);
        *(float *)(*(int *)(DAT_002859e4 + 0x14) + 0x14) =
             *(float *)(*(int *)(DAT_002859e4 + 0x14) + 0x14) + (float)param_2;
        return;
      }
      lVar1 = FUN_00189b78(DAT_002859e4,iVar3);
      iVar3 = iVar3 + 1;
    } while ((lVar1 == param_1) || (*(int *)((int)lVar1 + 0x20) < *(int *)(iVar2 + 0x20)));
  }
  else if ((DAT_0027ba88 == 2) || (DAT_0027ba88 == 4)) {
    iVar3 = FUN_0010afc0(param_1);
    FUN_00136dc8((float)iVar3,iVar2 + 0x8370,0);
  }
  return;
}

