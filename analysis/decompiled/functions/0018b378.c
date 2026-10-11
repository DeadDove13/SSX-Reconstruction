/* Ghidra pseudocode. PS2 address: 0018b378. Not validated source. */

void FUN_0018b378(void)

{
  undefined4 uVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  
  if (DAT_002c4e9c != (code *)0x0) {
    (*DAT_002c4e9c)(DAT_002c4ea0,DAT_00285b34,DAT_00285b38);
  }
  uVar1 = DAT_00285b3c;
  if ((DAT_00285b00 & 1) != 0) {
    uVar1 = DAT_00285b44;
  }
  bVar2 = false;
  iVar4 = 0;
  do {
    if (2 < iVar4) {
LAB_0018b448:
      if (!bVar2) {
        DAT_00285b18 = DAT_002c5aa0;
      }
      return;
    }
    lVar3 = FUN_002486d0(DAT_00285b34,DAT_00285b38,uVar1,0x285b24);
    if (lVar3 != 0) {
      bVar2 = true;
      if (DAT_00285b18 == -1) {
        DAT_00285b18 = DAT_002c5aa0 + DAT_002c5ab4 * 1000;
        bVar2 = true;
      }
      goto LAB_0018b448;
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

