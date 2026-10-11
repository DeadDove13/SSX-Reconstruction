/* Ghidra pseudocode. PS2 address: 001607b8. Not validated source. */

undefined8 FUN_001607b8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(*(int *)param_1 + 0x18);
  if (iVar1 == -1) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = FUN_00160688(param_2,0);
    uVar2 = FUN_001606e8(param_1,iVar1,param_2,uVar2);
  }
  return uVar2;
}

