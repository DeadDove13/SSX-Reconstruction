/* Ghidra pseudocode. PS2 address: 00107070. Not validated source. */

void FUN_00107070(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  
  iVar1 = (int)param_2;
  if ((*(int *)(iVar1 + 0x348) < 0) &&
     (lVar2 = FUN_0019c170(*(undefined4 *)(iVar1 + 0x2b4),*(undefined4 *)(iVar1 + 0x82f4)),
     lVar2 != 0)) {
    if (DAT_0027ba88 == 0) {
      if (1 < DAT_0027b810) {
        iVar3 = 0;
        fVar4 = -*(float *)(iVar1 + 0x2e4);
        if (0 < DAT_0027b810) {
          do {
            iVar1 = FUN_00189b78(DAT_002859e4,iVar3);
            iVar3 = iVar3 + 1;
            fVar4 = fVar4 + *(float *)(iVar1 + 0x2e4);
          } while (iVar3 < DAT_0027b810);
        }
        FUN_00107348(fVar4 / (float)(DAT_0027b810 + -1),param_1,param_2);
        return;
      }
      iVar3 = *(int *)(iVar1 + 0x340);
    }
    else {
      iVar3 = *(int *)(iVar1 + 0x340);
    }
    if (iVar3 == 1) {
      FUN_00200ca0(DAT_002c56e8);
    }
    *(undefined4 *)(*(int *)(iVar1 + 0x8584) + 0x860) = 0xbf800000;
    *(undefined4 *)(*(int *)(iVar1 + 0x8584) + 0x85c) = param_1;
    FUN_0010b340(param_2,4);
    FUN_0010b330(param_2,0x17);
    return;
  }
  return;
}

