/* Ghidra pseudocode. PS2 address: 0012cbc8. Not validated source. */

void FUN_0012cbc8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  
  iVar7 = 0;
  psVar6 = (short *)(param_2 + 0x10);
  FUN_001cb238(0x2913b0,5,0);
  do {
    iVar2 = *(int *)(param_2 + 0x90);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(psVar6 + 8);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(psVar6 + 10);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(psVar6 + 0xc);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(psVar6 + 0xe);
    iVar2 = FUN_002237f8(0x299cc8,*(undefined4 *)
                                   (psVar6[1] * 4 + *(int *)(*psVar6 * 4 + iVar2) + 0x14));
    iVar2 = *(int *)(*(int *)(iVar2 + 0xcc) * 8 + DAT_00299ce0);
    iVar4 = DAT_00299ce8 + *(int *)(*(int *)(iVar2 + 0x24) + 0x24) * 0xc;
    iVar3 = FUN_00223350(0x299cc8,*(undefined2 *)(iVar4 + 6));
    iVar5 = DAT_00299ce8;
    iVar1 = *(int *)(*(int *)(iVar2 + 0x28) + 0x24);
    *(undefined2 *)(iVar4 + 4) = *(undefined2 *)(iVar3 + psVar6[2] * 2 + 4);
    iVar5 = iVar5 + iVar1 * 0xc;
    iVar4 = FUN_00223350(0x299cc8,*(undefined2 *)(iVar5 + 6));
    iVar3 = DAT_00299ce8;
    iVar1 = *(int *)(*(int *)(iVar2 + 0x2c) + 0x24);
    *(undefined2 *)(iVar5 + 4) = *(undefined2 *)(iVar4 + psVar6[3] * 2 + 4);
    iVar3 = iVar3 + iVar1 * 0xc;
    iVar4 = FUN_00223350(0x299cc8,*(undefined2 *)(iVar3 + 6));
    iVar5 = DAT_00299ce8;
    iVar1 = *(int *)(*(int *)(iVar2 + 0x30) + 0x24);
    *(undefined2 *)(iVar3 + 4) = *(undefined2 *)(iVar4 + psVar6[0x12] * 2 + 4);
    iVar5 = iVar5 + iVar1 * 0xc;
    iVar4 = FUN_00223350(0x299cc8,*(undefined2 *)(iVar5 + 6));
    iVar3 = DAT_00299ce8;
    iVar1 = *(int *)(*(int *)(iVar2 + 0x34) + 0x24);
    *(undefined2 *)(iVar5 + 4) = *(undefined2 *)(iVar4 + psVar6[0x13] * 2 + 4);
    iVar3 = iVar3 + iVar1 * 0xc;
    iVar4 = FUN_00223350(0x299cc8,*(undefined2 *)(iVar3 + 6));
    iVar5 = DAT_00299ce8;
    iVar1 = *(int *)(*(int *)(iVar2 + 0x38) + 0x24);
    *(undefined2 *)(iVar3 + 4) = *(undefined2 *)(iVar4 + psVar6[0x22] * 2 + 4);
    iVar5 = iVar5 + iVar1 * 0xc;
    iVar4 = FUN_00223350(0x299cc8,*(undefined2 *)(iVar5 + 6));
    iVar3 = DAT_00299ce8;
    iVar1 = *(int *)(*(int *)(iVar2 + 0x3c) + 0x24);
    *(undefined2 *)(iVar5 + 4) = *(undefined2 *)(iVar4 + psVar6[0x23] * 2 + 4);
    iVar3 = iVar3 + iVar1 * 0xc;
    iVar4 = FUN_00223350(0x299cc8,*(undefined2 *)(iVar3 + 6));
    iVar5 = DAT_00299ce8;
    iVar1 = *(int *)(*(int *)(iVar2 + 0x40) + 0x24);
    *(undefined2 *)(iVar3 + 4) = *(undefined2 *)(iVar4 + psVar6[0x32] * 2 + 4);
    iVar5 = iVar5 + iVar1 * 0xc;
    iVar3 = FUN_00223350(0x299cc8,*(undefined2 *)(iVar5 + 6));
    iVar1 = DAT_00299ce8;
    *(undefined2 *)(iVar5 + 4) = *(undefined2 *)(iVar3 + psVar6[0x33] * 2 + 4);
    iVar7 = iVar7 + -4;
    FUN_001be6d8(0x295e90,iVar2,iVar1,param_1 + 0x50,param_1 + 0x90,0,0);
    psVar6 = psVar6 + 0x40;
  } while (-1 < iVar7);
  FUN_001cb238(0x2913b0,0,0);
  return;
}

