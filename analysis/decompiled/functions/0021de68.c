/* Ghidra pseudocode. PS2 address: 0021de68. Not validated source. */

void FUN_0021de68(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_0021dbb8(param_1,param_2,0x1cd0);
  iVar2 = *(int *)param_1;
  puVar1 = (undefined4 *)((int *)param_1)[3];
  if (0 < iVar2) {
    do {
      *puVar1 = 0;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + 0x734;
    } while (iVar2 != 0);
  }
  return;
}

