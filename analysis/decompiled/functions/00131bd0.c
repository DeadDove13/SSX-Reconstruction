/* Ghidra pseudocode. PS2 address: 00131bd0. Not validated source. */

undefined8 FUN_00131bd0(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = (int *)param_1;
  *piVar6 = param_2;
  piVar6[1] = 0;
  lVar3 = FUN_0023a448(0x2aab48,param_2 << 5,0);
  if (lVar3 != 0) {
    FUN_0023bbd0(lVar3,0xffffffffdeadc0ed,param_2 << 5);
  }
  iVar1 = *piVar6;
  piVar6[3] = (int)lVar3;
  iVar5 = 0;
  iVar2 = iVar1 + -1;
  piVar6[2] = (int)lVar3;
  if (0 < iVar2) {
    do {
      iVar4 = iVar5 * 0x20;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + piVar6[2];
      *(int *)(iVar4 + 0x18) = iVar4 + 0x20;
    } while (iVar5 < iVar2);
  }
  *(undefined4 *)(iVar1 * 0x20 + piVar6[2] + -8) = 0;
  return param_1;
}

