/* Ghidra pseudocode. PS2 address: 00172550. Not validated source. */

void FUN_00172550(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  lVar2 = FUN_0016f348(param_1,0);
  iVar4 = (int)param_1;
  if (lVar2 == 0x16d) {
    lVar2 = FUN_0023a448(0x2b0a60,0x124,0x10);
    if (lVar2 != 0) {
      FUN_0023bbd0(lVar2,0xffffffffdeadc0de,0x124);
    }
    iVar1 = FUN_001756f8(lVar2,param_1,0x2c4930);
    iVar3 = *(int *)(iVar4 + 0xb50) + 0x400;
  }
  else {
    if (lVar2 < 0x16e) {
      if (lVar2 == 0x100) {
        lVar2 = FUN_0023a448(0x2b0a70,0xf8,0x10);
        if (lVar2 != 0) {
          FUN_0023bbd0(lVar2,0xffffffffdeadc0de,0xf8);
        }
        iVar3 = FUN_00175130(lVar2,*(undefined4 *)(iVar4 + 0xb50),param_1,0x2c4930,iVar4 + 0xb54);
        *(int *)(iVar3 + 0x14) = *(int *)(iVar4 + 0xb50) + 0x434;
        *(undefined4 *)(iVar3 + 0x28) = 0xffffffca;
        *(undefined4 *)(iVar3 + 0x30) = 0xffffff6a;
        *(undefined4 *)(iVar3 + 0x34) = 0xffffffa6;
        *(undefined4 *)(iVar3 + 0x38) = 300;
        *(undefined4 *)(iVar3 + 0x3c) = 200;
        *(undefined4 *)(iVar3 + 0x24) = 0xffffffbe;
        *(int *)(iVar4 + 0xb60) = iVar3;
        return;
      }
      if (lVar2 != 0x16c) {
        return;
      }
      lVar2 = FUN_0023a448(0x2b0a40,0x2e4,0x10);
      if (lVar2 != 0) {
        FUN_0023bbd0(lVar2,0xffffffffdeadc0de,0x2e4);
      }
      iVar1 = FUN_00174ca8(lVar2,param_1,0x2b0a50);
      iVar3 = *(int *)(iVar4 + 0xb50);
    }
    else {
      if (lVar2 != 0x16e) {
        if (lVar2 != 0x16f) {
          return;
        }
        lVar2 = FUN_0023a448(0x2b0a80,0x88,0x10);
        if (lVar2 != 0) {
          FUN_0023bbd0(lVar2,0xffffffffdeadc0de,0x88);
        }
        iVar3 = FUN_00176858(0xc3200000,0x43200000,lVar2,param_1,0x2c4930);
        *(int *)(iVar3 + 0x14) = *(int *)(iVar4 + 0xb50) + 0x434;
        *(undefined4 *)(iVar3 + 0x24) = 0xffffffdd;
        *(undefined4 *)(iVar3 + 0x30) = 0xfffffec0;
        *(undefined4 *)(iVar3 + 0x34) = 0xffffff60;
        *(undefined4 *)(iVar3 + 0x3c) = 0x140;
        *(int *)(iVar4 + 0xb60) = iVar3;
        *(undefined4 *)(iVar3 + 0x38) = 0x140;
        return;
      }
      lVar2 = FUN_0023a448(0x2b0a70,0x220,0x10);
      if (lVar2 != 0) {
        FUN_0023bbd0(lVar2,0xffffffffdeadc0de,0x220);
      }
      iVar1 = FUN_00176108(lVar2,param_1,0x2c4930);
      iVar3 = *(int *)(iVar4 + 0xb50);
    }
    iVar3 = iVar3 + 0x434;
  }
  *(int *)(iVar1 + 0x14) = iVar3;
  *(undefined4 *)(iVar1 + 0x28) = 0xffffffba;
  *(undefined4 *)(iVar1 + 0x30) = 0xffffff6a;
  *(undefined4 *)(iVar1 + 0x34) = 0xffffffa6;
  *(undefined4 *)(iVar1 + 0x38) = 300;
  *(undefined4 *)(iVar1 + 0x3c) = 200;
  *(int *)(iVar4 + 0xb60) = iVar1;
  return;
}

