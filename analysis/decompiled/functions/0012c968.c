/* Ghidra pseudocode. PS2 address: 0012c968. Not validated source. */

void FUN_0012c968(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 2;
  FUN_001cb238(0x2913b0,5,0);
  iVar2 = param_2;
  do {
    iVar3 = *(int *)(param_2 + 0x90);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(iVar2 + 0x24);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(iVar2 + 0x28);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(iVar2 + 0x2c);
    iVar3 = FUN_002237f8(0x299cc8,*(undefined4 *)
                                   (*(short *)(iVar2 + 0x12) * 4 +
                                    *(int *)(*(short *)(iVar2 + 0x10) * 4 + iVar3) + 0x14));
    iVar3 = *(int *)(*(int *)(iVar3 + 0xcc) * 8 + DAT_00299ce0);
    iVar5 = DAT_00299ce8 + *(int *)(*(int *)(iVar3 + 0x24) + 0x24) * 0xc;
    iVar4 = FUN_00223350(0x299cc8,*(undefined2 *)(iVar5 + 6));
    iVar6 = DAT_00299ce8;
    iVar1 = *(int *)(*(int *)(iVar3 + 0x28) + 0x24);
    *(undefined2 *)(iVar5 + 4) = *(undefined2 *)(iVar4 + *(short *)(iVar2 + 0x14) * 2 + 4);
    iVar6 = iVar6 + iVar1 * 0xc;
    iVar5 = FUN_00223350(0x299cc8,*(undefined2 *)(iVar6 + 6));
    iVar4 = DAT_00299ce8;
    iVar1 = *(int *)(*(int *)(iVar3 + 0x2c) + 0x24);
    *(undefined2 *)(iVar6 + 4) = *(undefined2 *)(iVar5 + *(short *)(iVar2 + 0x16) * 2 + 4);
    iVar4 = iVar4 + iVar1 * 0xc;
    iVar5 = FUN_00223350(0x299cc8,*(undefined2 *)(iVar4 + 6));
    iVar6 = DAT_00299ce8;
    iVar1 = *(int *)(*(int *)(iVar3 + 0x30) + 0x24);
    *(undefined2 *)(iVar4 + 4) = *(undefined2 *)(iVar5 + *(short *)(iVar2 + 0x34) * 2 + 4);
    iVar6 = iVar6 + iVar1 * 0xc;
    iVar4 = FUN_00223350(0x299cc8,*(undefined2 *)(iVar6 + 6));
    iVar1 = DAT_00299ce8;
    *(undefined2 *)(iVar6 + 4) = *(undefined2 *)(iVar4 + *(short *)(iVar2 + 0x36) * 2 + 4);
    iVar7 = iVar7 + -2;
    FUN_001be6d8(0x295e90,iVar3,iVar1,param_1 + 0x50,param_1 + 0x90,0,0);
    iVar2 = iVar2 + 0x40;
  } while (-1 < iVar7);
  FUN_001cb238(0x2913b0,0,0);
  return;
}

