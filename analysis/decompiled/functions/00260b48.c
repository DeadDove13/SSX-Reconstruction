/* Ghidra pseudocode. PS2 address: 00260b48. Not validated source. */

undefined * FUN_00260b48(int param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    lVar1 = FUN_0025baa0(param_3,0x2c08c8);
    if ((lVar1 != 0) && (lVar1 = FUN_0025baa0(param_3,0x2c08b8), lVar1 != 0)) {
      return (undefined *)0x0;
    }
    *(int *)(param_1 + 0x34) = (int)param_3;
    *(undefined4 *)(param_1 + 0x30) = param_2;
  }
  return &DAT_002c08c8;
}

