/* Ghidra pseudocode. PS2 address: 001bf130. Not validated source. */

undefined8 FUN_001bf130(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  do {
    iVar4 = 0;
    while( true ) {
      iVar3 = 8;
      while( true ) {
        iVar2 = 3;
        do {
          iVar2 = iVar2 + -1;
        } while (iVar2 != -1);
        iVar2 = 3;
        do {
          iVar2 = iVar2 + -1;
        } while (iVar2 != -1);
        iVar2 = 3;
        do {
          iVar2 = iVar2 + -1;
        } while (iVar2 != -1);
        if (iVar3 == -1) break;
        iVar3 = iVar3 + -1;
      }
      if (iVar4 == -1) break;
      iVar4 = iVar4 + -1;
    }
    bVar1 = iVar5 != -1;
    iVar5 = iVar5 + -1;
  } while (bVar1);
  iVar5 = 0;
  do {
    iVar4 = 0;
    while( true ) {
      iVar3 = 0x31;
      do {
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
      if (iVar4 == -1) break;
      iVar4 = iVar4 + -1;
    }
    bVar1 = iVar5 != -1;
    iVar5 = iVar5 + -1;
  } while (bVar1);
  return param_1;
}

