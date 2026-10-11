/* Ghidra pseudocode. PS2 address: 00159410. Not validated source. */

bool FUN_00159410(int param_1)

{
  int iVar1;
  int aiStack_20 [4];
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(iVar1 + 0x278) == 4) {
    FUN_00159298(*(undefined4 *)(iVar1 + 0x274),aiStack_20);
  }
  else {
    if (*(int *)(iVar1 + 0x278) != 5) {
      return false;
    }
    FUN_001592e0(*(undefined4 *)(iVar1 + 0x274),aiStack_20);
  }
  return aiStack_20[0] == 5;
}

