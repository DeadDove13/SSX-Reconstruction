/* Ghidra pseudocode. PS2 address: 002559e0. Not validated source. */

void FUN_002559e0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)PTR_PTR_002a5d24;
  puVar2 = (undefined4 *)PTR_PTR_002a5d24;
  while (iVar1 != 0) {
    PTR_PTR_002a5d24 = (undefined *)(puVar2 + 1);
    (*(code *)*puVar2)();
    puVar2 = (undefined4 *)PTR_PTR_002a5d24;
    iVar1 = *(int *)PTR_PTR_002a5d24;
  }
  PTR_PTR_002a5d24 = (undefined *)puVar2;
  return;
}

