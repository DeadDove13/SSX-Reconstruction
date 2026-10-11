/* Ghidra pseudocode. PS2 address: 002282f0. Not validated source. */

bool FUN_002282f0(int param_1)

{
  bool bVar1;
  int aiStack_20 [2];
  int iStack_18;
  int iStack_14;
  
  FUN_00227428(*(undefined4 *)(param_1 + 0xc),aiStack_20);
  if (aiStack_20[0] == 3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if (aiStack_20[0] == 2) {
      bVar1 = iStack_18 <= iStack_14;
    }
  }
  return bVar1;
}

