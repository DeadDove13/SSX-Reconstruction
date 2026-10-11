/* Ghidra pseudocode. PS2 address: 00267460. Not validated source. */

void FUN_00267460(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  do {
    DI();
    SYNC(0x10);
  } while ((Status & 0x10000) != 0);
  *param_1 = param_2;
  param_1[1] = 0;
  puVar2 = DAT_002d73e8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar1 = param_1;
  if (puVar2 != (undefined4 *)0x0) {
    for (; puVar2[5] != 0; puVar2 = (undefined4 *)puVar2[5]) {
    }
    puVar2[5] = param_1;
    puVar1 = DAT_002d73e8;
  }
  DAT_002d73e8 = puVar1;
  EI();
  return;
}

