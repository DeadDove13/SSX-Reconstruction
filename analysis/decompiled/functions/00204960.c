/* Ghidra pseudocode. PS2 address: 00204960. Not validated source. */

undefined8 FUN_00204960(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1;
  piVar2[1] = 0;
  piVar2[2] = 0;
  lVar1 = FUN_00236908(param_2);
  *piVar2 = (int)lVar1;
  if (lVar1 == 0) {
    return param_1;
  }
  iVar3 = (int)lVar1 + 1;
  if ((param_3 & 0x40000000) == 0) {
    if ((param_3 & 0xc000000) == 0) {
      lVar1 = FUN_0023a448(0x2bcf58,iVar3,param_3 & 0x3ffffff);
    }
    else {
      lVar1 = FUN_00210840(0x28ac20,iVar3,param_3,0x2bcf58,0,0);
    }
  }
  else {
    lVar1 = FUN_002107c8(0x298590,iVar3,param_3,0x2bcf58,0,0);
  }
  if (lVar1 != 0) {
    if ((long)param_3 < 0) {
      FUN_0023bbd0(lVar1,0,iVar3);
      iVar3 = *piVar2;
      goto LAB_00204a6c;
    }
    FUN_0023bbd0(lVar1,0xffffffffdeadc0ed,iVar3);
  }
  iVar3 = *piVar2;
LAB_00204a6c:
  piVar2[1] = (int)lVar1;
  FUN_00236a40(param_2,lVar1,iVar3 + 1);
  piVar2[2] = piVar2[1];
  *(undefined1 *)(piVar2[1] + *piVar2) = 0;
  return param_1;
}

