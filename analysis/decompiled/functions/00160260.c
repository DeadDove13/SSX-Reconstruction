/* Ghidra pseudocode. PS2 address: 00160260. Not validated source. */

void FUN_00160260(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(param_2 + 0x14) = param_4;
  uVar2 = *param_5;
  uVar4 = *(undefined4 *)(param_5 + 1);
  uVar5 = *(undefined4 *)((int)param_5 + 0xc);
  *(int *)(param_2 + 0x20) = (int)uVar2;
  *(int *)(param_2 + 0x24) = (int)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(param_2 + 0x28) = uVar4;
  *(undefined4 *)(param_2 + 0x2c) = uVar5;
  uVar4 = DAT_002859e4;
  *(undefined4 *)(param_2 + 0x30) = param_1;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = param_3;
  iVar3 = FUN_00189b78(uVar4);
  iVar1 = *(int *)(*(int *)(param_2 + 4) + *(int *)(param_2 + 8) * 4);
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  else {
    iVar3 = *(int *)(iVar3 + 0x6cf4);
    if (iVar3 != 0) {
      *(undefined4 *)(param_2 + 0x10) = 1;
      FUN_0014cd18(iVar3,iVar1,0,5);
      return;
    }
  }
  return;
}

