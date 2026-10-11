/* Ghidra pseudocode. PS2 address: 00189c70. Not validated source. */

void FUN_00189c70(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  int iVar7;
  undefined4 auStack_50 [4];
  
  iVar7 = (int)param_1;
  if (*(int *)(iVar7 + 0x38) != 0) {
    FUN_001957c8();
  }
  FUN_00189ba8(param_1);
  lVar2 = FUN_0018e858(0x28abe0);
  if (lVar2 == 0) {
    lVar2 = FUN_001a3210(*(undefined4 *)(iVar7 + 0x30));
    if (lVar2 == 0) {
      iVar1 = *(int *)(iVar7 + 0x14);
      if ((*(int *)(iVar1 + 0x24) != 1) && (*(int *)(iVar1 + 0x24) != 6)) {
        bVar6 = false;
        if ((*(int *)(iVar7 + 0x38) == 0) || (*(int *)(*(int *)(iVar7 + 0x38) + 0x44) == 0)) {
          iVar4 = *(int *)(iVar1 + 0x80);
          piVar5 = (int *)(iVar1 + 0x90);
          if (0 < iVar4) {
            do {
              iVar1 = *piVar5;
              iVar4 = iVar4 + -1;
              piVar5 = piVar5 + 1;
              if (*(int *)(**(int **)(iVar1 + 0x8a0) + 4) == 0) {
                bVar6 = true;
              }
            } while (iVar4 != 0);
          }
        }
        auStack_50[0] = 0;
        if ((bVar6) ||
           ((lVar2 = FUN_00182690(0x285290,auStack_50), lVar2 == 0xd &&
            (lVar2 = FUN_00100528(*(undefined4 *)(iVar7 + 0x14),auStack_50[0]), lVar2 != 0)))) {
          iVar1 = FUN_001a36e8(*(undefined4 *)(DAT_002859e4 + 0x30));
          if (**(int **)(iVar1 + 0x174) == 0) {
            FUN_0018ea18(0x28abe0,auStack_50[0]);
            FUN_001a32e0(*(undefined4 *)(iVar7 + 0x30),auStack_50[0]);
            if (DAT_0028abe0 == 0) {
              FUN_001a32b0(*(undefined4 *)(iVar7 + 0x30),6,0xffffffffffffffff);
            }
            else {
              FUN_0018e870(0x28abe0,1);
            }
          }
          else {
            uVar3 = FUN_001a36e8(*(undefined4 *)(DAT_002859e4 + 0x30));
            FUN_001e5998(uVar3,auStack_50[0]);
          }
        }
      }
    }
  }
  else {
    FUN_0018e878(0x28abe0);
  }
  FUN_00186908(0x2c4dd8,9);
  FUN_00188270(param_1);
  *(int *)(iVar7 + 0x40) = *(int *)(iVar7 + 0x40) + 1;
  return;
}

