/* Ghidra pseudocode. PS2 address: 00255fc0. Not validated source. */

uint FUN_00255fc0(uint param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 != (uint *)0x0) {
    iVar5 = 0;
    uVar1 = *param_2;
    iVar2 = -1;
    puVar3 = param_2;
    while (uVar1 != 0xffffffff) {
      iVar4 = iVar2;
      if ((param_1 < *puVar3) || (puVar3[1] <= param_1)) {
        if ((-1 < iVar2) && (param_1 < *puVar3)) break;
      }
      else {
        iVar4 = iVar5;
        if (((iVar2 != -1) && (iVar4 = iVar2, puVar3[1] <= (param_2 + iVar2 * 3)[1])) &&
           (iVar4 = iVar5, *puVar3 < param_2[iVar2 * 3])) {
          iVar4 = iVar2;
        }
      }
      puVar3 = puVar3 + 3;
      iVar5 = iVar5 + 1;
      iVar2 = iVar4;
      uVar1 = *puVar3;
    }
    if (iVar2 != -1) {
      return param_2[iVar2 * 3 + 2];
    }
  }
  return 0;
}

