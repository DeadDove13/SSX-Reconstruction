/* Ghidra pseudocode. PS2 address: 00238a38. Not validated source. */

int FUN_00238a38(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  FUN_0023ee58(DAT_002a336c);
  if (0 < DAT_002a3358) {
    iVar2 = 0;
    do {
      uVar1 = *(uint *)(iVar2 + DAT_002a3374);
      if ((uVar1 >> 0x14 & 0xf) == 0) {
        *(uint *)(iVar2 + DAT_002a3374) = uVar1 & 0xff0fffff | 0x100000;
        *(char *)(iVar2 + DAT_002a3374 + 3) = (char)iVar3;
        uVar1 = DAT_002c59fc + 1;
        *(uint *)(iVar2 + DAT_002a3374) =
             *(uint *)(iVar2 + DAT_002a3374) & 0xfff00000 | DAT_002c59fc & 0xfffff;
        DAT_002c59fc = uVar1;
        if (0xfffff < (int)uVar1) {
          DAT_002c59fc = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x30;
    } while (iVar3 < DAT_002a3358);
  }
  FUN_0023ea60(DAT_002a336c);
  if (iVar3 != DAT_002a3358) {
    return DAT_002a3374 + iVar3 * 0x30;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

