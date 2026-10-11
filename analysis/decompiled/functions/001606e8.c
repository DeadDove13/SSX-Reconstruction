/* Ghidra pseudocode. PS2 address: 001606e8. Not validated source. */

long FUN_001606e8(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  
  piVar1 = (int *)FUN_001606d8();
  if (((*piVar1 == -1) || (lVar2 = FUN_001606e8(param_1,*piVar1,param_3,param_4), lVar2 == -1)) &&
     ((piVar1[1] == -1 || (lVar2 = FUN_001606e8(param_1,piVar1[1],param_3,param_4), lVar2 == -1))))
  {
    if (piVar1[3] == param_4) {
      lVar3 = FUN_0025baa0(piVar1 + 4,param_3);
      lVar2 = param_2;
      if (lVar3 != 0) {
        lVar2 = -1;
      }
    }
    else {
      lVar2 = -1;
    }
  }
  return lVar2;
}

