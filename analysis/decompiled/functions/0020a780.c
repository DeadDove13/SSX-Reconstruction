/* Ghidra pseudocode. PS2 address: 0020a780. Not validated source. */

undefined8
FUN_0020a780(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x35344));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00209f88(iVar1,param_3,param_4,param_5);
  }
  return uVar2;
}

