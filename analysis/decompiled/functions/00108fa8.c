/* Ghidra pseudocode. PS2 address: 00108fa8. Not validated source. */

void FUN_00108fa8(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != *(int *)(*(int *)param_1 + 0x34c)) {
    FUN_00109010();
    iVar1 = *(int *)param_1;
    uVar2 = *(undefined4 *)(iVar1 + 0x34c);
    *(int *)(iVar1 + 0x34c) = param_2;
    FUN_00109068(param_1,uVar2);
    return;
  }
  return;
}

