/* Ghidra pseudocode. PS2 address: 00176df8. Not validated source. */

undefined4 FUN_00176df8(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*(int *)((int)param_1 + 0xb58) == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_0016f348(param_1,*(undefined4 *)(*(int *)((int)param_1 + 0xb50) + 0x46c));
    uVar1 = 1;
    if (lVar2 != 0x16f) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

