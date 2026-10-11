/* Ghidra pseudocode. PS2 address: 001f4e70. Not validated source. */

bool FUN_001f4e70(int *param_1)

{
  bool bVar1;
  long lVar2;
  int aiStack_30 [4];
  
  if (*param_1 == 1) {
    lVar2 = FUN_00228a10(param_1[1]);
    bVar1 = lVar2 != 0;
  }
  else {
    bVar1 = true;
    if (*param_1 == 2) {
      lVar2 = FUN_00227428(param_1[1],aiStack_30);
      if (lVar2 < 0) {
        bVar1 = true;
      }
      else {
        bVar1 = aiStack_30[0] == 3;
      }
    }
  }
  return bVar1;
}

