/* Ghidra pseudocode. PS2 address: 00243740. Not validated source. */

undefined4 FUN_00243740(short *param_1,undefined4 param_2)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (*param_1 == 0x403) {
    uVar1 = FUN_002412a8();
    iVar3 = 0;
    piVar2 = (int *)&DAT_002a4b40;
    do {
      if ((*piVar2 != 0) && (*(byte *)(*piVar2 + 8) == uVar1)) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar3 < 4);
    if (DAT_002a4b40 == (short *)0x0) {
      uVar4 = 1;
      DAT_002a4b40 = param_1;
      DAT_002a4b44 = param_2;
    }
    else {
      for (iVar3 = 1; iVar3 < 4; iVar3 = iVar3 + 1) {
        if ((&DAT_002a4b40)[iVar3 * 2] == (short *)0x0) {
          (&DAT_002a4b40)[iVar3 * 2] = param_1;
          (&DAT_002a4b44)[iVar3 * 2] = param_2;
          return 1;
        }
      }
    }
  }
  return uVar4;
}

