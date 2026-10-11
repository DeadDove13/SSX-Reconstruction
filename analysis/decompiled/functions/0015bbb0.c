/* Ghidra pseudocode. PS2 address: 0015bbb0. Not validated source. */

undefined * FUN_0015bbb0(undefined *param_1)

{
  undefined *puVar1;
  
  do {
    puVar1 = param_1;
    if (DAT_002c473c == 0) break;
    param_1 = &DAT_0027fea0;
  } while (puVar1 != &DAT_0027fea0);
  return puVar1 + 0x41c;
}

