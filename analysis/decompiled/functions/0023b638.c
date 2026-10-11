/* Ghidra pseudocode. PS2 address: 0023b638. Not validated source. */

bool FUN_0023b638(uint param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  uint *puVar6;
  bool bVar7;
  short *psVar8;
  
  iVar2 = (&DAT_002a33c8)[param_1 & 0xf];
  if (*(int *)(iVar2 + 0x38) == 0) {
    psVar8 = *(short **)(iVar2 + 8);
  }
  else {
    FUN_0023ee58();
    psVar8 = *(short **)(iVar2 + 8);
  }
  while( true ) {
    bVar7 = false;
    lVar4 = FUN_0023b4d8(psVar8);
    if (lVar4 != 0) {
      sVar1 = *psVar8;
      iVar5 = 0;
      uVar3 = DAT_002c5a2c;
      if (sVar1 == 0x4253) {
        uVar3 = 2;
        if ((psVar8[1] & 0x8000U) != 0) {
          iVar5 = 2;
          uVar3 = DAT_002c5a2c;
        }
      }
      else if (sVar1 == 0x4246) {
        if ((psVar8[1] & 0x4000U) != 0) {
          iVar5 = 0;
          if ((*(short **)(*(int *)(psVar8 + 8) + 0x14) == psVar8) &&
             (iVar5 = 1, *(short **)(*(int *)(psVar8 + 10) + 0x10) != psVar8)) {
            iVar5 = 0;
          }
          if (iVar5 == 0) {
            uVar3 = 5;
          }
        }
      }
      else {
        uVar3 = 4;
        if (sVar1 == 0x424d) {
          iVar5 = 0;
          if ((*(short **)(*(int *)(psVar8 + 4) + 0xc) == psVar8) &&
             (iVar5 = 1, *(short **)(*(int *)(psVar8 + 6) + 8) != psVar8)) {
            iVar5 = 0;
          }
          uVar3 = DAT_002c5a2c;
          if (iVar5 == 0) {
            uVar3 = 5;
          }
        }
      }
      DAT_002c5a2c = uVar3;
      bVar7 = true;
      if (iVar5 == 0) {
        bVar7 = false;
      }
    }
    if (bVar7 != false) {
      psVar8 = *(short **)(psVar8 + 4);
    }
    if (psVar8 == (short *)0x0) break;
    if (bVar7 == false) {
      iVar2 = *(int *)(iVar2 + 0x38);
LAB_0023b818:
      if (iVar2 != 0) {
        FUN_0023ea60();
      }
      return bVar7;
    }
  }
  if (bVar7 != false) {
    bVar7 = false;
    puVar6 = (uint *)(iVar2 + 0x10);
    do {
      puVar6 = (uint *)puVar6[4];
    } while ((*puVar6 & 0x4000ffff) == 0x40004246);
    if ((short)*puVar6 == 0x4253) {
      do {
        puVar6 = (uint *)puVar6[5];
      } while ((*puVar6 & 0x4000ffff) == 0x40004246);
      bVar7 = puVar6 == (uint *)(iVar2 + 0x10);
    }
    if (bVar7 == false) {
      DAT_002c5a2c = 6;
    }
  }
  iVar2 = *(int *)(iVar2 + 0x38);
  goto LAB_0023b818;
}

