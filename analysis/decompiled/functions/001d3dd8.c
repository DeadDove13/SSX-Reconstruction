/* Ghidra pseudocode. PS2 address: 001d3dd8. Not validated source. */

void FUN_001d3dd8(undefined8 param_1,int param_2,int param_3,int param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  
  iVar6 = (int)param_1;
  bVar4 = false;
  puVar5 = (undefined4 *)param_5;
  if ((param_4 != *(int *)(iVar6 + 0xd088)) && (*(int *)(iVar6 + 0xd088) = param_4, -1 < param_4)) {
    puVar1 = (undefined8 *)*puVar5;
    bVar4 = true;
    *puVar1 = 0x10000001;
    puVar1[3] = 0x1000000000000000;
    *puVar5 = puVar1 + 4;
    puVar1[1] = 0;
    puVar1[2] = 0;
    FUN_001d43c0(param_1,param_4,param_5);
  }
  iVar2 = *(int *)(param_2 + 0xc);
  if (iVar2 != 0) {
    if (*(int *)(iVar6 + 0xd034) == iVar2) {
      if (param_3 != *(int *)(iVar6 + 0xd084)) {
        uVar3 = *(undefined4 *)(param_2 + 0x10);
        *(int *)(iVar6 + 0xd034) = *(int *)(iVar6 + 0xd034);
        *(undefined4 *)(iVar6 + 0xd038) = uVar3;
        *(int *)(iVar6 + 0xd084) = param_3;
        if (!bVar4) {
          puVar1 = (undefined8 *)*puVar5;
          bVar4 = true;
          *puVar1 = 0x10000001;
          puVar1[3] = 0x1000000000000000;
          *puVar5 = puVar1 + 4;
          puVar1[1] = 0;
          puVar1[2] = 0;
        }
        FUN_001d49e8(param_1,*(undefined4 *)(iVar6 + 0xd034),1,*(undefined4 *)(iVar6 + 0xd038),
                     param_5);
      }
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x10);
      *(int *)(iVar6 + 0xd034) = iVar2;
      *(undefined4 *)(iVar6 + 0xd038) = uVar3;
      *(int *)(iVar6 + 0xd084) = param_3;
      if (!bVar4) {
        puVar1 = (undefined8 *)*puVar5;
        bVar4 = true;
        *puVar1 = 0x10000001;
        puVar1[3] = 0x1000000000000000;
        *puVar5 = puVar1 + 4;
        puVar1[1] = 0;
        puVar1[2] = 0;
      }
      FUN_001d49e8(param_1,*(undefined4 *)(iVar6 + 0xd034),0,*(undefined4 *)(iVar6 + 0xd038),param_5
                  );
    }
    iVar2 = *(int *)(param_2 + 0x10);
    if (*(int *)(iVar6 + 0xd038) != iVar2) {
      uVar3 = *(undefined4 *)(param_2 + 0xc);
      *(int *)(iVar6 + 0xd084) = param_3;
      *(undefined4 *)(iVar6 + 0xd034) = uVar3;
      *(int *)(iVar6 + 0xd038) = iVar2;
      if (!bVar4) {
        puVar1 = (undefined8 *)*puVar5;
        bVar4 = true;
        *puVar1 = 0x10000001;
        puVar1[3] = 0x1000000000000000;
        *puVar5 = puVar1 + 4;
        puVar1[1] = 0;
        puVar1[2] = 0;
      }
      FUN_001d49e8(param_1,*(undefined4 *)(iVar6 + 0xd034),2,*(undefined4 *)(iVar6 + 0xd038),param_5
                  );
    }
  }
  if (*(int *)(iVar6 + 0xd03c) != *(int *)(param_2 + 0x14)) {
    *(int *)(iVar6 + 0xd03c) = *(int *)(param_2 + 0x14);
    if (!bVar4) {
      puVar1 = (undefined8 *)*puVar5;
      bVar4 = true;
      *puVar1 = 0x10000001;
      puVar1[3] = 0x1000000000000000;
      *puVar5 = puVar1 + 4;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    FUN_001d4748(param_1,*(undefined4 *)(iVar6 + 0xd03c),1,param_5);
  }
  if (*(int *)(iVar6 + 0xd040) != *(int *)(param_2 + 0x18)) {
    *(int *)(iVar6 + 0xd040) = *(int *)(param_2 + 0x18);
    if (!bVar4) {
      puVar1 = (undefined8 *)*puVar5;
      bVar4 = true;
      *puVar1 = 0x10000001;
      puVar1[3] = 0x1000000000000000;
      *puVar5 = puVar1 + 4;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    FUN_001d44d0(param_1,*(undefined4 *)(iVar6 + 0xd040),1,param_5);
  }
  if (*(int *)(iVar6 + 0xd044) != *(int *)(param_2 + 0x1c)) {
    *(int *)(iVar6 + 0xd044) = *(int *)(param_2 + 0x1c);
    if (!bVar4) {
      puVar1 = (undefined8 *)*puVar5;
      bVar4 = true;
      *puVar1 = 0x10000001;
      puVar1[3] = 0x1000000000000000;
      *puVar5 = puVar1 + 4;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    FUN_001d4800(param_1,*(undefined4 *)(iVar6 + 0xd044),1,param_5);
  }
  iVar2 = *(int *)(param_2 + 0x24);
  fVar7 = *(float *)(param_2 + 0x28);
  if (((*(int *)(iVar6 + 0xd048) != *(int *)(param_2 + 0x20)) || (*(int *)(iVar6 + 0xd04c) != iVar2)
      ) || (*(float *)(iVar6 + 0xd050) != fVar7)) {
    *(int *)(iVar6 + 0xd048) = *(int *)(param_2 + 0x20);
    *(int *)(iVar6 + 0xd04c) = iVar2;
    *(float *)(iVar6 + 0xd050) = fVar7;
    if (!bVar4) {
      puVar1 = (undefined8 *)*puVar5;
      bVar4 = true;
      *puVar1 = 0x10000001;
      puVar1[3] = 0x1000000000000000;
      *puVar5 = puVar1 + 4;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    FUN_001d48c8(*(undefined4 *)(iVar6 + 0xd050),param_1,*(undefined4 *)(iVar6 + 0xd048),
                 *(undefined4 *)(iVar6 + 0xd04c),1,param_5);
  }
  if (*(int *)(iVar6 + 0xd054) != *(int *)(param_2 + 0x2c)) {
    *(int *)(iVar6 + 0xd054) = *(int *)(param_2 + 0x2c);
    if (!bVar4) {
      puVar1 = (undefined8 *)*puVar5;
      bVar4 = true;
      *puVar1 = 0x10000001;
      puVar1[3] = 0x1000000000000000;
      *puVar5 = puVar1 + 4;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    FUN_001d4748(param_1,*(undefined4 *)(iVar6 + 0xd054),2,param_5);
  }
  if (*(int *)(iVar6 + 0xd058) != *(int *)(param_2 + 0x30)) {
    *(int *)(iVar6 + 0xd058) = *(int *)(param_2 + 0x30);
    if (!bVar4) {
      puVar1 = (undefined8 *)*puVar5;
      bVar4 = true;
      *puVar1 = 0x10000001;
      puVar1[3] = 0x1000000000000000;
      *puVar5 = puVar1 + 4;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    FUN_001d44d0(param_1,*(undefined4 *)(iVar6 + 0xd058),2,param_5);
  }
  if (*(int *)(iVar6 + 0xd05c) != *(int *)(param_2 + 0x34)) {
    *(int *)(iVar6 + 0xd05c) = *(int *)(param_2 + 0x34);
    if (!bVar4) {
      puVar1 = (undefined8 *)*puVar5;
      bVar4 = true;
      *puVar1 = 0x10000001;
      puVar1[3] = 0x1000000000000000;
      *puVar5 = puVar1 + 4;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    FUN_001d4800(param_1,*(undefined4 *)(iVar6 + 0xd05c),2,param_5);
  }
  if (((*(int *)(iVar6 + 0xd060) == *(int *)(param_2 + 0x38)) &&
      (*(int *)(iVar6 + 0xd064) == *(int *)(param_2 + 0x3c))) &&
     (*(float *)(iVar6 + 0xd068) == *(float *)(param_2 + 0x40))) {
    return;
  }
  uVar8 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(iVar6 + 0xd060) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(iVar6 + 0xd064) = uVar3;
  *(undefined4 *)(iVar6 + 0xd068) = uVar8;
  if (!bVar4) {
    puVar1 = (undefined8 *)*puVar5;
    *puVar1 = 0x10000001;
    puVar1[3] = 0x1000000000000000;
    *puVar5 = puVar1 + 4;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  FUN_001d48c8(*(undefined4 *)(iVar6 + 0xd068),param_1,*(undefined4 *)(iVar6 + 0xd060),
               *(undefined4 *)(iVar6 + 0xd064),2,param_5);
  return;
}

