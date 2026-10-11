/* Ghidra pseudocode. PS2 address: 0022a0e8. Not validated source. */

long FUN_0022a0e8(long param_1,long param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5
                 )

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  short asStack_190 [4];
  char cStack_188;
  char cStack_187;
  char cStack_186;
  char cStack_185;
  undefined4 auStack_f0 [12];
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  int *piStack_a8;
  
  iVar10 = 0;
  iVar9 = 0;
  iStack_b4 = 0;
  uStack_b0 = 0;
  lVar3 = -8;
  if (param_2 != 0) {
    iStack_c0 = (int)param_2 + 4;
    if (param_1 == 0) {
      param_1 = param_2;
    }
    lVar8 = (long)*(char *)((int)param_5 + 5);
    lVar7 = (long)*(char *)((int)param_5 + 6);
    uStack_bc = param_3;
    uStack_b8 = param_4;
    FUN_002250c0();
    piStack_a8 = &iStack_c0;
    while( true ) {
      bVar1 = DAT_0029aa40 + 1;
      if ((byte)(DAT_0029aa40 + 1) == 0) {
        bVar1 = DAT_0029aa40 + 2;
      }
      DAT_0029aa40 = bVar1;
      lVar3 = 0;
      iVar6 = DAT_0029a8f0;
      if ((long)DAT_0029a890 < 1) break;
      while ((lVar3 = (long)((int)lVar3 + 1), *(char *)(iVar6 + 0xb) == '\0' ||
             (*(byte *)(iVar6 + 0x1a) != DAT_0029aa40))) {
        iVar6 = iVar6 + 0x6c;
        if (DAT_0029a890 <= lVar3) goto LAB_0022a1cc;
      }
    }
LAB_0022a1cc:
    puVar5 = auStack_f0;
    uStack_ac = (uint)DAT_0029aa40;
    lVar3 = -9;
    do {
      lVar4 = FUN_002297d0(piStack_a8,asStack_190);
      if (iStack_b4 == 0) {
        if (asStack_190[0] != 0) {
          uStack_b0 = FUN_0022ec28();
        }
        iStack_b4 = 1;
      }
      if (((((int)cStack_188 <= lVar7) && (lVar7 <= (int)cStack_187)) && ((int)cStack_186 <= lVar8))
         && (lVar8 <= (int)cStack_185)) {
        lVar3 = FUN_00229ca0(uStack_bc,uStack_b8,param_1,param_5,asStack_190,lVar8,lVar7,uStack_b0);
        if (lVar3 < 0) goto LAB_0022a370;
        *puVar5 = (int)lVar3;
        iVar9 = iVar9 + 1;
        puVar5 = puVar5 + 1;
        FUN_002256a8(asStack_190,1);
      }
    } while (lVar4 != 0);
    if (iVar9 == 0) {
LAB_0022a370:
      iVar10 = 0;
      FUN_002250a0();
      if (0 < iVar9) {
        iVar6 = 0;
        do {
          iVar10 = iVar10 + 1;
          FUN_00228918(*(undefined4 *)((int)auStack_f0 + iVar6));
          iVar6 = iVar10 * 4;
        } while (iVar10 < iVar9);
      }
    }
    else {
      if (iVar9 == 1) {
        lVar7 = FUN_00229330(auStack_f0[0]);
        if (-1 < lVar7) {
          iVar9 = DAT_0029a8f0 + (int)lVar7 * 0x6c;
          *(undefined1 *)(iVar9 + 0x17) = 0;
          *(undefined1 *)(iVar9 + 0x1a) = 0;
        }
      }
      else {
        iVar6 = 0;
        if (0 < iVar9) {
          iVar2 = 0;
          do {
            lVar7 = FUN_00229330(*(undefined4 *)((int)auStack_f0 + iVar2));
            if (-1 < lVar7) {
              iVar10 = DAT_0029a8f0 + (int)lVar7 * 0x6c;
              *(undefined1 *)(iVar10 + 0x17) = 0;
              *(char *)(iVar10 + 0x1a) = (char)uStack_ac;
            }
            iVar6 = iVar6 + 1;
            iVar2 = iVar6 * 4;
          } while (iVar6 < iVar9);
        }
        *(undefined1 *)(iVar10 + 0x17) = 1;
      }
      FUN_002250a0();
    }
  }
  return lVar3;
}

