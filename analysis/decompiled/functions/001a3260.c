/* Ghidra pseudocode. PS2 address: 001a3260. Not validated source. */

undefined4 FUN_001a3260(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0xc);
  iVar3 = 0;
  while( true ) {
    bVar1 = false;
    if ((*(int *)*piVar2 != 0) && (bVar1 = true, ((int *)*piVar2)[2] == 0)) {
      bVar1 = false;
    }
    iVar3 = iVar3 + 1;
    if (bVar1) break;
    piVar2 = piVar2 + 1;
    if (0xe < iVar3) {
      return 0;
    }
  }
  return 1;
}

