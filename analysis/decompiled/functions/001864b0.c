/* Ghidra pseudocode. PS2 address: 001864b0. Not validated source. */

void FUN_001864b0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  lVar2 = FUN_001868a0();
  if (lVar2 != 0) {
    do {
      lVar3 = FUN_001868d0(param_1,lVar2,param_2);
      piVar7 = (int *)lVar2;
      *(int *)piVar7[1] = *piVar7;
      *(int *)(*piVar7 + 4) = piVar7[1];
      lVar2 = FUN_00186800(param_1,param_2);
      if (lVar2 == 0) {
        iVar5 = *(int *)((int)param_1 + 4);
LAB_001865f4:
        iVar5 = (int)param_2 * 0x34 + iVar5;
        *piVar7 = *(int *)(iVar5 + 4);
        *(int **)(*(int *)(iVar5 + 4) + 4) = piVar7;
        piVar7[1] = iVar5 + 4;
        *(int **)(iVar5 + 4) = piVar7;
      }
      else {
        iVar5 = piVar7[2];
        while (lVar4 = (**(code **)(iVar5 + 0x24))
                                 ((int)piVar7 + (int)*(short *)(iVar5 + 0x20),lVar2), lVar4 == 0) {
          lVar2 = FUN_00186868(param_1,lVar2,param_2);
          if (lVar2 == 0) goto LAB_001865e8;
          iVar5 = piVar7[2];
        }
        lVar4 = (**(code **)(piVar7[2] + 0x2c))((int)piVar7 + (int)*(short *)(piVar7[2] + 0x28));
        piVar6 = (int *)lVar2;
        if (lVar4 == 0) {
          *piVar7 = *piVar6;
          *(int **)(*piVar6 + 4) = piVar7;
          piVar7[1] = (int)piVar6;
          *piVar6 = (int)piVar7;
        }
        else {
          iVar5 = piVar6[2];
          *piVar7 = *piVar6;
          pcVar1 = *(code **)(iVar5 + 0xc);
          *(int **)(*piVar6 + 4) = piVar7;
          piVar7[1] = piVar6[1];
          *(int **)piVar6[1] = piVar7;
          *piVar6 = 0;
          piVar6[1] = 0;
          (*pcVar1)((int)piVar6 + (int)*(short *)(iVar5 + 8),3);
        }
LAB_001865e8:
        if (lVar2 == 0) {
          iVar5 = *(int *)((int)param_1 + 4);
          goto LAB_001865f4;
        }
      }
      lVar2 = lVar3;
    } while (lVar3 != 0);
  }
  return;
}

