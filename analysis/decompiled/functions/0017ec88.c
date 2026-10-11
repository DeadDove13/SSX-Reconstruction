/* Ghidra pseudocode. PS2 address: 0017ec88. Not validated source. */

undefined8 FUN_0017ec88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  FUN_0017c018();
  iVar6 = (int)param_1;
  *(undefined **)(iVar6 + 4) = &DAT_002b2d38;
  *(undefined4 *)(iVar6 + 0xb38) = 6;
  iVar1 = FUN_00154c60(0x27a598,param_3);
  *(undefined4 *)(iVar6 + 0xba0) = *(undefined4 *)(&DAT_00284e18 + iVar1 * 4);
  *(undefined4 *)(iVar6 + 0xba4) = 0;
  *(undefined4 *)(iVar6 + 0xbac) = 0;
  *(undefined4 *)(iVar6 + 0xbb0) = 0;
  iVar1 = FUN_00154a38(0x27a598,param_3);
  *(int *)(iVar6 + 0xc80) = iVar1;
  *(undefined4 *)(iVar6 + 0xbb4) = 0;
  iVar5 = 0;
  *(undefined4 *)(iVar6 + 0xc88) = 0;
  *(undefined4 *)(iVar6 + 0xc8c) = 0;
  uVar3 = *(uint *)(iVar6 + 0xbac);
  do {
    uVar2 = (int)uVar3 < 0x1f ^ 1;
    iVar4 = uVar2 * 4;
    if (uVar2 != 0) {
      uVar3 = uVar3 - 0x1e;
    }
    if ((*(int *)(iVar1 + 0xc + iVar4) >> (uVar3 & 0x1f) & 1U) == 0) {
      if ((*(int *)(iVar1 + 4 + iVar4) >> (uVar3 & 0x1f) & 1U) != 0) {
        iVar4 = *(int *)(iVar6 + 0xbb4);
        goto LAB_0017ed70;
      }
    }
    else {
      iVar4 = *(int *)(iVar6 + 0xbb4);
LAB_0017ed70:
      *(int *)(iVar6 + 0xbb4) = iVar4 + 1;
    }
    iVar5 = iVar5 + 1;
    uVar3 = *(uint *)(iVar6 + 0xbac) + iVar5;
    if (0x31 < iVar5) {
      return param_1;
    }
  } while( true );
}

