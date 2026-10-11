/* Ghidra pseudocode. PS2 address: 00131628. Not validated source. */

void FUN_00131628(undefined8 param_1,undefined8 param_2)

{
  FUN_001014f0(param_2,0);
  if (*(int *)((int)param_2 + 0x438) == 0) {
    FUN_00130db8(*(undefined4 *)(DAT_002859e4 + 0x2c));
    FUN_0012ff48(*(undefined4 *)(DAT_002859e4 + 0x2c),2);
    FUN_001011d8(param_2,7);
    return;
  }
  return;
}

