/* Ghidra pseudocode. PS2 address: 0016f2a8. Not validated source. */

undefined4 FUN_0016f2a8(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_2 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    puVar1 = (undefined4 *)FUN_0016f1c8();
    uVar2 = *puVar1;
  }
  return uVar2;
}

