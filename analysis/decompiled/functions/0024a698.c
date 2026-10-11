/* Ghidra pseudocode. PS2 address: 0024a698. Not validated source. */

void FUN_0024a698(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x40);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar1[0x20] = 0xffffffff;
  puVar1[0x2b] = 0;
  FUN_0024aee0();
  DAT_002a53c4 = 0;
  FUN_0024adf8();
  return;
}

