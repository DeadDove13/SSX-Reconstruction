/* Ghidra pseudocode. PS2 address: 0019a018. Not validated source. */

void FUN_0019a018(int *param_1,uint param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int aiStack_50 [4];
  
  FUN_0015fae0(&iStack_60,(uint)&iStack_60 | 4,(uint)&iStack_60 | 8,(uint)&iStack_60 | 0xc,
               aiStack_50);
  if (DAT_0027ad04 == 0) {
    iVar3 = FUN_0015f828();
    param_1[7] = iVar3;
    param_1[6] = aiStack_50[0];
    param_1[2] = iStack_60;
    param_1[3] = iStack_5c;
    param_1[4] = iStack_58;
    param_1[5] = iStack_54;
  }
  else {
    iVar3 = *param_1 + -1;
    if (-1 < iVar3) {
      iVar4 = iVar3 * 0x1c;
      puVar2 = (uint *)(param_1 + iVar3 * 7 + 0xf);
      do {
        if (*puVar2 <= param_2) {
          uVar1 = FUN_0015f828();
          *(int *)((int)param_1 + iVar4 + 0x24) = iStack_60;
          *(int *)((int)param_1 + iVar4 + 0x28) = iStack_5c;
          *(undefined4 *)((int)param_1 + iVar4 + 0x38) = uVar1;
          *(int *)((int)param_1 + iVar4 + 0x2c) = iStack_58;
          *(int *)((int)param_1 + iVar4 + 0x30) = iStack_54;
          *(int *)((int)param_1 + iVar4 + 0x34) = aiStack_50[0];
          return;
        }
        iVar4 = iVar4 + -0x1c;
        iVar3 = iVar3 + -1;
        puVar2 = puVar2 + -7;
      } while (-1 < iVar3);
    }
  }
  return;
}

