/* Ghidra pseudocode. PS2 address: 002192d8. Not validated source. */

bool FUN_002192d8(undefined8 param_1)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(int *)param_1 != 0) {
    lVar1 = FUN_0023a2f8(((int *)param_1)[0x22],100);
    bVar2 = lVar1 != 0;
  }
  FUN_00219228(param_1);
  return bVar2;
}

