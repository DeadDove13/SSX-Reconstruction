/* Ghidra pseudocode. PS2 address: 00231500. Not validated source. */

int FUN_00231500(int param_1,undefined2 *param_2,int param_3,undefined4 *param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  puVar5 = (undefined2 *)*param_4;
  if (param_1 < param_3) {
    param_3 = param_1;
  }
  puVar4 = param_2;
  iVar2 = param_3;
  iVar3 = 0;
  if (0 < param_3) {
    do {
      iVar2 = iVar2 + -1;
      *puVar5 = *puVar4;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
      iVar3 = param_3;
    } while (iVar2 != 0);
  }
  if (iVar3 < param_1) {
    puVar4 = param_2 + iVar3;
    param_1 = param_1 - iVar3;
    do {
      uVar1 = *puVar4;
      param_1 = param_1 + -1;
      puVar4 = puVar4 + 1;
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  *param_4 = puVar5;
  return param_3;
}

