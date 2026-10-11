/* Ghidra pseudocode. PS2 address: 00109130. Not validated source. */

void FUN_00109130(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != *(int *)(*(int *)param_1 + 0x350)) {
    FUN_00109198();
    iVar1 = *(int *)param_1;
    uVar2 = *(undefined4 *)(iVar1 + 0x350);
    *(int *)(iVar1 + 0x350) = param_2;
    FUN_00109240(param_1,uVar2);
    return;
  }
  return;
}

