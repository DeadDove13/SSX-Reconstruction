/* Ghidra pseudocode. PS2 address: 002253d0. Not validated source. */

undefined4 FUN_002253d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = DAT_0029a908;
  iVar3 = 0;
  if (DAT_0029a908[5] < 0) {
    iVar2 = 0;
    do {
      if (*(int *)(DAT_0029a908[1] + iVar2) == param_1 - *DAT_0029a908) {
        iVar2 = DAT_0029a908[5] + 1;
        DAT_0029a908[3] = DAT_0029a908[3] + 8;
        piVar1[5] = iVar2;
        if (iVar2 < iVar3) {
          iVar2 = iVar3 << 3;
          do {
            iVar3 = iVar3 + -1;
            *(undefined8 *)(iVar2 + DAT_0029a908[1]) = ((undefined8 *)(iVar2 + DAT_0029a908[1]))[-1]
            ;
            iVar2 = iVar2 + -8;
          } while (DAT_0029a908[5] < iVar3);
        }
        return 0;
      }
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + -8;
    } while (DAT_0029a908[5] < iVar3);
  }
  return 0xfffffff8;
}

