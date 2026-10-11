/* Ghidra pseudocode. PS2 address: 0024f898. Not validated source. */

void FUN_0024f898(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (DAT_002a5408 == 0) {
    if (DAT_002a546c == 3) {
      iVar2 = 2;
      if (DAT_002a5480 != 0) {
        iVar2 = 3;
      }
      goto LAB_0024f904;
    }
  }
  else if (DAT_002a5480 != 0) {
    iVar2 = 2;
    if (DAT_002a5470 != 0) {
      iVar2 = 3;
    }
    goto LAB_0024f904;
  }
  iVar2 = 1;
LAB_0024f904:
  if (iVar2 != 0) {
    puVar4 = &DAT_002a54b8;
    puVar3 = &DAT_002a54a8;
    do {
      iVar2 = iVar2 + -1;
      uVar1 = FUN_0024eec8(0x10);
      *puVar3 = uVar1;
      FUN_0024eec8(1);
      puVar3 = puVar3 + 1;
      uVar1 = FUN_0024eec8(0x10);
      *puVar4 = uVar1;
      FUN_0024eec8(1);
      puVar4 = puVar4 + 1;
    } while (iVar2 != 0);
  }
  return;
}

