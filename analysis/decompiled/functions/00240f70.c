/* Ghidra pseudocode. PS2 address: 00240f70. Not validated source. */

void FUN_00240f70(int param_1)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  puVar5 = &DAT_002a4b94;
  piVar8 = (int *)&DAT_002a4ba0;
  iVar7 = 0;
  cVar1 = (&DAT_002a4b9b)[param_1 * 0x40];
  iVar6 = 0;
  uVar3 = (&DAT_002a4b94)[param_1 * 0x10];
  uVar2 = (&DAT_002a4b98)[param_1 * 0x20];
  DAT_002a4b90 = 0;
  do {
    if ((((iVar7 != param_1) && ((&DAT_002a4b9a)[iVar6] != '\0')) &&
        ((&DAT_002a4b9b)[iVar6] == cVar1)) && (*(short *)((int)&DAT_002a4b9c + iVar6) == 0)) {
      if (*puVar5 < uVar3) {
LAB_00241038:
        if ((*(byte *)(*(int *)(&DAT_002a4ba0 + iVar6) + 10) >> 2 & 1) == 0) {
          FUN_00240e60(iVar7);
        }
      }
      else {
        if (*puVar5 == uVar3) {
          if (*(ushort *)((int)&DAT_002a4b98 + iVar6) < uVar2) goto LAB_00241038;
          iVar4 = *piVar8;
        }
        else {
          iVar4 = *piVar8;
        }
        if ((*(char *)(iVar4 + 9) == 'd') && ((&DAT_002a4b9b)[iVar6] == cVar1)) {
          DAT_002a4b90 = 1;
        }
      }
    }
    iVar7 = iVar7 + 1;
    piVar8 = piVar8 + 0x10;
    puVar5 = puVar5 + 0x10;
    iVar6 = iVar6 + 0x40;
    if (0xf < iVar7) {
      return;
    }
  } while( true );
}

