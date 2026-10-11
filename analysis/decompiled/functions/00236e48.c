/* Ghidra pseudocode. PS2 address: 00236e48. Not validated source. */

undefined8 FUN_00236e48(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 auStack_50 [4];
  
  iVar4 = param_2[2];
  if ((int)param_2[2] < 1) {
    iVar4 = 0x7fffffff;
  }
  lVar1 = FUN_00239fb0(*param_2,1,param_1,auStack_50);
  iVar3 = (int)param_1 + -1;
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0023a020(auStack_50[0],0,param_2[1],iVar4,iVar3);
    FUN_0023a180(auStack_50[0],iVar3);
  }
  return uVar2;
}

