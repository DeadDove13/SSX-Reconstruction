/* Ghidra pseudocode. PS2 address: 002107c8. Not validated source. */

int * FUN_002107c8(int param_1,uint param_2,undefined8 param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar2 = *(int *)(param_1 + 8);
    while( true ) {
      iVar2 = iVar3 * 0x10 + iVar2;
      if ((param_2 <= *(uint *)(iVar2 + 4)) && (piVar1 = *(int **)(iVar2 + 8), piVar1 != (int *)0x0)
         ) {
        *piVar1 = iVar3;
        *(int *)(iVar2 + 8) = piVar1[1];
        piVar1[1] = param_4;
        piVar1[2] = param_5;
        piVar1[3] = param_6;
        return piVar1 + 4;
      }
      iVar3 = iVar3 + 1;
      if (*(int *)(param_1 + 0xc) <= iVar3) break;
      iVar2 = *(int *)(param_1 + 8);
    }
  }
  return (int *)0x0;
}

