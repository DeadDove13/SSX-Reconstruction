/* Ghidra pseudocode. PS2 address: 00242ac0. Not validated source. */

uint FUN_00242ac0(undefined2 *param_1,int param_2,undefined1 *param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  
  uVar5 = 0;
  uVar13 = 0;
  cVar1 = *(char *)((int)param_1 + 7);
  bVar2 = *(byte *)(param_1 + 3);
  uVar7 = 2;
  uVar12 = 1;
  do {
    uVar4 = uVar7;
    lVar11 = 0;
    if (0 < (long)cVar1) {
      puVar9 = (undefined1 *)((int)param_1 + ((uint)bVar2 * 2 + 3 & 0x3fc) + 0xc);
      do {
        bVar3 = puVar9[1];
        iVar10 = (int)lVar11;
        if (uVar12 == 0xc) {
          if ((bVar3 & 0xf) == 0) {
            uVar6 = 0;
LAB_00242b98:
            uVar7 = 1 << (7U - iVar10 & 0x1f) & 0xff;
            if (bVar3 >> 4 == 4) {
              uVar8 = 0;
              if (*(int *)((bVar3 & 0xf) * 4 + param_2) != 0) {
                uVar8 = uVar7;
              }
            }
            else {
              if (DAT_002c5b1c == (code *)0x0) {
                lVar11 = -1;
              }
              else {
                lVar11 = (*DAT_002c5b1c)(*param_1,*puVar9,uVar6);
              }
              if (lVar11 == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = uVar7;
                if (lVar11 < 1) {
                  uVar13 = uVar13 | uVar7;
                  uVar8 = 0;
                }
              }
            }
            uVar5 = uVar5 | uVar8;
            lVar11 = (long)(iVar10 + 1);
          }
          else {
            lVar11 = (long)(iVar10 + 1);
          }
        }
        else {
          if ((bVar3 & 0xf) == uVar12) {
            uVar6 = *(undefined4 *)(uVar12 * 4 + param_2);
            goto LAB_00242b98;
          }
          lVar11 = (long)(iVar10 + 1);
        }
        puVar9 = puVar9 + 2;
      } while (lVar11 < cVar1);
    }
    uVar7 = uVar4 + 1;
    uVar12 = uVar4;
    if (0xc < (int)uVar4) {
      *param_3 = (char)uVar13;
      return uVar5;
    }
  } while( true );
}

