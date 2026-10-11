/* Ghidra pseudocode. PS2 address: 001609c8. Not validated source. */

undefined8 FUN_001609c8(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(int *)(*(int *)param_1 + param_2 * 4) != -1) {
    iVar1 = FUN_001606d8();
    uVar2 = FUN_001606d8(param_1,*(undefined4 *)(iVar1 + 8));
  }
  return uVar2;
}

