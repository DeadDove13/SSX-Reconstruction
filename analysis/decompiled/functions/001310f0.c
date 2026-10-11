/* Ghidra pseudocode. PS2 address: 001310f0. Not validated source. */

void FUN_001310f0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_0015da60(*(undefined4 *)(DAT_002859e4 + 0xa0));
  if (lVar1 == 0) {
    FUN_0012ff48(param_2,4);
    return;
  }
  return;
}

