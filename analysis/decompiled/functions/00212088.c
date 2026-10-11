/* Ghidra pseudocode. PS2 address: 00212088. Not validated source. */

char FUN_00212088(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  
  lVar1 = FUN_00211e08(param_1,0);
  cVar2 = lVar1 != 0;
  if (*(int *)((int)param_1 + 0x58) != 0) {
    lVar1 = FUN_00211e08(param_1,1);
    if (lVar1 != 0) {
      cVar2 = cVar2 + '\x01';
    }
  }
  return cVar2;
}

