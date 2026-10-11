/* Ghidra pseudocode. PS2 address: 00165420. Not validated source. */

void FUN_00165420(undefined8 param_1,ulong param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[1] = DAT_002c26f8;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[4] = 0;
  FUN_00165520();
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
  }
  return;
}

