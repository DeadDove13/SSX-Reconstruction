/* Ghidra pseudocode. PS2 address: 0015fba0. Not validated source. */

void FUN_0015fba0(undefined4 param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                 long param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_70 [16];
  
  FUN_00160530(auStack_70,0x2afc80,0x2c4728,0x2c4730);
  iVar2 = FUN_00160570(auStack_70);
  iVar3 = FUN_00160580(auStack_70);
  fVar6 = 1.0;
  if ((1.0 < param_2) || (fVar6 = -1.0, param_2 < -1.0)) {
    param_2 = fVar6;
  }
  fVar6 = 200.0;
  if ((200.0 <= param_3) && (fVar6 = param_3, 1200.0 < param_3)) {
    fVar6 = 1200.0;
  }
  if (param_4 * fVar6 < 300.0) {
    param_4 = 300.0 / fVar6;
  }
  fVar5 = 0.5;
  if ((param_4 < 0.5) || (fVar5 = DAT_002c255c, DAT_002c255c < param_4)) {
    iVar2 = *(int *)(iVar2 + 0x118);
    param_4 = fVar5;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x118);
  }
  iVar3 = *(int *)(iVar3 + 0x44);
  *(float *)(iVar2 + 200) = fVar6;
  *(undefined4 *)(iVar2 + 0xd8) = param_1;
  *(float *)(iVar2 + 0xfc) = param_2;
  uVar1 = DAT_002859e4;
  *(float *)(iVar3 + 0x20) = param_4;
  uVar4 = FUN_00189b78(uVar1,param_5);
  FUN_0015bbe0(0x27fea0,uVar4);
  DAT_002c4738 = (undefined4)param_5;
  if (param_6 != 0) {
    FUN_0015f258(0x27fea0);
  }
  FUN_0015f350(auStack_70,2);
  return;
}

