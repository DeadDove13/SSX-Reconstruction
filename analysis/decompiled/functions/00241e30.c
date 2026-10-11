/* Ghidra pseudocode. PS2 address: 00241e30. Not validated source. */

undefined8 FUN_00241e30(undefined2 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = 0;
  if (param_3 == 1) {
    FUN_00241c18(param_2,param_1);
    uVar2 = FUN_00241d70(param_2,param_1,param_4);
  }
  else {
    uVar3 = (uint)(*(byte *)((int)param_2 + 3) >> 2);
    iVar4 = 0;
    if (uVar3 != 0) {
      do {
        if (*(char *)((int)param_1 + 5) == '\0') {
          return 0;
        }
        iVar4 = iVar4 + 1;
        cVar1 = FUN_00243638(*(char *)((int)param_1 + 5),*param_1);
        uVar2 = 1;
        *(char *)(param_1 + 3) = *(char *)(param_1 + 2) + cVar1;
        param_1 = param_1 + 4;
      } while (iVar4 < (int)uVar3);
    }
  }
  return uVar2;
}

