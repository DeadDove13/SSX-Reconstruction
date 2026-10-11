/* Ghidra pseudocode. PS2 address: 00189900. Not validated source. */

void FUN_00189900(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  lVar5 = FUN_0023a448(0x2b3968,0x1678,0);
  if (lVar5 != 0) {
    FUN_0023bbd0(lVar5,0,0x1678);
  }
  uVar1 = FUN_0018ccb0(lVar5);
  iVar6 = (int)param_1;
  *(undefined4 *)(iVar6 + 0x2a0) = uVar1;
  FUN_00189820(param_1);
  FUN_001fa0c8(DAT_002c56e8);
  FUN_00184088(0x2852f8);
  FUN_00168740(0x295e90);
  fVar8 = *(float *)(iVar6 + 0x4c);
  fVar7 = *(float *)(iVar6 + 0x50);
  uVar2 = FUN_00258848(*(float *)(iVar6 + 0x48) * 255.0);
  iVar3 = FUN_00258848(fVar8 * 255.0);
  iVar4 = FUN_00258848(fVar7 * 255.0);
  DAT_00292684 = uVar2 | iVar3 << 8 | iVar4 << 0x10;
  FUN_00188f68(param_1);
  *(undefined4 *)(iVar6 + 0x60) = DAT_002859d4;
  FUN_001839d0(0x2852f8,1);
  iVar3 = *(int *)(iVar6 + 0x44);
  iVar4 = 0;
  do {
    do {
      do {
        while( true ) {
          if (iVar3 != 0) goto LAB_00189ad0;
          lVar5 = FUN_00182580(0x285290);
          if (lVar5 == 0) break;
          iVar4 = iVar4 + 1;
          FUN_00189c70(param_1);
          iVar3 = *(int *)(iVar6 + 0x44);
        }
        if (*(int *)(iVar6 + 0x44) != 0) goto LAB_00189ad0;
        iVar3 = 0;
      } while (iVar4 == 0);
      lVar5 = FUN_001c3a08(0x2913b0);
      iVar3 = *(int *)(iVar6 + 0x44);
    } while (lVar5 == 0);
    if (iVar3 != 0) break;
    FUN_001bf350(param_1);
    FUN_0023e608(0);
    (**(code **)(*(int *)(DAT_002c56e8 + 0x32000) + 0x54))
              ((float)iVar4 / 60.0,
               DAT_002c56e8 + *(short *)(*(int *)(DAT_002c56e8 + 0x32000) + 0x50));
    iVar4 = 0;
    iVar3 = 0;
  } while (*(int *)(iVar6 + 0x44) == 0);
LAB_00189ad0:
  do {
    lVar5 = FUN_001c3a58(0x2913b0);
  } while (lVar5 == 0);
  FUN_001cb670(0x2913b0);
  FUN_001fa8a8(DAT_002c56e8);
  FUN_001839d0(0x2852f8,0);
  iVar3 = *(int *)(iVar6 + 0x2a0);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x114) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0x114) + 8),3);
  }
  *(undefined4 *)(iVar6 + 0x2a0) = 0;
  return;
}

