/* Ghidra pseudocode. PS2 address: 001b3278. Not validated source. */

void FUN_001b3278(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 *puVar7;
  int *piVar8;
  float fVar9;
  int iVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  
  puVar7 = &uStack_100;
  FUN_001ab960();
  uVar3 = DAT_002c33cc;
  iVar10 = *(int *)(DAT_002859e4 + 0x58);
  uVar5 = FUN_00234e80(DAT_002852fc,0x6f);
  iVar4 = FUN_001a0a88(uVar3,iVar10,uVar5,0);
  uVar11 = 0x3f800000;
  uVar13 = 0;
  DAT_0028ad30 = 0x3f800000;
  fVar9 = 85.0;
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  DAT_0028ad3c = 0;
  uVar5 = FUN_00234e80(DAT_002852fc,0x6f);
  FUN_001a1578(uVar3,320.0 - (float)iVar4 * 0.5,fVar9,iVar10,uVar5);
  iVar10 = *(int *)(iVar10 + 0xc);
  FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
  FUN_0011ed48(0x295e90,3);
  DAT_0028ad30 = uVar11;
  DAT_0028ad34 = uVar11;
  DAT_0028ad38 = uVar11;
  DAT_0028ad3c = uVar11;
  FUN_0019f6d8(0x42c80000,((float)iVar10 + fVar9 + 3.0 + 6.0) - 1.5,DAT_002c33d0,0x40400000,0x28ad30
              );
  if (*(int *)(param_1 + 0x48) == 0) {
    uVar1 = *(undefined4 *)(DAT_002859e4 + 0x58);
    uVar2 = *(undefined4 *)(DAT_002859e4 + 0x5c);
    if (*(int *)(param_1 + 0x4c) != 0) {
      iVar10 = FUN_001a0840(uVar3,uVar1,*(int *)(param_1 + 0x4c),0);
      DAT_0028ad30 = uVar11;
      DAT_0028ad34 = uVar11;
      DAT_0028ad38 = uVar11;
      DAT_0028ad3c = uVar13;
      FUN_001a1470(uVar3,320.0 - (float)(iVar10 / 2),0x42f00000,uVar1,
                   *(undefined4 *)(param_1 + 0x4c));
    }
    if (*(int *)(param_1 + 0x5c) != 0) {
      iVar10 = FUN_001a0840(uVar3,uVar2,*(int *)(param_1 + 0x5c),0);
      DAT_0028ad30 = uVar11;
      DAT_0028ad34 = uVar11;
      DAT_0028ad38 = uVar11;
      DAT_0028ad3c = uVar11;
      FUN_001a1470(uVar3,320.0 - (float)(iVar10 / 2),0x43110000,uVar2,
                   *(undefined4 *)(param_1 + 0x5c));
      iVar10 = *(int *)(param_1 + 0x44);
      goto LAB_001b35d0;
    }
  }
  else {
    uVar1 = *(undefined4 *)(DAT_002859e4 + 0x58);
    uVar2 = *(undefined4 *)(DAT_002859e4 + 0x5c);
    fVar9 = 170.0;
    piVar8 = (int *)(param_1 + 0x5c);
    piVar6 = (int *)(param_1 + 0x4c);
    iVar10 = 3;
    do {
      if (*piVar6 != 0) {
        iVar4 = FUN_001a0840(uVar3,uVar1,*piVar6,0);
        DAT_0028ad30 = uVar11;
        DAT_0028ad34 = uVar11;
        DAT_0028ad38 = uVar11;
        DAT_0028ad3c = uVar13;
        FUN_001a1470(uVar3,fVar9 - (float)(iVar4 / 2),0x42f00000,uVar1,*piVar6);
      }
      if (*piVar8 != 0) {
        iVar4 = FUN_001a0840(uVar3,uVar2,*piVar8,0);
        DAT_0028ad30 = uVar11;
        DAT_0028ad34 = uVar11;
        DAT_0028ad38 = uVar11;
        DAT_0028ad3c = uVar11;
        FUN_001a1470(uVar3,fVar9 - (float)(iVar4 / 2),0x43110000,uVar2,*piVar8);
      }
      fVar9 = fVar9 + 280.0;
      piVar8 = piVar8 + 1;
      iVar10 = iVar10 + -1;
      piVar6 = piVar6 + 1;
    } while (-1 < iVar10);
  }
  iVar10 = *(int *)(param_1 + 0x44);
LAB_001b35d0:
  fVar9 = DAT_002c33d4;
  if (iVar10 != 0) {
    uVar3 = *(undefined4 *)(DAT_002859e4 + 0x5c);
    iVar10 = 2;
    uStack_f0 = FUN_00234e80(DAT_002852fc,0x41);
    uVar13 = DAT_002c33d8;
    uStack_ec = FUN_00234e80(DAT_002852fc,0x42);
    uStack_f8 = FUN_00234e80(DAT_002852fc,0x43);
    fVar12 = 320.0;
    DAT_0028ad3c = 0x3f800000;
    DAT_0028ad30 = 0x3f800000;
    DAT_0028ad34 = 0x3f800000;
    DAT_0028ad38 = 0x3f800000;
    uStack_100 = CONCAT44(uStack_ec,uStack_f0);
    uVar11 = uStack_f0;
    uStack_e8 = uStack_f8;
    while( true ) {
      iVar4 = FUN_001a0a88(uVar13,uVar3,uVar11,0);
      iVar10 = iVar10 + -1;
      uVar11 = *(undefined4 *)puVar7;
      puVar7 = (undefined8 *)((int)puVar7 + 4);
      FUN_001a1578(uVar13,fVar12 - (float)iVar4 * 0.5,fVar9,uVar3,uVar11);
      if (iVar10 < 0) break;
      uVar11 = *(undefined4 *)puVar7;
      fVar9 = fVar9 + 20.0;
    }
  }
  return;
}

