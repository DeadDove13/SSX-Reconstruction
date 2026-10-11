/* Ghidra pseudocode. PS2 address: 00226a20. Not validated source. */

undefined4 FUN_00226a20(ulong param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  uVar2 = 0xfffffff6;
  if (DAT_0029a888 != '\0') {
    if (param_1 < 8) {
      iVar6 = (&DAT_0029a7c0)[(int)param_1];
    }
    else {
      iVar6 = 0;
    }
    if (iVar6 == 0) {
      uVar2 = 0xfffffff8;
    }
    else {
      FUN_00226898(param_1);
      iVar3 = 0;
      piVar5 = &DAT_0029a7c0;
      iVar4 = 7;
      do {
        iVar1 = *piVar5;
        piVar5 = piVar5 + 1;
        iVar4 = iVar4 + -1;
        if (iVar1 != 0) {
          iVar3 = iVar3 + 1;
        }
      } while (-1 < iVar4);
      if (iVar3 == 1) {
        FUN_0022da38(0x226370);
        DAT_0029a8ec = 0;
      }
      FUN_0022e650(*(undefined4 *)(iVar6 + 0xc));
      if (*(char *)(iVar6 + 0x18) == '\0') {
        FUN_0023d770(*(undefined4 *)(iVar6 + 4));
      }
      uVar2 = 0;
      (&DAT_0029a7c0)[(int)param_1] = 0;
    }
  }
  return uVar2;
}

