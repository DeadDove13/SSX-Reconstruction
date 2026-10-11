/* Ghidra pseudocode. PS2 address: 00239d98. Not validated source. */

undefined4 FUN_00239d98(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_0023b9ec(param_1,2);
  if (lVar1 == 0xc0fb) {
    uVar2 = 1;
  }
  else {
    lVar1 = FUN_0023b9ec(param_1,4);
    uVar2 = 2;
    if (lVar1 != 0x42494746) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

