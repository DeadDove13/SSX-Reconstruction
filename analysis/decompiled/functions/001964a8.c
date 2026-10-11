/* Ghidra pseudocode. PS2 address: 001964a8. Not validated source. */

int * FUN_001964a8(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + param_2 * 4 + 0x394c);
  iVar3 = 0;
  if (0 < iVar1) {
    puVar2 = (undefined4 *)(param_2 * 0x40 + param_1 + 0x3e68);
    do {
      iVar3 = iVar3 + 1;
      if (*(int *)(*(int *)*puVar2 + 0x38) == param_3) {
        return (int *)*puVar2;
      }
      puVar2 = puVar2 + 1;
    } while (iVar3 < iVar1);
  }
  return (int *)0x0;
}

