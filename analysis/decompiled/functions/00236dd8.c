/* Ghidra pseudocode. PS2 address: 00236dd8. Not validated source. */

undefined8 FUN_00236dd8(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 auStack_40 [4];
  
  lVar1 = FUN_00239fb0(*param_2,1,param_1,auStack_40);
  iVar3 = (int)param_1 + -1;
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0023a1d8(auStack_40[0],iVar3);
    FUN_0023a180(auStack_40[0],iVar3);
  }
  return uVar2;
}

