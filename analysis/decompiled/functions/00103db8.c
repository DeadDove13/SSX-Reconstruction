/* Ghidra pseudocode. PS2 address: 00103db8. Not validated source. */

void FUN_00103db8(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 0x84)) {
    puVar1 = (undefined4 *)(param_2 + 0xa0);
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(*(int *)*puVar1 + 0x8c) = 0xffffffff;
      puVar1 = puVar1 + 1;
    } while (iVar2 < *(int *)(param_2 + 0x84));
  }
  return;
}

