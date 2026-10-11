/* Ghidra pseudocode. PS2 address: 001e0a00. Not validated source. */

int FUN_001e0a00(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) < 0xc) {
    iVar3 = 0;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar1 = 0;
    }
    else {
      iVar3 = 1;
      while ((iVar1 = -1, iVar3 < 0xc &&
             (iVar1 = iVar3, *(int *)(iVar3 * 0xf0 + param_1 + 0x10) != 0))) {
        iVar3 = iVar3 + 1;
      }
    }
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0xf0 + 0x10);
    *puVar2 = 1;
    puVar2[2] = 0;
    puVar2[1] = 0;
    FUN_0023bac0(puVar2 + 4,param_2,0xe0);
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

