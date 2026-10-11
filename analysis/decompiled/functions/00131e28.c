/* Ghidra pseudocode. PS2 address: 00131e28. Not validated source. */

undefined8 FUN_00131e28(undefined8 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1;
  *piVar3 = param_2;
  piVar3[1] = 0;
  piVar1 = (int *)FUN_0023a448(0x2aab58,param_2 << 2,0);
  if (piVar1 != (int *)0x0) {
    FUN_0023bbd0(piVar1,0xffffffffdeadc0ed,param_2 << 2);
  }
  piVar3[2] = (int)piVar1;
  iVar2 = 0;
  if (0 < *piVar3) {
    do {
      *piVar1 = iVar2;
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *piVar3);
  }
  return param_1;
}

