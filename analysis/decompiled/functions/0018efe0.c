/* Ghidra pseudocode. PS2 address: 0018efe0. Not validated source. */

long FUN_0018efe0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  lVar4 = FUN_0018dc18();
  lVar5 = FUN_0018dd28(param_1);
  if ((lVar5 == 0) && (lVar4 == 0)) {
    lVar5 = FUN_0018dd60(param_1);
    iVar7 = (int)param_1;
    if (lVar5 == 0xd) {
      iVar8 = *(int *)(*(int *)(iVar7 + 4) + 0x114);
      lVar4 = (**(code **)(iVar8 + 0x1c))
                        (*(int *)(iVar7 + 4) + (int)*(short *)(iVar8 + 0x18),param_1,0);
    }
    else {
      for (iVar8 = 0; iVar8 != *(int *)(iVar7 + 0x14); iVar8 = iVar8 + 1) {
        if (**(int **)(iVar7 + 0x1c) == *(int *)(iVar8 * 8 + *(int *)(iVar7 + 0x18) + 4)) {
          lVar5 = FUN_0018dd60(param_1);
          if (lVar5 == 0x4b00) {
            iVar6 = *(int *)(iVar7 + 0x14);
          }
          else {
            lVar5 = FUN_0018dd60(param_1);
            if (lVar5 != 0x4800) {
              lVar5 = FUN_0018dd60(param_1);
              if (lVar5 == 0x4d00) {
                iVar6 = *(int *)(iVar7 + 0x14);
              }
              else {
                lVar5 = FUN_0018dd60(param_1);
                if (lVar5 != 0x5000) {
                  return 0;
                }
                iVar6 = *(int *)(iVar7 + 0x14);
              }
              if (iVar6 == 0) {
                trap(7);
              }
              iVar1 = *(int *)(iVar7 + 4);
              iVar2 = *(int *)(iVar1 + 0x114);
              pcVar3 = *(code **)(iVar2 + 0x24);
              **(undefined4 **)(iVar7 + 0x1c) =
                   *(undefined4 *)(((iVar8 + 1) % iVar6) * 8 + *(int *)(iVar7 + 0x18) + 4);
              (*pcVar3)(iVar1 + *(short *)(iVar2 + 0x20),param_1);
              return 0;
            }
            iVar6 = *(int *)(iVar7 + 0x14);
          }
          if (iVar6 == 0) {
            trap(7);
          }
          iVar1 = *(int *)(iVar7 + 4);
          iVar2 = *(int *)(iVar1 + 0x114);
          pcVar3 = *(code **)(iVar2 + 0x24);
          **(undefined4 **)(iVar7 + 0x1c) =
               *(undefined4 *)(((iVar8 + iVar6 + -1) % iVar6) * 8 + *(int *)(iVar7 + 0x18) + 4);
          (*pcVar3)(iVar1 + *(short *)(iVar2 + 0x20),param_1);
          return 0;
        }
      }
      lVar5 = FUN_0018dd60(param_1);
      if (lVar5 == 0x4b00) {
        iVar8 = *(int *)(iVar7 + 0x18);
      }
      else {
        lVar5 = FUN_0018dd60(param_1);
        if (lVar5 != 0x4800) {
          lVar5 = FUN_0018dd60(param_1);
          if (lVar5 == 0x4d00) {
            iVar8 = *(int *)(iVar7 + 0x14);
          }
          else {
            lVar5 = FUN_0018dd60(param_1);
            if (lVar5 != 0x5000) {
              return 0;
            }
            iVar8 = *(int *)(iVar7 + 0x14);
          }
          iVar6 = *(int *)(iVar7 + 4);
          iVar1 = *(int *)(iVar6 + 0x114);
          **(undefined4 **)(iVar7 + 0x1c) = *(undefined4 *)(iVar8 * 8 + *(int *)(iVar7 + 0x18) + -4)
          ;
          (**(code **)(iVar1 + 0x24))(iVar6 + *(short *)(iVar1 + 0x20),param_1);
          return 0;
        }
        iVar8 = *(int *)(iVar7 + 0x18);
      }
      iVar6 = *(int *)(iVar7 + 4);
      iVar1 = *(int *)(iVar6 + 0x114);
      **(undefined4 **)(iVar7 + 0x1c) = *(undefined4 *)(iVar8 + 4);
      (**(code **)(iVar1 + 0x24))(iVar6 + *(short *)(iVar1 + 0x20),param_1);
    }
  }
  return lVar4;
}

