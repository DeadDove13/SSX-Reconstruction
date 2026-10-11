/* Ghidra pseudocode. PS2 address: 00104018. Not validated source. */

void thunk_FUN_00104050(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)(param_1 + 0x36c);
  puVar3 = (undefined4 *)(param_1 + 0xc);
  iVar2 = 0x6b;
  do {
    *puVar3 = 0;
    iVar2 = iVar2 + -1;
    *(undefined2 *)(puVar3 + 1) = 0;
    *(undefined2 *)((int)puVar3 + 6) = 0;
    *puVar1 = 0xffffffff;
    puVar3 = puVar3 + 2;
    puVar1 = puVar1 + 1;
  } while (-1 < iVar2);
  return;
}

