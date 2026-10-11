/* Ghidra pseudocode. PS2 address: 00261050. Not validated source. */

void FUN_00261050(int param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_2;
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(puVar2[1] * 4 + *(int *)(param_1 + 0x4c));
    *puVar2 = *puVar1;
    *puVar1 = puVar2;
  }
  return;
}

