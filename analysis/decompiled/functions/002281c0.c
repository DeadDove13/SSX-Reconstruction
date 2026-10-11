/* Ghidra pseudocode. PS2 address: 002281c0. Not validated source. */

undefined4 FUN_002281c0(ulong param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  uVar2 = 0xfffffff6;
  if (DAT_0029a888 != '\0') {
    if (param_1 < 8) {
      iVar3 = (&DAT_0029a7e8)[(int)param_1];
    }
    else {
      iVar3 = 0;
    }
    if (iVar3 == 0) {
      uVar2 = 0xfffffff8;
    }
    else {
      piVar5 = &DAT_0029a7e8;
      uVar2 = *(undefined4 *)(iVar3 + 0xa8);
      (&DAT_0029a7e8)[(int)param_1] = 0;
      FUN_00226a20(uVar2);
      iVar3 = 0;
      iVar4 = 7;
      do {
        iVar1 = *piVar5;
        piVar5 = piVar5 + 1;
        iVar4 = iVar4 + -1;
        if (iVar1 != 0) {
          iVar3 = iVar3 + 1;
        }
      } while (-1 < iVar4);
      uVar2 = 0;
      if (iVar3 == 0) {
        FUN_0022da38(0x228378);
        DAT_0029a8e8 = 0;
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

