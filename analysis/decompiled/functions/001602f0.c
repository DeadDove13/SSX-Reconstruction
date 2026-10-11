/* Ghidra pseudocode. PS2 address: 001602f0. Not validated source. */

void FUN_001602f0(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar2 = FUN_00189b78(DAT_002859e4,*(undefined4 *)(param_1 + 0xc));
  if (*(int *)(param_1 + 0x14) != 0) {
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    FUN_00109448(*(undefined4 *)(param_1 + 0x30),0,uVar2,param_1 + 0x20,&uStack_40,1);
  }
  if ((*(int *)((int)uVar2 + 0x6cf4) != 0) && (fVar3 = (float)FUN_00150e78(), 1.0 <= fVar3)) {
    iVar1 = *(int *)(param_1 + 8) + 1;
    *(int *)(param_1 + 8) = iVar1;
    if (*(int *)(*(int *)(param_1 + 4) + iVar1 * 4) == 0) {
      *(undefined4 *)(param_1 + 8) = 0;
    }
    FUN_0014cd18(*(undefined4 *)((int)uVar2 + 0x6cf4),
                 *(undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4),0,5);
  }
  return;
}

