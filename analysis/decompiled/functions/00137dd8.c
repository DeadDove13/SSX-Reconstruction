/* Ghidra pseudocode. PS2 address: 00137dd8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00137e54) */

int FUN_00137dd8(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = (int *)(param_1 + 0xd4);
  iVar2 = 4;
  do {
    if ((((*piVar1 == *param_2) && (piVar1[1] == param_2[1])) &&
        (*(char *)((int)param_2 + 2) != '5')) && ((char)*param_2 != '\\')) {
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar2 + -1;
    piVar1 = piVar1 + 2;
  } while (-1 < iVar2);
  *(undefined8 *)(*(int *)(param_1 + 0xfc) * 8 + param_1 + 0xd4) = *(undefined8 *)param_2;
  *(int *)(param_1 + 0xfc) = (*(int *)(param_1 + 0xfc) + 1) % 5;
  return iVar3;
}

