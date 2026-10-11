/* Ghidra pseudocode. PS2 address: 0016f830. Not validated source. */

void FUN_0016f830(void)

{
  long lVar1;
  
  lVar1 = FUN_0016dd88();
  if (lVar1 != 0) {
    *(undefined4 *)((int)lVar1 + 0xb0) = 0;
  }
  return;
}

