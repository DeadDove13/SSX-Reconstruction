/* Ghidra pseudocode. PS2 address: 001222f0. Not validated source. */

bool FUN_001222f0(int param_1)

{
  long lVar1;
  
  lVar1 = FUN_00222970(0x299cc8,*(undefined4 *)(param_1 + 0x28),3);
  if (-1 < lVar1) {
    FUN_00124338(lVar1,*(undefined4 *)(param_1 + 0x28));
  }
  return -1 < lVar1;
}

