/* Ghidra pseudocode. PS2 address: 0016b3d8. Not validated source. */

void FUN_0016b3d8(undefined8 param_1,uint param_2,long param_3,long param_4,long param_5,
                 long param_6)

{
  int iVar1;
  float fVar2;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  fVar2 = -25.0;
  iVar1 = (int)param_1;
  if (param_4 == 0) {
    FUN_0016eb08(*(undefined4 *)(iVar1 + 0x178),0x359);
  }
  else {
    FUN_0016eae0(*(undefined4 *)(iVar1 + 0x178),0x359);
    FUN_0016e100(*(undefined4 *)(iVar1 + 0x178),0xffffffffffffffff);
    uStack_8c = 0xc3800000;
    uStack_88 = 0x428c0000;
    uStack_90 = 0;
    uStack_84 = 0;
    FUN_0016f538(*(undefined4 *)(iVar1 + 0x178),0xffffffffffffffff,&uStack_90);
    fVar2 = -8.0;
    FUN_0016b110(0,0xc1c80000,0x43360000,0x41c80000,0x3f800000,0x3f800000,param_1,param_4,1,
                 param_2 & 1,0);
  }
  if (param_6 == 0) {
    FUN_0016eb08(*(undefined4 *)(iVar1 + 0x178),0x358);
  }
  else {
    FUN_0016eae0(*(undefined4 *)(iVar1 + 0x178),0x358);
    FUN_0016e100(*(undefined4 *)(iVar1 + 0x178),0xffffffffffffffff);
    uStack_8c = 0xc37f0000;
    uStack_88 = 0x428c0000;
    uStack_90 = 0;
    uStack_84 = 0;
    FUN_0016f538(*(undefined4 *)(iVar1 + 0x178),0xffffffffffffffff,&uStack_90);
    FUN_0016b110(0,fVar2,0x43360000,0x41c80000,0x3f800000,0x3f800000,param_1,param_6,1,
                 (int)param_2 >> 1 & 1,0);
    fVar2 = fVar2 + 17.0;
  }
  if (param_5 == 0) {
    FUN_0016eb08(*(undefined4 *)(iVar1 + 0x178),0x35b);
  }
  else {
    FUN_0016eae0(*(undefined4 *)(iVar1 + 0x178),0x35b);
    FUN_0016e100(*(undefined4 *)(iVar1 + 0x178),0xffffffffffffffff);
    uStack_8c = DAT_002c27b8;
    uStack_88 = 0x428c0000;
    uStack_90 = 0;
    uStack_84 = 0;
    FUN_0016f538(*(undefined4 *)(iVar1 + 0x178),0xffffffffffffffff,&uStack_90);
    FUN_0016b110(0,fVar2,0x43360000,0x41c80000,0x3f800000,0x3f800000,param_1,param_5,1,
                 (int)param_2 >> 2 & 1,0);
    fVar2 = fVar2 + 17.0;
  }
  if (param_3 == 0) {
    FUN_0016eb08(*(undefined4 *)(iVar1 + 0x178),0x35a);
  }
  else {
    FUN_0016eae0(*(undefined4 *)(iVar1 + 0x178),0x35a);
    FUN_0016e100(*(undefined4 *)(iVar1 + 0x178),0xffffffffffffffff);
    uStack_8c = 0xc3340000;
    uStack_88 = 0x428c0000;
    uStack_90 = 0;
    uStack_84 = 0;
    FUN_0016f538(*(undefined4 *)(iVar1 + 0x178),0xffffffffffffffff,&uStack_90);
    FUN_0016b110(0,fVar2,0x43360000,0x41c80000,0x3f800000,0x3f800000,param_1,param_3,1,
                 (int)param_2 >> 3 & 1,0);
  }
  return;
}

