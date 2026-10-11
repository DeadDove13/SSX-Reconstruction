/* Ghidra pseudocode. PS2 address: 001a0cf8. Not validated source. */

undefined1 FUN_001a0cf8(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = FUN_001a07a8(param_1,param_2);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)((int)lVar2 + 8);
  }
  return uVar1;
}

