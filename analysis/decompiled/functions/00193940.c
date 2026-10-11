/* Ghidra pseudocode. PS2 address: 00193940. Not validated source. */

bool FUN_00193940(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  bVar2 = false;
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 1:
  case 2:
  case 7:
    bVar2 = *(uint *)(param_1 + 0x28) <= *(uint *)(param_1 + 0x2c) || *(int *)(param_1 + 0x40) == 0;
    if (*(int *)(param_1 + 0x3928) != 0) {
      uVar1 = FUN_0019a400();
      if (*(uint *)(param_1 + 0x2c) < uVar1) {
        return bVar2;
      }
      return true;
    }
    break;
  case 3:
  case 5:
  case 6:
  case 8:
  case 9:
    bVar2 = true;
    break;
  case 4:
    bVar2 = *(uint *)(param_1 + 0x28) <= *(uint *)(param_1 + 0x2c);
  }
  return bVar2;
}

