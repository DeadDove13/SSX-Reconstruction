/* Ghidra pseudocode. PS2 address: 001ec068. Not validated source. */

void FUN_001ec068(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = 0;
  if ('\0' < *(char *)(*(int *)(param_1 + 0x18) + 0x2e)) {
    iVar1 = *(int *)(param_1 + 0x20);
    while( true ) {
      iVar2 = (int)lVar3;
      lVar3 = (long)(iVar2 + 1);
      FUN_001eb468(param_2,iVar1 + iVar2 * 0x10);
      if (*(char *)(*(int *)(param_1 + 0x18) + 0x2e) <= lVar3) break;
      iVar1 = *(int *)(param_1 + 0x20);
    }
  }
  return;
}

