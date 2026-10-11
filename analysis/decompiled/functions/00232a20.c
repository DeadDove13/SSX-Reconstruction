/* Ghidra pseudocode. PS2 address: 00232a20. Not validated source. */

long FUN_00232a20(int *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *param_1;
  if ((iVar1 == 0) ||
     (lVar2 = (**(code **)(iVar1 + 4))
                        (iVar1,param_2,param_4,param_3,*(undefined2 *)((int)param_1 + 0xe)),
     0 < lVar2)) {
    FUN_00232a94(param_2,param_3,param_4);
    lVar2 = param_2;
  }
  return lVar2;
}

