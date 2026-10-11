/* Ghidra pseudocode. PS2 address: 00152ca8. Not validated source. */

undefined4 FUN_00152ca8(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar6 = *(int *)(param_1 + 0x14f0);
  if ((iVar6 == 2) || (iVar6 == 4)) {
    uVar8 = 0x10;
  }
  else if ((iVar6 == 3) || (uVar8 = 0x40, iVar6 == 5)) {
    uVar8 = 0x20;
  }
  iVar6 = 0;
  pcVar4 = (char *)(param_1 + 0x1508);
  do {
    uVar7 = 0;
    if (3 < iVar6) {
LAB_00152d70:
      do {
        iVar5 = 0;
        iVar6 = 0;
        while( true ) {
          if (((*(int *)((int)&DAT_0027bff0 + iVar6) == 0) &&
              ((*(uint *)((int)&DAT_0027bfec + iVar6) & uVar7) != 0)) &&
             ((*(uint *)((int)&DAT_0027bfec + iVar6) & uVar8) != 0)) {
            *(int *)((int)&DAT_0027bff0 + iVar6) = 1;
            return *(undefined4 *)((int)&DAT_0027bfe8 + iVar6);
          }
          iVar5 = iVar5 + 1;
          if (iVar5 == 0x46) break;
          iVar6 = iVar5 * 0xc;
        }
        iVar6 = 0x45;
        puVar2 = &DAT_0027c32c;
        do {
          *puVar2 = 0;
          iVar6 = iVar6 + -1;
          puVar2 = puVar2 + -3;
        } while (-1 < iVar6);
      } while( true );
    }
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 0x50;
    if (-1 < cVar1) {
      lVar3 = FUN_00155290();
      if (lVar3 < 6) {
        uVar7 = 4;
        if (2 < lVar3) {
          uVar7 = 2;
        }
      }
      else {
        uVar7 = 1;
      }
      goto LAB_00152d70;
    }
    iVar6 = iVar6 + 1;
  } while( true );
}

