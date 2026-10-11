/* Ghidra pseudocode. PS2 address: 00160a20. Not validated source. */

undefined8 FUN_00160a20(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_2 + -0x20) == -1) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_001606d8();
    uVar2 = FUN_001606d8(param_1,*(undefined4 *)(iVar1 + 8));
  }
  return uVar2;
}

