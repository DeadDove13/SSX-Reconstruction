/* Ghidra pseudocode. PS2 address: 001e0968. Not validated source. */

int FUN_001e0968(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0xb54) != 0) {
    iVar1 = *(int *)(param_1 + 0xb58);
    puVar2 = *(undefined4 **)(iVar1 + 4);
    *(undefined4 **)(param_1 + 0xb58) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    *(int *)(param_1 + 0xb54) = *(int *)(param_1 + 0xb54) + -1;
    *(int *)(param_1 + 0xb5c) = *(int *)(param_1 + 0xb5c) + 1;
    return iVar1;
  }
  return 0;
}

