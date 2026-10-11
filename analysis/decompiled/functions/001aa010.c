/* Ghidra pseudocode. PS2 address: 001aa010. Not validated source. */

void FUN_001aa010(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  FUN_0011ed48(0x295e90,3);
  FUN_0011ecf8(0x295e90,1);
  uVar3 = DAT_002913c4;
  FUN_0011ed18(0x295e90,0x12);
  iVar6 = (int)param_1;
  fVar9 = 320.0 - *(float *)(iVar6 + 0xe0) * 0.5;
  fVar10 = 240.0 - *(float *)(iVar6 + 0xe4) * 0.5;
  FUN_001aa360(fVar9,fVar10,param_1);
  FUN_0011ed18(0x295e90,0x13);
  DAT_0028ad3c = 0x3f800000;
  DAT_0028ad30 = 0x3f800000;
  fVar10 = fVar10 + 20.0;
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  uVar1 = *(undefined4 *)(DAT_002859e4 + 0x5c);
  iVar7 = 0;
  piVar5 = (int *)(iVar6 + 0xcc);
  if (*(int *)(iVar6 + 0xcc) == 0) {
LAB_001aa18c:
    fVar8 = *(float *)(iVar6 + 0xe8);
  }
  else {
    iVar2 = *piVar5;
    fVar8 = fVar10;
    while( true ) {
      iVar7 = iVar7 + 1;
      iVar4 = FUN_001a0a88(0x3f800000,uVar1,iVar2,0);
      iVar2 = *piVar5;
      fVar10 = fVar8 + 30.0;
      piVar5 = piVar5 + 1;
      FUN_001a1368(fVar9 + (*(float *)(iVar6 + 0xe0) - (float)iVar4) * 0.5,fVar8,uVar1,iVar2);
      if (1 < iVar7) break;
      if (*piVar5 == 0) goto LAB_001aa18c;
      iVar2 = *piVar5;
      fVar8 = fVar10;
    }
    fVar8 = *(float *)(iVar6 + 0xe8);
  }
  fVar9 = fVar9 + fVar8;
  if (*(int *)(iVar6 + 0xd4) != 0) {
    FUN_001a90b8(fVar9,fVar10,0x3f800000,0x3f800000,param_1,0x58,0);
    fVar8 = 23.0;
    FUN_001a1368(fVar9 + 23.0,fVar10 + 2.0,uVar1,*(undefined4 *)(iVar6 + 0xd4));
    iVar7 = FUN_001a0a88(0x3f800000,uVar1,*(undefined4 *)(iVar6 + 0xd4),0);
    fVar9 = fVar9 + 23.0 + (((float)iVar7 + 40.0) - fVar8);
  }
  if (*(int *)(iVar6 + 0xdc) != 0) {
    FUN_001a90b8(fVar9,fVar10,0x3f800000,0x3f800000,param_1,0x56,0);
    fVar8 = 23.0;
    FUN_001a1368(fVar9 + 23.0,fVar10 + 2.0,uVar1,*(undefined4 *)(iVar6 + 0xdc));
    iVar7 = FUN_001a0a88(0x3f800000,uVar1,*(undefined4 *)(iVar6 + 0xdc),0);
    fVar9 = fVar9 + 23.0 + (((float)iVar7 + 40.0) - fVar8);
  }
  if (*(int *)(iVar6 + 0xd8) != 0) {
    FUN_001a90b8(fVar9,fVar10,0x3f800000,0x3f800000,param_1,0x57,0);
    FUN_001a1368(fVar9 + 23.0,fVar10 + 2.0,uVar1,*(undefined4 *)(iVar6 + 0xd8));
    FUN_001a0a88(0x3f800000,uVar1,*(undefined4 *)(iVar6 + 0xd8),0);
  }
  FUN_0011ed18(0x295e90,uVar3);
  return;
}

