/* Ghidra pseudocode. PS2 address: 00131220. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00131304) */
/* WARNING: Removing unreachable block (ram,0x001312bc) */

void FUN_00131220(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  float fVar6;
  
  iVar5 = (int)param_2;
  FUN_00131a40(iVar5 + 0x4c);
  if (*(int *)(iVar5 + 0x2dc) == 0) {
    return;
  }
  if (*(float *)(iVar5 + 0x2e0) == 0.0) {
    iVar2 = *(int *)(*(int *)(*(int *)(iVar5 + 0x40) + 0x394) + 0x24);
    if (iVar2 == 3) {
LAB_001312ac:
      iVar2 = FUN_002109b0();
      uVar1 = *(undefined4 *)(&DAT_002aa118 + (iVar2 % 3) * 4);
    }
    else {
      if (iVar2 < 4) {
        if (iVar2 != 2) goto LAB_001312ac;
        puVar4 = &DAT_002aa148;
      }
      else if (iVar2 == 4) {
        puVar4 = &UNK_002aa128;
      }
      else {
        if (iVar2 != 6) goto LAB_001312ac;
        puVar4 = &UNK_002aa138;
      }
      iVar2 = FUN_002109b0();
      uVar1 = *(undefined4 *)(puVar4 + (iVar2 % 3) * 4);
    }
    FUN_0014cd18(*(undefined4 *)(*(int *)(iVar5 + 0x40) + 0x6cf4),uVar1,0,5);
    if (*(int *)(*(int *)(*(int *)(iVar5 + 0x40) + 0x394) + 0x24) == 1) {
      fVar6 = *(float *)(iVar5 + 0x2e0);
      goto LAB_0013138c;
    }
    *(undefined4 *)(iVar5 + 0x3c) = 1;
  }
  else {
    lVar3 = FUN_00150f10(*(undefined4 *)(*(int *)(iVar5 + 0x40) + 0x6cf4));
    if (lVar3 == 0) {
      FUN_0014c020(0x3f800000,*(undefined4 *)(*(int *)(iVar5 + 0x40) + 0x6cf4));
      FUN_0014c0f0(*(undefined4 *)(*(int *)(iVar5 + 0x40) + 0x6cf4));
    }
    else {
      *(undefined4 *)(iVar5 + 0x3c) = 0;
    }
  }
  fVar6 = *(float *)(iVar5 + 0x2e0);
LAB_0013138c:
  fVar6 = fVar6 + DAT_002c1c08;
  *(float *)(iVar5 + 0x2e0) = fVar6;
  if ((8.0 <= fVar6) &&
     (lVar3 = FUN_00150f10(*(undefined4 *)(*(int *)(iVar5 + 0x40) + 0x6cf4)), lVar3 != 0)) {
    *(undefined4 *)(iVar5 + 0x3c) = 0;
    FUN_0012ff48(param_2,6);
    return;
  }
  return;
}

