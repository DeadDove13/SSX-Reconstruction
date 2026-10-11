/* Ghidra pseudocode. PS2 address: 002229e8. Not validated source. */

void FUN_002229e8(int param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar1 = FUN_002107c8(0x298590,0xf0,0x40000000,0x2c5978,0,0);
    if (lVar1 != 0) {
      FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0xf0);
    }
    FUN_00122ca8(lVar1,3,param_2,0,0,0,0);
    return;
  }
  return;
}

