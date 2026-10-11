/* Ghidra pseudocode. PS2 address: 0023e7f8. Not validated source. */

long FUN_0023e7f8(int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = 0;
  iVar1 = FUN_0023efc0();
  while( true ) {
    iVar2 = FUN_0023efc0();
    if ((iVar1 + param_1 <= iVar2) || (lVar3 != 0)) break;
    lVar3 = FUN_0023e608(0);
  }
  return lVar3;
}

