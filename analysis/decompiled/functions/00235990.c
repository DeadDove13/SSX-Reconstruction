/* Ghidra pseudocode. PS2 address: 00235990. Not validated source. */

void FUN_00235990(void)

{
  undefined4 *puVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_002c5998 != 0) {
    iVar4 = 0;
    if (0 < DAT_002c5bd0) {
      iVar5 = 0;
      do {
        puVar1 = (undefined4 *)(iVar5 + DAT_002c5998);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x30;
        FUN_00235ff0(*puVar1);
      } while (iVar4 < DAT_002c5bd0);
    }
    while( true ) {
      iVar4 = 0;
      bVar3 = false;
      if (0 < DAT_002c5bd0) {
        do {
          iVar5 = iVar4 * 0x30;
          iVar4 = iVar4 + 1;
          if (*(int *)(iVar5 + DAT_002c5998 + 0x1c) != 0) {
            bVar3 = true;
          }
        } while (iVar4 < DAT_002c5bd0);
      }
      if (!bVar3) break;
      lVar2 = FUN_0023ebe0(0);
      if (lVar2 != 0) {
        FUN_0023e608(0);
      }
      FUN_0023e9a8(0);
    }
    FUN_0023a998(DAT_002c5998);
    DeleteSema(DAT_002c5be4);
    DAT_002c5998 = 0;
  }
  return;
}

