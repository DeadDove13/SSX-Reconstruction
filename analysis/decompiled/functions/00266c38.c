/* Ghidra pseudocode. PS2 address: 00266c38. Not validated source. */

int FUN_00266c38(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  do {
    DI();
    SYNC(0x10);
  } while ((Status & 0x10000) != 0);
  iVar1 = 0;
  iVar3 = param_1[1];
  if (0 < param_1[2]) {
    do {
      if ((*(uint *)(iVar3 + 0x10) & 1) == 0) {
        *(uint *)(iVar3 + 0x10) = iVar1 << 0x10 | 5;
        iVar1 = *param_1;
        iVar2 = iVar1 + 1;
        *param_1 = iVar2;
        if (iVar2 == 1) {
          iVar2 = 1;
          *param_1 = iVar1 + 2;
        }
        *(int *)(iVar3 + 0x18) = iVar2;
        *(int *)(iVar3 + 0x14) = iVar3;
        EI();
        return iVar3;
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x40;
    } while (iVar1 < param_1[2]);
  }
  EI();
  return 0;
}

