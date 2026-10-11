/* Ghidra pseudocode. PS2 address: 0022a770. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0022aa34) */
/* WARNING: Removing unreachable block (ram,0x0022a9f0) */
/* WARNING: Removing unreachable block (ram,0x0022a928) */
/* WARNING: Removing unreachable block (ram,0x0022a888) */
/* WARNING: Removing unreachable block (ram,0x0022a97c) */

void FUN_0022a770(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  bVar2 = (byte)DAT_0029a828;
  iVar11 = 0;
  do {
    iVar9 = iVar11 * 0x100;
    if (bVar2 == 1) {
      (&DAT_0029aa48)[iVar11 * 2] = 0x7f;
    }
    else {
      iVar6 = 0;
      if ((byte)DAT_0029a828 != 0) {
        do {
          iVar3 = iVar6 + iVar11 * 2;
          uVar4 = (uint)(byte)DAT_0029a828;
          iVar6 = iVar6 + 1;
          (&DAT_0029aa48)[iVar3] = 0;
        } while (iVar6 < (int)uVar4);
      }
      uVar10 = (uint)(byte)DAT_0029a828;
      puVar7 = (ushort *)((int)&DAT_0029a838 + uVar10 * 4 + 4);
      uVar4 = (uint)*puVar7;
      if ((int)uVar4 < iVar9) {
        if (iVar9 < (int)(uint)puVar7[uVar10 - 1]) {
          if ((byte)DAT_0029a828 != 0) {
            uVar4 = (uint)(byte)DAT_0029a828;
            pcVar5 = &DAT_0029aa48 + iVar11 * 2;
            do {
              uVar4 = uVar4 - 1;
              if ((int)(uint)*puVar7 <= iVar9) {
                iVar3 = iVar9 - (uint)*puVar7;
                iVar6 = (uint)puVar7[1] + iVar11 * -0x100;
                iVar8 = iVar3 + iVar6;
                if (iVar9 <= (int)(uint)puVar7[1]) {
                  iVar6 = (iVar6 * 0x7f) / iVar8;
                  iVar3 = (iVar3 * 0x7f) / iVar8;
                  if (iVar8 == 0) {
                    trap(7);
                  }
                  *pcVar5 = (char)iVar6 * '\x02' - (char)((iVar6 * iVar6) / 0x7f);
                  if (iVar8 == 0) {
                    trap(7);
                  }
                  pcVar5[1] = (char)iVar3 * '\x02' - (char)((iVar3 * iVar3) / 0x7f);
                }
              }
              pcVar5 = pcVar5 + 1;
              puVar7 = puVar7 + 1;
            } while (uVar4 != 0);
          }
          goto LAB_0022aa4c;
        }
        iVar9 = iVar9 - (uint)puVar7[uVar10 - 1];
        iVar6 = uVar4 + 0x10000 + iVar11 * -0x100;
        iVar3 = iVar6 + iVar9;
        iVar9 = (iVar9 * 0x7f) / iVar3;
        if (iVar3 == 0) {
          trap(7);
        }
        iVar6 = (iVar6 * 0x7f) / iVar3;
        (&DAT_0029aa48)[iVar11 * 2] = (char)iVar9 * '\x02' - (char)((iVar9 * iVar9) / 0x7f);
        cVar1 = (char)iVar6 * '\x02' - (char)((iVar6 * iVar6) / 0x7f);
        if (iVar3 == 0) {
          trap(7);
        }
      }
      else {
        iVar3 = uVar4 + iVar11 * -0x100;
        iVar6 = (iVar9 + 0x10000) - (uint)puVar7[uVar10 - 1];
        iVar8 = iVar3 + iVar6;
        iVar9 = (iVar3 * 0x7f) / iVar8;
        iVar6 = (iVar6 * 0x7f) / iVar8;
        if (iVar8 == 0) {
          trap(7);
        }
        cVar1 = (char)iVar9 * '\x02' - (char)((iVar9 * iVar9) / 0x7f);
        (&DAT_0029aa48)[iVar11 * 2] = (char)iVar6 * '\x02' - (char)((iVar6 * iVar6) / 0x7f);
        if (iVar8 == 0) {
          trap(7);
        }
      }
      *(char *)(uVar10 + iVar11 * 2 + 0x29aa47) = cVar1;
    }
LAB_0022aa4c:
    iVar11 = iVar11 + 1;
    if (0xff < iVar11) {
      return;
    }
  } while( true );
}

