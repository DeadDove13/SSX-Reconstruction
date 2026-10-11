/* Ghidra pseudocode. PS2 address: 0019d1e8. Not validated source. */

void FUN_0019d1e8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    lVar1 = FUN_00222970(0x299cc8,*(undefined4 *)(param_1 + 0x58),1);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
    if (lVar1 != -1) {
      lVar2 = FUN_002107c8(0x298590,0xf0,0x40000000,0x2c50b0,0,0);
      if (lVar2 != 0) {
        FUN_0023bbd0(lVar2,0xffffffffdeadc0de,0xf0);
      }
      FUN_00122ca8(lVar2,3,lVar1,*(undefined4 *)(param_1 + 0x58),param_4,0,0);
      return;
    }
  }
  return;
}

