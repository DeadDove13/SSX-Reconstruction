/* Ghidra pseudocode. PS2 address: 0020dac0. Not validated source. */

undefined4 FUN_0020dac0(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = param_2 + 1;
  iVar1 = *param_2;
  if (param_2[3] < DAT_002c57e8) {
    if (DAT_002c57cc[param_2[1]] == iVar1) {
      puVar2 = (undefined4 *)(param_2[1] * 4 + DAT_002c57c8);
      goto LAB_0020dc74;
    }
    iVar3 = 0;
    piVar4 = DAT_002c57cc;
    if (0 < DAT_002c57d0) {
      do {
        if (*piVar4 == iVar1) {
          puVar2 = (undefined4 *)(iVar3 * 4 + DAT_002c57c8);
          *piVar5 = iVar3;
          goto LAB_0020dc74;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < DAT_002c57d0);
    }
    FUN_0020e608(*(undefined4 *)(DAT_002c57d4 * 4 + DAT_002c57c8),param_2[9]);
    iVar3 = DAT_002c57d4;
    DAT_002c57cc[DAT_002c57d4] = iVar1;
    *piVar5 = iVar3;
    DAT_002c57d4 = (DAT_002c57d4 + 1) % DAT_002c57d0;
    iVar1 = DAT_002c57c8;
    if (DAT_002c57d0 == 0) {
      trap(7);
    }
  }
  else {
    if (DAT_002c57dc[param_2[1]] == iVar1) {
      puVar2 = (undefined4 *)(param_2[1] * 4 + DAT_002c57d8);
      goto LAB_0020dc74;
    }
    iVar3 = 0;
    piVar4 = DAT_002c57dc;
    if (0 < DAT_002c57e0) {
      do {
        if (*piVar4 == iVar1) {
          puVar2 = (undefined4 *)(iVar3 * 4 + DAT_002c57d8);
          *piVar5 = iVar3;
          goto LAB_0020dc74;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < DAT_002c57e0);
    }
    FUN_0020e608(*(undefined4 *)(DAT_002c57e4 * 4 + DAT_002c57d8),param_2[9]);
    iVar3 = DAT_002c57e4;
    DAT_002c57dc[DAT_002c57e4] = iVar1;
    *piVar5 = iVar3;
    DAT_002c57e4 = (DAT_002c57e4 + 1) % DAT_002c57e0;
    iVar1 = DAT_002c57d8;
    if (DAT_002c57e0 == 0) {
      trap(7);
    }
  }
  puVar2 = (undefined4 *)(*piVar5 * 4 + iVar1);
LAB_0020dc74:
  return *puVar2;
}

