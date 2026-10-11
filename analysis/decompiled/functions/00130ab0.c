/* Ghidra pseudocode. PS2 address: 00130ab0. Not validated source. */

void FUN_00130ab0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar1 = FUN_001a3750(*(undefined4 *)(DAT_002859e4 + 0x30));
  if (*(int *)(iVar1 + 0xcc) != 0) {
    return;
  }
  fVar7 = 490.0;
  FUN_0011ed18(0x295e90,0xf);
  fVar6 = 640.0;
  piVar4 = (int *)(param_1 + 0x2ec);
  iVar1 = 3;
  do {
    if (*piVar4 != 0) {
      iVar2 = FUN_001a0a88(0x3f800000,*(undefined4 *)(param_1 + 0x38),*piVar4,0);
      fVar5 = fVar6 - ((float)iVar2 + 65.0);
      if (fVar5 < fVar7) {
        fVar7 = fVar5;
      }
    }
    iVar1 = iVar1 + -1;
    piVar4 = piVar4 + 1;
  } while (-1 < iVar1);
  fVar6 = 100.0;
  if (*(int *)(param_1 + 0x2e8) == 1) {
    fVar6 = 65.0;
  }
  FUN_0011ed18(0x295e90,0x10);
  uVar3 = FUN_001a3750(*(undefined4 *)(DAT_002859e4 + 0x30));
  FUN_001aa9d8(fVar7,480.0 - fVar6,uVar3,0,param_1 + 0x2ec,*(undefined4 *)(param_1 + 0x2e8),
               *(undefined4 *)(param_1 + 0x2e4),0x58);
  return;
}

