/* Ghidra pseudocode. PS2 address: 001f8df8. Not validated source. */

undefined4 FUN_001f8df8(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x340) == 1) {
    uVar1 = *(undefined4 *)(param_2 + 0x24);
  }
  else {
    uVar1 = 0;
    if (*(int *)(DAT_002859e4 + 0x298) != 1) {
      uVar1 = FUN_001f8d30(param_1,param_2 + 0xc0);
    }
  }
  return uVar1;
}

