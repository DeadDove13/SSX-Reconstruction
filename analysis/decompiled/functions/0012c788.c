/* Ghidra pseudocode. PS2 address: 0012c788. Not validated source. */

void FUN_0012c788(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 3;
  FUN_001cb238(0x2913b0,5,0);
  puVar2 = param_2;
  do {
    iVar3 = param_2[0x24];
    *(undefined4 *)(param_1 + 0x80) = puVar2[8];
    *(undefined4 *)(param_1 + 0x84) = puVar2[9];
    *(undefined4 *)(param_1 + 0x88) = puVar2[10];
    *(undefined4 *)(param_1 + 0x8c) = puVar2[0xb];
    iVar3 = FUN_002237f8(0x299cc8,*(undefined4 *)
                                   (*(short *)((int)puVar2 + 0x12) * 4 +
                                    *(int *)(*(short *)(puVar2 + 4) * 4 + iVar3) + 0x14));
    iVar3 = *(int *)(*(int *)(iVar3 + 0xcc) * 8 + DAT_00299ce0);
    iVar5 = DAT_00299ce8 + *(int *)(*(int *)(iVar3 + 0x24) + 0x24) * 0xc;
    iVar4 = FUN_00223350(0x299cc8,*(undefined2 *)(iVar5 + 6));
    iVar6 = DAT_00299ce8;
    iVar1 = *(int *)(*(int *)(iVar3 + 0x28) + 0x24);
    *(undefined2 *)(iVar5 + 4) = *(undefined2 *)(iVar4 + *(short *)(puVar2 + 5) * 2 + 4);
    iVar6 = iVar6 + iVar1 * 0xc;
    iVar4 = FUN_00223350(0x299cc8,*(undefined2 *)(iVar6 + 6));
    iVar1 = DAT_00299ce8;
    *(undefined2 *)(iVar6 + 4) = *(undefined2 *)(iVar4 + *(short *)((int)puVar2 + 0x16) * 2 + 4);
    iVar7 = iVar7 + -1;
    FUN_001be6d8(0x295e90,iVar3,iVar1,param_1 + 0x50,param_1 + 0x90,0,0);
    puVar2 = puVar2 + 8;
  } while (-1 < iVar7);
  FUN_001cb238(0x2913b0,0,0);
  return;
}

