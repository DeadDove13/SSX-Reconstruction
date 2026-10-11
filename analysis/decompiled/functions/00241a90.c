/* Ghidra pseudocode. PS2 address: 00241a90. Not validated source. */

bool FUN_00241a90(int param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  
  bVar1 = *(byte *)(param_1 + 3);
  bVar2 = false;
  if (((bVar1 & 3) == 1) && (param_2 == 2)) {
    bVar2 = true;
  }
  else if ((bVar1 & 3) == 2) {
    bVar2 = (bVar1 & 3) == 0;
    if (param_2 != 2) {
      bVar2 = true;
    }
  }
  else if ((bVar1 & 3) == 0) {
    bVar2 = true;
  }
  return bVar2;
}

