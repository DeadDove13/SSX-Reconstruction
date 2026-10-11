/* Ghidra pseudocode. PS2 address: 001d30a0. Not validated source. */

void FUN_001d30a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x5028);
  FUN_0023bd40(*(undefined4 *)(param_1 + 0x1024),puVar2,param_1 + 0x9028);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x1024)) {
    do {
      iVar1 = iVar1 + 1;
      *puVar2 = CONCAT22(*(short *)((int)puVar2 + 2),
                         *(undefined2 *)
                          (*(int *)(param_1 + 0x1028 + *(short *)((int)puVar2 + 2) * 4) + 0x52));
      puVar2 = puVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x1024));
  }
  FUN_0023bd40(*(undefined4 *)(param_1 + 0x1024),param_1 + 0x5028,param_1 + 0x9028);
  return;
}

