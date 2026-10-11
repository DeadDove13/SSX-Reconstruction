/* Ghidra pseudocode. PS2 address: 0014c0f0. Not validated source. */

void FUN_0014c0f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int aiStack_70 [12];
  
  piVar4 = aiStack_70;
  piVar6 = aiStack_70;
  lVar3 = FUN_001eac78(param_1 + 0x20);
  if (lVar3 != 0) {
    iVar5 = *(int *)(param_1 + 0x54);
    iVar7 = 0;
    if (iVar5 != param_1 + 500) {
      iVar1 = *(int *)(iVar5 + 0x24);
      while( true ) {
        if (iVar1 == 0) {
          iVar5 = *(int *)(iVar5 + 0x34);
        }
        else {
          *piVar4 = iVar5;
          iVar7 = iVar7 + 1;
          piVar4 = piVar4 + 1;
          iVar5 = *(int *)(iVar5 + 0x34);
        }
        if (iVar5 == param_1 + 500) break;
        iVar1 = *(int *)(iVar5 + 0x24);
      }
    }
    if (0 < iVar7) {
      do {
        iVar5 = *piVar6;
        if (*(int *)(iVar5 + 0x210) == 0) {
          FUN_001eacb0(param_1 + 0x20,iVar5,param_1 + 0x20);
        }
        else {
          piVar4 = *(int **)(iVar5 + 0x23c);
          if (piVar4 == (int *)0x0) {
            *(undefined4 *)(param_1 + 8) = 0x1a6;
          }
          else {
            uVar2 = (**(code **)(*piVar4 + 0xc))
                              ((int)piVar4 + (int)*(short *)(*piVar4 + 8),iVar5,param_1 + 0x20,
                               *(undefined4 *)(param_1 + 8));
            *(undefined4 *)(param_1 + 8) = uVar2;
          }
        }
        iVar7 = iVar7 + -1;
        piVar6 = piVar6 + 1;
      } while (iVar7 != 0);
    }
  }
  return;
}

