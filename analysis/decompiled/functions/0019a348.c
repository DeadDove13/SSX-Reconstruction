/* Ghidra pseudocode. PS2 address: 0019a348. Not validated source. */

void FUN_0019a348(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 8);
  if (DAT_0027ad04 != 0) {
    puVar1 = (undefined4 *)(param_1 + *(int *)(param_1 + 4) * 0x1c + 0x24);
  }
  FUN_0015f830(puVar1[5]);
  if (puVar1[5] == 8) {
    FUN_0015fba0(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],1);
    return;
  }
  return;
}

