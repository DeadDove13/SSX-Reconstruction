/* Ghidra pseudocode. PS2 address: 0016f770. Not validated source. */

void FUN_0016f770(undefined4 param_1)

{
  long lVar1;
  
  lVar1 = FUN_0016dd88();
  if (lVar1 != 0) {
    *(undefined4 *)((int)lVar1 + 0x9c) = param_1;
  }
  return;
}

