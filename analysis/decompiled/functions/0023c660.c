/* Ghidra pseudocode. PS2 address: 0023c660. Not validated source. */

void FUN_0023c660(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int unaff_s2_lo;
  
  iVar4 = (int)param_1;
  FUN_0023ee58(*(undefined4 *)(iVar4 + 4));
  iVar5 = *(int *)(iVar4 + 0x50);
  if (iVar5 != 0) {
    bVar2 = false;
    if (*(int *)(iVar5 + 4) == 1) goto LAB_0023c6b0;
    if (*(int *)(iVar5 + 0xc) != 0) {
      *(int *)(iVar4 + 0x50) = *(int *)(iVar5 + 0xc);
      goto LAB_0023c6b0;
    }
  }
  bVar2 = true;
LAB_0023c6b0:
  if (bVar2) {
    *(undefined4 *)(iVar4 + 0x28) = 0;
  }
  else {
    unaff_s2_lo = *(int *)(iVar4 + 0x50);
    uVar1 = *(undefined4 *)(iVar4 + 0x44);
    *(undefined4 *)(unaff_s2_lo + 4) = 2;
    *(undefined4 *)(unaff_s2_lo + 0x60) = uVar1;
  }
  FUN_0023ea60(*(undefined4 *)(iVar4 + 4));
  if (bVar2) {
    return;
  }
  iVar5 = *(int *)(unaff_s2_lo + 0x10);
  *(undefined4 *)(iVar4 + 0x48) = *(undefined4 *)(iVar4 + 0x44);
  if (iVar5 == 1) {
    *(undefined4 *)(iVar4 + 0xa0) = 0;
  }
  else {
    iVar5 = iVar4 + 0x5c;
    *(undefined4 *)(iVar4 + 0xa0) = *(undefined4 *)(unaff_s2_lo + 0x58);
    lVar3 = FUN_0025baa0(unaff_s2_lo + 0x14,iVar5);
    if (lVar3 != 0) {
      FUN_0025bbe4(iVar5,unaff_s2_lo + 0x14);
      if (*(int *)(iVar4 + 0x9c) != 0) {
        lVar3 = FUN_00239288(*(int *)(iVar4 + 0x9c),param_2,param_1);
        *(int *)(iVar4 + 0xa4) = (int)lVar3;
        if (lVar3 == 0) {
          return;
        }
        FUN_00238ea0(lVar3,0x23c4d8);
        return;
      }
      lVar3 = FUN_002391d0(iVar5,1,param_2,param_1);
      *(int *)(iVar4 + 0xa4) = (int)lVar3;
      if (lVar3 == 0) {
        return;
      }
      FUN_00238ea0(lVar3,0x23c490);
      return;
    }
  }
  FUN_0023c7f0(param_1,param_2);
  return;
}

