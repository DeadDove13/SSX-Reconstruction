/* Ghidra pseudocode. PS2 address: 0020de80. Not validated source. */

int FUN_0020de80(int param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iStack_40;
  int aiStack_3c [3];
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xd0) = param_3;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 1;
    *(int *)(param_1 + 0xa0) = param_1 + 0xd0;
    FUN_0023bac0(&iStack_40,param_2,4);
    iVar2 = (int)param_2;
    FUN_0023bac0(aiStack_3c,iVar2 + 4,4);
    FUN_0023bac0(*(int *)(param_1 + 0xa0) + 8,iVar2 + 8,4);
    FUN_0023bac0(*(int *)(param_1 + 0xa0) + 0xc,iVar2 + 0xc,4);
    FUN_0023bac0(*(int *)(param_1 + 0xa0) + 0x14,iVar2 + 0x10,0xc);
    FUN_0023bac0(*(int *)(param_1 + 0xa0) + 0x2c,iVar2 + 0x1c,0xc);
    FUN_0023bac0(*(int *)(param_1 + 0xa0) + 0x38,iVar2 + 0x28,0x24);
    FUN_0023bac0(*(int *)(param_1 + 0xa0) + 0x5c,iVar2 + 0x4c,0x24);
    iVar1 = *(int *)(param_1 + 0xa0);
    *(int *)(iVar1 + 0x20) = iVar2 + 0x70;
    iVar3 = (*(int *)(iVar1 + 0xc) + 1) * 0xc + iVar2 + 0x70;
    *(int *)(iVar1 + 0x24) = iVar3;
    if (*(int *)(iVar1 + 8) == 0) {
      *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(iVar1 + 0x24);
    }
    else {
      *(undefined4 *)(iVar1 + 0x28) = 0;
    }
    iVar1 = *(int *)(param_1 + 0xa0);
    iVar2 = (iVar3 + aiStack_3c[0] + iStack_40) - iVar2;
    uVar5 = *(undefined4 *)(iVar1 + 0x18);
    uVar4 = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(iVar1 + 0x14);
    *(undefined4 *)(param_1 + 0x94) = uVar5;
    *(undefined4 *)(param_1 + 0x98) = uVar4;
    *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
  }
  return iVar2;
}

