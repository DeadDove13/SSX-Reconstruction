/* Ghidra pseudocode. PS2 address: 0018dc98. Not validated source. */

bool FUN_0018dc98(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = FUN_0018dcf0();
  bVar1 = false;
  if (lVar2 != 0) {
    lVar2 = FUN_0018dd28(param_1);
    bVar1 = lVar2 == 0;
  }
  return bVar1;
}

