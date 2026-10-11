/* Ghidra pseudocode. PS2 address: 00187ce8. Not validated source. */

undefined4 FUN_00187ce8(int param_1)

{
  long lVar1;
  
  if ((((*(int *)(param_1 + 0x3c) == 0) && (lVar1 = FUN_0018e858(0x28abe0), lVar1 == 0)) &&
      ((*(int *)(param_1 + 0x38) == 0 || (lVar1 = FUN_00193940(), lVar1 == 0)))) &&
     (lVar1 = FUN_001a3260(*(undefined4 *)(param_1 + 0x30)), lVar1 == 0)) {
    return 0;
  }
  return 1;
}

