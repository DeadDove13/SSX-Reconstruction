/* Ghidra pseudocode. PS2 address: 001b0c08. Not validated source. */

void FUN_001b0c08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  
  if (*(int *)(*(int *)(param_1 + 0x174) + 0xcc) != 0) {
    FUN_001a9810();
    FUN_001aa010(*(undefined4 *)(param_1 + 0x174));
    return;
  }
  iVar3 = param_1 + 0x180;
  if (*(int *)(param_1 + 0x178) != 2) {
    FUN_001ab548(iVar3);
    if (*(int *)(param_1 + 0x280) == 0) {
      if (*(int *)(param_1 + 0x27c) == 0) {
        if ((DAT_0027ba88 == 1) && (DAT_0027b810 == 2)) {
          FUN_001ab870(iVar3);
        }
      }
      else {
        uVar6 = 0x3f800000;
        FUN_0011ed18(0x295e90,5);
        DAT_0028ad30 = 0x3f800000;
        DAT_0028ad34 = 0x3f800000;
        DAT_0028ad38 = 0x3f800000;
        DAT_0028ad3c = 0x3f800000;
        FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
        fVar9 = 3.0;
        FUN_0011ed48(0x295e90,3);
        FUN_0019f6d8(0x42c80000,0x43820000,0x44070000,0x40400000,0x28ad30);
        uVar1 = DAT_002c3384;
        FUN_0011ed18(0x295e90,6);
        iVar3 = 0;
        puVar5 = &DAT_002b6418;
        uVar7 = DAT_002c3388;
        fVar8 = 145.0;
        do {
          if ((*(int *)(param_1 + 0x1d4) != iVar3) ||
             (DAT_0028ad3c = uVar6, *(int *)(param_1 + 0x1bc) == 0)) {
            DAT_0028ad3c = uVar1;
          }
          iVar3 = iVar3 + 1;
          DAT_0028ad30 = uVar6;
          DAT_0028ad34 = DAT_0028ad3c;
          DAT_0028ad38 = DAT_0028ad3c;
          FUN_001a90b8(DAT_0028b248 - fVar9,fVar8,uVar7,uVar7,*(undefined4 *)(param_1 + 0x174),
                       *puVar5,8);
          puVar5 = puVar5 + 1;
          fVar8 = fVar8 + 40.0;
        } while (iVar3 < 3);
      }
    }
    else if (DAT_0027b810 == 2) {
      FUN_001ab870(iVar3);
      if ((*(int *)(param_1 + 0x2a0) != 0) && (*(int *)(param_1 + 0x1bc) != 0)) {
        iVar3 = 0;
        FUN_0011ed18(0x295e90,7);
        DAT_0028ad3c = 0x3f800000;
        DAT_0028ad30 = 0x3f800000;
        DAT_0028ad34 = 0x3f800000;
        DAT_0028ad38 = 0x3f800000;
        if (0 < *(int *)(param_1 + 0x2a0)) {
          piVar4 = (int *)(param_1 + 0x288);
          iVar2 = *piVar4;
          while( true ) {
            iVar3 = iVar3 + 1;
            piVar4 = piVar4 + 1;
            FUN_001a90b8(*(undefined4 *)(&DAT_002b6428 + iVar2 * 4),0x42ec0000,0x3f000000,0x3f000000
                         ,*(undefined4 *)(param_1 + 0x174),0x23,0);
            if (*(int *)(param_1 + 0x2a0) <= iVar3) break;
            iVar2 = *piVar4;
          }
        }
      }
    }
    else if ((*(int *)(param_1 + 0x1d4) != 3) && (*(int *)(param_1 + 0x1bc) != 0)) {
      FUN_001a90b8(*(undefined4 *)(param_1 + 0x284),0x42ea0000,0x3f000000,0x3f000000,
                   *(undefined4 *)(param_1 + 0x174),(&DAT_002b6418)[*(int *)(param_1 + 0x1d4)],8);
    }
    return;
  }
  FUN_001a9810();
  return;
}

