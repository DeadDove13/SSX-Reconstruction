/* Ghidra pseudocode. PS2 address: 0024daf0. Not validated source. */

int FUN_0024daf0(void)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    uVar2 = FUN_0024eaf0(0);
    if (uVar2 == 0x22) {
LAB_0024dba8:
      bVar1 = true;
    }
    else {
      if (uVar2 < 0x23) {
        if (uVar2 == 0) {
          lVar3 = FUN_0024ec90(0xb);
          if ((DAT_002a5b70 == 0) || (lVar3 != 0xf)) {
            FUN_0024af68(0x2bf3e0,0);
            DAT_002a53c8 = 1;
            return 1;
          }
          FUN_0024edc0(0xb);
          goto LAB_0024dba8;
        }
      }
      else if (uVar2 == 0x23) {
        bVar1 = true;
        iVar4 = iVar4 + 0x21;
        goto LAB_0024dbc8;
      }
      iVar4 = iVar4 + (int)uVar2;
      bVar1 = false;
    }
LAB_0024dbc8:
    if (!bVar1) {
      return iVar4;
    }
  } while( true );
}

